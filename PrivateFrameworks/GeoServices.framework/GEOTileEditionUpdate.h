
@interface GEOTileEditionUpdate : NSObject {
    NSMutableArray * _entries;
    bool  _flushEverything;
    bool  _invalidateEverything;
}

@property (nonatomic) bool flushEverything;
@property (nonatomic) bool invalidateEverything;

- (void).cxx_destruct;
- (void)addTileset:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(bool)arg4;
- (bool)flushEverything;
- (id)init;
- (id)initWithActiveTileGroup:(id)arg1 oldActiveTileGroup:(id)arg2 dataSetDiffers:(bool)arg3 flushEverything:(bool)arg4;
- (bool)invalidateEverything;
- (void)setFlushEverything:(bool)arg1;
- (void)setInvalidateEverything:(bool)arg1;
- (void)tileset:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; }*)arg1 edition:(unsigned int*)arg2 provider:(unsigned int*)arg3 invalidateOnly:(bool*)arg4 atIndex:(unsigned long long)arg5;
- (unsigned long long)tilesetCount;

@end
