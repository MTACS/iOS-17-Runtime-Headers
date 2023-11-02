
@protocol PXUserDefaultsDataSource

@required

- (NSDate *)currentDate;
- (id)persistedValueForKey:(NSString *)arg1;
- (void)setPersistedValue:(id)arg1 forKey:(NSString *)arg2;

@end
