# SA-MP-GSFixchars
 
Egy SA-MP könyvtár, amely lehetővé teszi pár funkció számára, hogy láthatóak legyen a magyar ékezetes karakterek.

A könyvtárat eredetileg Gamestar készített, viszont hivatalos formában már sehol sem elérhető. Ezentúl telepítése [sampctl](https://github.com/Southclaws/sampctl)-el eddig nem volt megoldható.

## Telepítése

Egyszerűen a parancssorban (amennyiben a sampctl telepítése már megtörtént) írd be a következőt:

`sampctl install House9919/SA-MP-GSFixchars`

Ha ez megtörtént, akkor egyszerűen csak add hozzá a következőt a játékmód/filterscript elejére:

```pawn
#include <fixchars>
```
## Használata

Ha a fentieket megtetted, akkor nincs több teendőd.

## Megjegyzés

Egyes funckiók (pl. CreatePlayerTextDraw) nincsenek hozzáadva, ezek később beépítésre kerülnek.