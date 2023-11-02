
@interface MDLAnimatedQuaternion : MDLAnimatedValue

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VtValue { struct type { unsigned char x_1_1_1[8]; } x1; struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo {} *x_2_1_1; } x2; })defaultVtValue;
- (struct { })doubleQuaternionAtTime:(double)arg1;
- (struct { })floatQuaternionAtTime:(double)arg1;
- (unsigned long long)getDoubleQuaternionArray:(struct { }*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloatQuaternionArray:(struct { }*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)precision;
- (void)resetWithDoubleQuaternionArray:(const struct { }*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloatQuaternionArray:(const struct { }*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3;
- (void)resetWithUsdAttribute:(const void*)arg1 timeScale:(double)arg2;
- (void)resetWithUsdAttribute:(const void*)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)setDoubleQuaternion:(struct { })arg1 atTime:(double)arg2;
- (void)setFloatQuaternion:(struct { })arg1 atTime:(double)arg2;

@end
