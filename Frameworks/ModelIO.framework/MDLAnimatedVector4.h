
@interface MDLAnimatedVector4 : MDLAnimatedValue

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VtValue { struct type { unsigned char x_1_1_1[8]; } x1; struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo {} *x_2_1_1; } x2; })defaultVtValue;
- (void)double4AtTime:(double)arg1;
- (void)float4AtTime:(double)arg1;
- (unsigned long long)getDouble4Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloat4Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)precision;
- (void)resetWithDouble4Array:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloat4Array:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3;
- (void)resetWithUsdAttribute:(const void*)arg1 timeScale:(double)arg2;
- (void)resetWithUsdAttribute:(const void*)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)setDouble4:(void *)arg1 atTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)setFloat4:(void *)arg1 atTime:(void *)arg2; // needs 2 arg types, found 1: double

@end
