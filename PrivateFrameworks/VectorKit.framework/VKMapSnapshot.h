
@interface VKMapSnapshot : NSObject <NSSecureCoding> {
    struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } * _displayStyles;
    unsigned long long  _displayStylesCount;
    NSArray * _elevationRasters;
    float  _elevationScale;
    unsigned long long  _height;
    NSArray * _images;
    NSDictionary * _memoryStats;
    double  _scale;
    double  _targetPointElevation;
    VKCamera * _vkCamera;
    unsigned long long  _width;
}

@property (nonatomic, retain) NSArray *elevationRasters;
@property (nonatomic, readonly) NSArray *images;
@property (nonatomic, retain) NSDictionary *memoryStats;
@property (nonatomic, readonly) double scale;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithImages:(id)arg1 displayStyles:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; }*)arg2 displayStylesCount:(unsigned long long)arg3 scale:(double)arg4 camera:(id)arg5;
- (id)_initWithImages:(id)arg1 displayStyles:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; }*)arg2 displayStylesCount:(unsigned long long)arg3 scale:(double)arg4 camera:(id)arg5 elevationScale:(float)arg6 targetPointElevation:(float)arg7;
- (struct { double x1; double x2; })coordinateForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)description;
- (id)elevationRasters;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateImagesWithBlock:(id /* block */)arg1;
- (id)imageDataInFormat:(unsigned long long)arg1;
- (id)imageSurfaceAtIndex:(unsigned long long)arg1;
- (id)imageSurfaces;
- (id)images;
- (id)initWithCoder:(id)arg1;
- (id)memoryStats;
- (struct CGPoint { double x1; double x2; })pointForCoordinate:(struct { double x1; double x2; })arg1;
- (double)scale;
- (void)setElevationRasters:(id)arg1;
- (void)setMemoryStats:(id)arg1;

@end
