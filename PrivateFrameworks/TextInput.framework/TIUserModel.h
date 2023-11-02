
@interface TIUserModel : NSObject <TIMetricProviding, TIUserModeling> {
    <TIUserModelConfigurationDelegate> * _configurationDelegate;
    NSMutableDictionary * _durableCounters;
    bool  _explicitTearDown;
    NSDate * _fromDate;
    NSString * _inputMode;
    NSDate * _loadedDate;
    NSDictionary * _settingsDictionary;
    double  _timeOfLastPersist;
    bool  _userModelRateLimitingDisabled;
    <TIUserModelDataStoring> * _userModelStore;
    NSMutableDictionary * _userModelValuesCollection;
    NSArray * _weeklyMetricKeys;
}

@property (nonatomic, readonly) NSDictionary *cachedSettingsDictionary;
@property (nonatomic) <TIUserModelConfigurationDelegate> *configurationDelegate;
@property (nonatomic, readonly) NSArray *contexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool explicitTearDown;
@property (nonatomic, readonly) NSDate *fromDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *inputMode;
@property (nonatomic, retain) NSDate *loadedDate;
@property (readonly) Class superclass;
@property bool userModelRateLimitingDisabled;
@property (nonatomic, copy) NSArray *weeklyMetricKeys;

- (void).cxx_destruct;
- (void)addDoubleToTransientCounter:(double)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;
- (void)addIntegerToTransientCounter:(int)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;
- (void)addToDurableCounter:(int)arg1 forKey:(id)arg2;
- (id)cachedSettingsDictionary;
- (id)configurationDelegate;
- (void)configureDurableCounterForName:(id)arg1;
- (void)configureDurableCounters;
- (id)contexts;
- (void)dealloc;
- (void)doLoad;
- (bool)explicitTearDown;
- (id)fromDate;
- (id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2;
- (id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2 weeklyMetricKeys:(id)arg3 fromDate:(id)arg4 explicitTearDown:(bool)arg5;
- (id)inputMode;
- (void)loadIfNecessary;
- (void)loadSettings;
- (id)loadedDate;
- (bool)persistForDate:(id)arg1;
- (id)populateSettingsDictionary;
- (void)resetDurableCounterForKey:(id)arg1;
- (void)setConfigurationDelegate:(id)arg1;
- (void)setLoadedDate:(id)arg1;
- (void)setUserModelRateLimitingDisabled:(bool)arg1;
- (void)setWeeklyMetricKeys:(id)arg1;
- (void)tearDown;
- (void)trackPowerLogIfNecessary;
- (bool)userModelRateLimitingDisabled;
- (int)valueForDurableKey:(id)arg1;
- (id)valuesFromContext:(id)arg1;
- (id)weeklyMetricKeys;

@end
