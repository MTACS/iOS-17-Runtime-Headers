
@interface MDLAnimatedValue : NSObject <NSCopying> {
    unsigned long long  _interpolation;
    struct vector<(anonymous namespace)::TimeSampledVtValue, std::allocator<(anonymous namespace)::TimeSampledVtValue>>="__begin_"^{TimeSampledVtValue {}  _timeSampledData;
}

@property (nonatomic) unsigned long long interpolation;
@property (nonatomic, readonly) NSArray *keyTimes;
@property (nonatomic, readonly) double maximumTime;
@property (nonatomic, readonly) double minimumTime;
@property (nonatomic, readonly) unsigned long long precision;
@property (nonatomic, readonly) unsigned long long timeSampleCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VtValue { struct type { unsigned char x_1_1_1[8]; } x1; struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo {} *x_2_1_1; } x2; })defaultVtValue;
- (unsigned long long)getTimes:(double*)arg1 maxCount:(unsigned long long)arg2;
- (id)init;
- (unsigned long long)interpolation;
- (bool)isAnimated;
- (id)keyTimes;
- (double)maximumTime;
- (double)minimumTime;
- (unsigned long long)precision;
- (void)resetWithAnimatedValue:(id)arg1;
- (void)resetWithUsdAttribute:(const void*)arg1 timeScale:(double)arg2;
- (void)resetWithUsdAttribute:(const void*)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)setInterpolation:(unsigned long long)arg1;
- (unsigned long long)timeSampleCount;

@end
