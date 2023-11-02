
@interface MDLAnimatedScalarArray : MDLAnimatedValue {
    unsigned long long  _elementCount;
}

@property (nonatomic) unsigned long long elementCount;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VtValue { struct type { unsigned char x_1_1_1[8]; } x1; struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo {} *x_2_1_1; } x2; })defaultVtValue;
- (unsigned long long)elementCount;
- (unsigned long long)getDoubleArray:(double*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getDoubleArray:(double*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (unsigned long long)getFloatArray:(float*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloatArray:(float*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (id)initWithElementCount:(unsigned long long)arg1;
- (unsigned long long)precision;
- (void)resetWithDoubleArray:(const double*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4;
- (void)resetWithFloatArray:(const float*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4;
- (void)resetWithUsdAttribute:(const void*)arg1 timeScale:(double)arg2;
- (void)resetWithUsdAttribute:(const void*)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)setDoubleArray:(const double*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setElementCount:(unsigned long long)arg1;
- (void)setFloatArray:(const float*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;

@end
