
@protocol TIUserModelDataStoring <NSObject>

@required

- (bool)addValue:(NSNumber *)arg1 andSecondaryValue:(NSNumber *)arg2 andRealValue:(NSNumber *)arg3 andProperties:(NSData *)arg4 forKey:(NSString *)arg5 forInputMode:(NSString *)arg6 forDate:(NSDate *)arg7;
- (NSDate *)durableLastMigrationDate;
- (int)durableVersion;
- (NSArray *)getAllKnownInputModes;
- (NSArray *)getAllKnownInputModesSinceDate:(NSDate *)arg1;
- (NSArray *)getAllValuesForKey:(NSString *)arg1 forInputMode:(NSString *)arg2 fromDate:(NSDate *)arg3 toDate:(NSDate *)arg4;
- (NSArray *)getAllValuesForKey:(NSString *)arg1 forInputMode:(NSString *)arg2 sinceDate:(NSDate *)arg3;
- (NSArray *)getAllValuesForKeyPrefix:(NSString *)arg1 forInputMode:(NSString *)arg2 sinceDate:(NSDate *)arg3;
- (NSArray *)getDailyAndWeeklyValuesForKeyPrefix:(NSString *)arg1 forInputMode:(NSString *)arg2 weeklyKeySuffixes:(NSArray *)arg3 endDate:(NSDate *)arg4;
- (TIUserModelDataStoreDurableEntry *)getDurableValueForKey:(NSString *)arg1;
- (NSArray *)getInputModesForKey:(NSString *)arg1;
- (bool)isValid;
- (NSDate *)propertiesLastMigrationDate;
- (int)propertiesVersion;
- (bool)purgeDataForKey:(NSString *)arg1 forInputMode:(NSString *)arg2 beforeDate:(NSDate *)arg3;
- (bool)purgeDataForKeyPrefix:(NSString *)arg1 forInputMode:(NSString *)arg2 beforeDate:(NSDate *)arg3;
- (bool)setDurableValue:(NSNumber *)arg1 forKey:(NSString *)arg2 forDate:(NSDate *)arg3;
- (NSDate *)transientLastMigrationDate;
- (int)transientVersion;
- (bool)updateDurableValue:(NSNumber *)arg1 forKey:(NSString *)arg2 forDate:(NSDate *)arg3;

@end
