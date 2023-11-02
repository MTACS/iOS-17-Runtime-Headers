
@interface TSTTileIDKeyDict : TSPContainedObject {
    void * mMap;
}

- (void)applyFunction:(int (*)arg1 withState:(void*)arg2;
- (long long)count;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;
- (void)makeTilesPerformSelector:(SEL)arg1;
- (void)removeAllTiles;
- (void)removeTileForID:(struct { unsigned short x1; unsigned short x2; })arg1;
- (void)setTile:(id)arg1 forID:(struct { unsigned short x1; unsigned short x2; })arg2;
- (id)tileForID:(struct { unsigned short x1; unsigned short x2; })arg1;

@end
