
@interface PHASEGeometryView : NSObject {
    PHASEEngine * _engine;
    struct Handle64 { 
        unsigned long long mData; 
    }  _geoShapeHandle;
}

@property (nonatomic) PHASEEngine *engine;
@property (nonatomic) struct Handle64 { unsigned long long x1; } geoShapeHandle;

+ (void)geometryViewWithObject:(id)arg1 index:(unsigned long long)arg2 callback:(id /* block */)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)engine;
- (struct Handle64 { unsigned long long x1; })geoShapeHandle;
- (id)init;
- (id)initWithEngine:(id)arg1 handle:(struct Handle64 { unsigned long long x1; })arg2;
- (void)setEngine:(id)arg1;
- (void)setGeoShapeHandle:(struct Handle64 { unsigned long long x1; })arg1;

@end
