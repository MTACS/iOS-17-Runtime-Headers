
@interface MXMMutableSampleData : MXMSampleData

- (void)appendAttribute:(id)arg1;
- (void)appendAttributes:(id)arg1;
- (void)appendData:(id)arg1;
- (id)appendDoubleValue:(double)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)appendFloatValue:(float)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)appendIntValue:(int)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)appendIntegerValue:(long long)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)appendSample:(id)arg1;
- (void)appendSet:(id)arg1;
- (id)appendUnsignedIntValue:(unsigned int)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)appendUnsignedIntegerValue:(unsigned long long)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataMatchingFilter:(id)arg1;

@end
