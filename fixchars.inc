//------------------------------------------------------------------------------
// Ez a f˜ggv˜nyk˜nyvt˜r ja˜vtja a hib˜s magyar karaktereket a k˜perny˜re megje-
// len˜ sz˜vegekben (l˜sd GameText,TextDraw stb), tesztelve lett, ˜s m˜k˜dik.
//
// K˜sz˜tette Gamestar 2010/JAN/20
// FRISS˜TVE 2023 OKT˜BER 29
//------------------------------------------------------------------------------

static chlist[][0]={
	"˜","˜","˜","˜",
    "˜","˜","˜","˜",
 	"˜","˜","˜","˜",
 	"˜","˜","˜","˜",
 	"˜","˜","˜","˜",
 	"˜","˜","˜","˜",
 	"˜","˜","˜","˜",
	"˜","˜","˜","˜",
	"˜","˜","˜","˜"
};

stock fixchars_GameTextForPlayer(playerid,text[],time,style)
{
	return GameTextForPlayer(playerid,FixGameString(text),time,style);
}
#define GameTextForPlayer fixchars_GameTextForPlayer

//*******************

stock fixchars_GameTextForAll(text[],time,style)
{
	return GameTextForAll(FixGameString(text),time,style);
}
#define GameTextForAll fixchars_GameTextForAll

//*******************

stock Text:fixchars_TextDrawCreate(Float:x, Float:y, text[])
{
	return TextDrawCreate(x,y,FixGameString(text));
}
#define TextDrawCreate fixchars_TextDrawCreate

/*******************
PlayerText:fixchars_CreatePlayerTextDraw(playerid, Float:x, Float:y, text[])
{
    return CreatePlayerTextDraw(playerid, x, y, FixGameString(text));
}
#define CreatePlayerTextDraw fixchars_CreatePlayerTextDraw

//*******************

//*******************
PlayerText:fixchars_PTDSetString(playerid, PlayerText:text, const string[])
{
    return PlayerTextDrawSetString(playerid, text, FixGameString(string));
}
#define PlayerTextDrawSetString fixchars_PTDSetString

//*******************/

stock Menu:fixchars_CreateMenu(const title[], columns, Float:x, Float:y, Float:col1width, Float:col2width = 0.0)
{
	return CreateMenu(FixGameString(title),columns,x,y,col1width,col2width);
}
#define CreateMenu fixchars_CreateMenu

//*******************

stock fixchars_SetMenuColumnHeader(Menu:menuid, column, const columnheader[])
{
	return SetMenuColumnHeader(menuid, column, FixGameString(columnheader));
}
#define SetMenuColumnHeader fixchars_SetMenuColumnHeader

//*******************

stock fixchars_AddMenuItem(Menu:menuid, column, const menutext[])
{
 	return AddMenuItem(menuid, column, FixGameString(menutext));
}
#define AddMenuItem fixchars_AddMenuItem

//*******************

stock fixchars_TextDrawSetString(Text:text, string[])
{
	return TextDrawSetString(text,FixGameString(string));
}
#define TextDrawSetString fixchars_TextDrawSetString


//*******************
stock FixGameString(const string[])
{
	// T˜rol˜k l˜trehoz˜sa
	new index,
	    dest[256];
	
	// Karakterl˜nc ˜tm˜sol˜sa
	strmid(dest,string,0,strlen(string),sizeof dest);

	// V˜gigl˜pked˜nk a karaktereken
	for(index = 0; index < strlen(dest); index++)
	{
	    // V˜gigl˜pked˜nk a karaktert˜mb˜n
		for(new idx = 0; idx < sizeof(chlist); idx++)
		{
		    // Ha az indexelt karakterek egyeznek
		    if(dest[index] == chlist[idx][0])
		    {
		        // Jav˜tjuk
		        dest[index] = chlist[idx-2][0];
			}
		}
	}

	// Visszat˜r˜s
	return dest;
}

