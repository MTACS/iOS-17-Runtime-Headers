
@interface MDLAnimatedMatrix4x4 : MDLAnimatedValue

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VtValue { struct type { unsigned char x_1_1_1[8]; } x1; struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo {} *x_2_1_1; } x2; })defaultVtValue;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })double4x4AtTime:(double)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })float4x4AtTime:(double)arg1;
- (unsigned long long)getDouble4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloat4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)precision;
- (void)resetWithDouble4x4Array:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloat4x4Array:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3;
- (void)resetWithUsdAttribute:(const void*)arg1 timeScale:(double)arg2;
- (void)resetWithUsdAttribute:(const void*)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)setDouble4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 atTime:(double)arg2;
- (void)setFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 atTime:(double)arg2;

@end
