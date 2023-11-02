
@protocol ACNotifyReading <NSObject>

@required

- (unsigned long long)cachedValue;
- (unsigned long long)currentValue;
- (id)initWithKey:(NSString *)arg1;
- (void)setCachedValue:(unsigned long long)arg1;

@end
