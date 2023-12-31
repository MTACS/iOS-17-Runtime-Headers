
@interface _NUContiguousImageLayout : NUImageLayout

- (struct { long long x1; long long x2; })borderSize;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })contentRectForTileAtIndex:(long long)arg1;
- (void)enumerateTilesForReadingInRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 withBlock:(id /* block */)arg2;
- (void)enumerateTilesForWritingInRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 withBlock:(id /* block */)arg2;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })frameRectForTileAtIndex:(long long)arg1;
- (long long)tileCount;
- (struct { long long x1; long long x2; })tileCounts;
- (long long)tileIndexAtPoint:(struct { long long x1; long long x2; })arg1;
- (id)tileInfoAtIndex:(long long)arg1;
- (struct { long long x1; long long x2; })tileSize;

@end
