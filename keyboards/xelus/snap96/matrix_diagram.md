# Matrix Diagram for Xelus Snap96

```
                                                               ┌───────┐
                                                  2u Backspace │74     │
                                                               └───────┘
           ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
           │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │60 │61 │62 │63 │64 │65 │66 │67 │68 │
           ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
           │10 │11 │12 │13 │14 │15 │16 │17 │18 │19 │70 │71 │72 │73 │74 │75 │76 │77 │78 │
           ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┼───┼───┼───┤ ┌───┐    ┌─────┐
           │20   │21 │22 │23 │24 │25 │26 │27 │28 │29 │80 │81 │82 │84   │85 │86 │87 │88 │ │98 │    │84   │
           ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┼───┼───┼───┤ │   │ ┌──┴┐    │ ISO Enter
           │30    │31 │32 │33 │34 │35 │36 │37 │38 │39 │90 │91 │93      │95 │96 │97 │98 │ │   │ │93 │    │
┌────────┐ ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┼───┼───┼───┤ ├───┤ └───┴────┘
│40      │ │40  │41 │42 │43 │44 │45 │46 │47 │48 │49 │A0 │A1 │A3    │A4 │A5 │A6 │A7 │A8 │ │B8 │┌───┬──────────┐
└────────┘ ├────┼───┴┬──┴─┬─┴───┴───┴┬──┴─┬─┴───┴──┬┴───┼───┴┬────┬┴───┼───┼───┼───┼───┤ │   ││A1 │A3        │
           │50  │51  │52  │55        │56  │59      │B0  │B1  │B3  │B4  │B5 │B6 │B7 │B8 │ │   │├───┴──┬───┬───┤
           └────┴────┴────┴──────────┴────┴────────┴────┴────┴────┴────┴───┴───┴───┴───┘ └───┘│A1    │A3 │A4 │
           ┌─────┬───┬─────┬───────────────────────────┬─────┬───┬─────┐ ┌───────┬───┐        └──────┴───┴───┘
           │50   │51 │52   │56                         │B1   │B3 │B4   │ │B5     │B7 │
           ├────┬┴───┼────┬┴───────────────────────┬───┴┬────┼───┴┬────┤ ├───┬───┴───┤
           │50  │51  │52  │56                      │B0  │B1  │B3  │B4  │ │B5 │B7     │
           ├────┼────┼────┼────────┬────┬──────────┼────┼────┼────┼────┤ └───┴───────┘
           │50  │51  │52  │55      │56  │59        │B0  │B1  │B3  │B4  │
           └────┴────┴────┴────────┴────┴──────────┴────┴────┴────┴────┘
```