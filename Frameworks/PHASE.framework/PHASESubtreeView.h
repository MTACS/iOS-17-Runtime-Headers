
@interface PHASESubtreeView : NSObject {
    PHASEEngine * _engine;
    struct Handle64 { 
        unsigned long long mData; 
    }  _geoShapeHandle;
    NSArray * _levels;
    long long  _subtreeIndex;
}

@property (nonatomic) PHASEEngine *engine;
@property (nonatomic) struct Handle64 { unsigned long long x1; } geoShapeHandle;
@property (nonatomic, readonly) NSArray *levels;
@property (nonatomic) long long subtreeIndex;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)engine;
- (struct Handle64 { unsigned long long x1; })geoShapeHandle;
- (id)init;
- (id)initWithEngine:(id)arg1 shapeHandle:(struct Handle64 { unsigned long long x1; })arg2 voxelTreeInfo:(const void*)arg3 subtreeIndex:(long long)arg4;
- (id)levels;
- (void)setEngine:(id)arg1;
- (void)setGeoShapeHandle:(struct Handle64 { unsigned long long x1; })arg1;
- (void)setSubtreeIndex:(long long)arg1;
- (long long)subtreeIndex;

@end
