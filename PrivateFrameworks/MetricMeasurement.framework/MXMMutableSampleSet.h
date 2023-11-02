
@interface MXMMutableSampleSet : MXMSampleSet

- (void)appendAttribute:(id)arg1;
- (void)appendDoubleValue:(double)arg1 timestamp:(unsigned long long)arg2;
- (void)appendFloatValue:(float)arg1 timestamp:(unsigned long long)arg2;
- (void)appendIntValue:(int)arg1 timestamp:(unsigned long long)arg2;
- (void)appendIntegerValue:(long long)arg1 timestamp:(unsigned long long)arg2;
- (void)appendSample:(id)arg1;
- (void)appendSet:(id)arg1;
- (void)appendUnsignedIntValue:(unsigned int)arg1 timestamp:(unsigned long long)arg2;
- (void)appendUnsignedIntegerValue:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;

@end
