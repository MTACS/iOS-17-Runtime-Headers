
@interface MTLRasterizationRateLayerDescriptor : NSObject <NSCopying>

@property (nonatomic, readonly) MTLRasterizationRateSampleArray *horizontal;
@property (nonatomic, readonly) float*horizontalSampleStorage;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } maxSampleCount;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } sampleCount;
@property (nonatomic, readonly) MTLRasterizationRateSampleArray *vertical;
@property (nonatomic, readonly) float*verticalSampleStorage;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithSampleCount:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (id)initWithSampleCount:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 horizontal:(const float*)arg2 vertical:(const float*)arg3;

@end
