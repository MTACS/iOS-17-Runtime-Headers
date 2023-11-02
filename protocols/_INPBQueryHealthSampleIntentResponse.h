
@protocol _INPBQueryHealthSampleIntentResponse <NSObject>

@required

+ (Class)resultValuesType;

- (void)addResultValues:(_INPBWellnessObjectResultValue *)arg1;
- (void)clearResultValues;
- (NSArray *)resultValues;
- (_INPBWellnessObjectResultValue *)resultValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultValuesCount;
- (void)setResultValues:(NSArray *)arg1;

@end
