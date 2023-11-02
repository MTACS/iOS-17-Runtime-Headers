
@interface MDLAnimatedScalar : MDLAnimatedValue

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VtValue { struct type { unsigned char x_1_1_1[8]; } x1; struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo {} *x_2_1_1; } x2; })defaultVtValue;
- (double)doubleAtTime:(double)arg1;
- (float)floatAtTime:(double)arg1;
- (unsigned long long)getDoubleArray:(double*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloatArray:(float*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)precision;
- (void)resetWithDoubleArray:(const double*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloatArray:(const float*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3;
- (void)resetWithUsdAttribute:(const void*)arg1 timeScale:(double)arg2;
- (void)resetWithUsdAttribute:(const void*)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)setDouble:(double)arg1 atTime:(double)arg2;
- (void)setFloat:(float)arg1 atTime:(double)arg2;

@end
