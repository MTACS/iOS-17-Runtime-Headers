
@interface TIUserModelDataStoreMock : NSObject <TIUserModelDataStoring> {
    NSMutableArray * _database;
    NSMutableDictionary * _durableDatabase;
    NSDate * _durableLastMigrationDate;
    int  _durableVersion;
    NSDate * _propertiesLastMigrationDate;
    int  _propertiesVersion;
    NSDate * _transientLastMigrationDate;
    int  _transientVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *durableLastMigrationDate;
@property (readonly) int durableVersion;
@property (readonly) unsigned long long hash;
@property (readonly) bool isValid;
@property (retain) NSDate *propertiesLastMigrationDate;
@property (readonly) int propertiesVersion;
@property (readonly) Class superclass;
@property (retain) NSDate *transientLastMigrationDate;
@property (readonly) int transientVersion;

- (void).cxx_destruct;
- (bool)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7;
- (void)clear;
- (id)durableLastMigrationDate;
- (int)durableVersion;
- (id)getAllKnownInputModes;
- (id)getAllKnownInputModesSinceDate:(id)arg1;
- (id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 fromDate:(id)arg3 toDate:(id)arg4;
- (id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (id)getDailyAndWeeklyValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 weeklyKeySuffixes:(id)arg3 endDate:(id)arg4;
- (id)getDurableValueForKey:(id)arg1;
- (id)getInputModesForKey:(id)arg1;
- (id)init;
- (bool)isValid;
- (id)propertiesLastMigrationDate;
- (int)propertiesVersion;
- (bool)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
- (bool)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
- (void)setDurableLastMigrationDate:(id)arg1;
- (bool)setDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;
- (void)setPropertiesLastMigrationDate:(id)arg1;
- (void)setTransientLastMigrationDate:(id)arg1;
- (id)transientLastMigrationDate;
- (int)transientVersion;
- (bool)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;

@end
