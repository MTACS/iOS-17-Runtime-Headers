
@interface PKStrokePoint : NSObject <NSCopying> {
    struct PKStrokePathPointsPrivate { 
        struct shared_ptr<PKStrokePathPointsShared> { 
            struct PKStrokePathPointsShared {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } constants; 
        struct vector<unsigned char, std::allocator<unsigned char>> { 
            char *__begin_; 
            char *__end_; 
            struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
                char *__value_; 
            } __end_cap_; 
        } pointsData; 
    }  _strokeDataPointsPrivate;
}

@property (nonatomic, readonly) double _edgeWidth;
@property (nonatomic, readonly) double _radius2;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double azimuth;
@property (nonatomic, readonly) double force;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) double secondaryScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) double timeOffset;

+ (struct shared_ptr<PKStrokePathPointsShared> { struct PKStrokePathPointsShared {} *x1; struct __shared_weak_count {} *x2; })_sharedConstantData;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct PKCompressedStrokePoint { struct _PKPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; float x10; })_compressedPoint;
- (double)_edgeWidth;
- (double)_radius2;
- (void*)_strokeDataPointsPrivate;
- (double)altitude;
- (double)azimuth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)force;
- (unsigned long long)hash;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1 timeOffset:(double)arg2 size:(struct CGSize { double x1; double x2; })arg3 opacity:(double)arg4 force:(double)arg5 azimuth:(double)arg6 altitude:(double)arg7;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1 timeOffset:(double)arg2 size:(struct CGSize { double x1; double x2; })arg3 opacity:(double)arg4 force:(double)arg5 azimuth:(double)arg6 altitude:(double)arg7 edgeWidth:(double)arg8 radius2:(double)arg9;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1 timeOffset:(double)arg2 size:(struct CGSize { double x1; double x2; })arg3 opacity:(double)arg4 force:(double)arg5 azimuth:(double)arg6 altitude:(double)arg7 secondaryScale:(double)arg8;
- (id)initWithSlice:(void*)arg1 index:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })location;
- (double)opacity;
- (double)secondaryScale;
- (struct CGSize { double x1; double x2; })size;
- (double)timeOffset;

@end
