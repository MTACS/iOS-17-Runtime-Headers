
@interface PHASEVoxelLevelView : NSObject {
    void _dimensions;
    PHASEEngine * _engine;
    struct Handle64 { 
        unsigned long long mData; 
    }  _geoShapeHandle;
    long long  _levelIndex;
    void _offset;
    long long  _subtreeIndex;
    void _voxelSize;
}

@property (nonatomic, readonly) void dimensions;
@property (nonatomic) PHASEEngine *engine;
@property (nonatomic) struct Handle64 { unsigned long long x1; } geoShapeHandle;
@property (nonatomic) long long levelIndex;
@property (nonatomic, readonly) void offset;
@property (nonatomic) long long subtreeIndex;
@property (nonatomic, readonly) void voxelSize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dimensions;
- (id)engine;
- (struct Handle64 { unsigned long long x1; })geoShapeHandle;
- (void)getVoxelsWithCallback:(id /* block */)arg1;
- (id)init;
- (id)initWithEngine:(id)arg1 shapeHandle:(struct Handle64 { unsigned long long x1; })arg2 voxelTreeInfo:(const void*)arg3 subtreeIndex:(long long)arg4 levelIndex:(long long)arg5;
- (long long)levelIndex;
- (void)offset;
- (void)setEngine:(id)arg1;
- (void)setGeoShapeHandle:(struct Handle64 { unsigned long long x1; })arg1;
- (void)setLevelIndex:(long long)arg1;
- (void)setSubtreeIndex:(long long)arg1;
- (long long)subtreeIndex;
- (void)voxelSize;

@end
