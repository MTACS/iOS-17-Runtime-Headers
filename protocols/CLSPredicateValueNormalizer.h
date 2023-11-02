
@protocol CLSPredicateValueNormalizer

@required

- (NSString *)normalizeKeyPath:(NSString *)arg1 forValue:(id)arg2;
- (id)normalizedValue:(id)arg1 forKeyPath:(NSString *)arg2;

@end
