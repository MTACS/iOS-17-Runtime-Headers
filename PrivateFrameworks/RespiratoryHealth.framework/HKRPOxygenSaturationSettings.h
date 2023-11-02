
@interface HKRPOxygenSaturationSettings : NSObject {
    HKObserverSet * _observers;
    NSUserDefaults * _userDefaults;
    <HKRPUserDefaultsSyncProviding> * _userDefaultsSyncProvider;
}

@property (nonatomic, readonly) NSString *backgroundMeasurementsDetailOptionsFooter;
@property (nonatomic, readonly) NSString *backgroundMeasurementsDetailOptionsTitle;
@property (nonatomic, readonly) NSString *backgroundMeasurementsDetailSleepTitle;
@property (nonatomic, readonly) NSString *backgroundMeasurementsDetailTheaterTitle;
@property (nonatomic) bool backgroundMeasurementsDuringSleepMode;
@property (nonatomic) bool backgroundMeasurementsDuringTheaterMode;
@property (nonatomic) bool backgroundMeasurementsEnabled;
@property (nonatomic, readonly) NSString *backgroundMeasurementsFooter;
@property (nonatomic, readonly) NSString *backgroundMeasurementsHeader;
@property (nonatomic, readonly) NSString *backgroundMeasurementsTitle;
@property (nonatomic, readonly) NSString *backgroundMeasurementsValue;
@property (nonatomic, readonly) NSString *bloodOxygenLocalizedPaneTitle;
@property (nonatomic, readonly) NSString *bloodOxygenMeasurementsTitle;
@property (nonatomic, readonly) NSString *bloodOxygenSectionTitle;
@property (nonatomic, readonly) NSString *learnMoreAboutBloodOxygenURL;
@property (nonatomic) bool overrideIsRemoteDisabled;
@property (nonatomic) bool oxygenSaturationDisabled;

+ (id)standardSettings;

- (void).cxx_destruct;
- (void)_notifySettingsDidChange;
- (void)_setBackgroundMeasurementsDuringSleepMode:(bool)arg1;
- (void)_setBackgroundMeasurementsDuringTheaterMode:(bool)arg1;
- (void)_setBackgroundMeasurementsEnabled:(bool)arg1;
- (void)_setOxygenSaturationDisabled:(bool)arg1;
- (id)_settingsToObserve;
- (void)_startObservingDefaults;
- (void)_stopObservingAllDefaults;
- (void)activateDefaultValuesIfNeeded;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (id)backgroundMeasurementsDetailOptionsFooter;
- (id)backgroundMeasurementsDetailOptionsTitle;
- (id)backgroundMeasurementsDetailSleepTitle;
- (id)backgroundMeasurementsDetailTheaterTitle;
- (bool)backgroundMeasurementsDuringSleepMode;
- (bool)backgroundMeasurementsDuringTheaterMode;
- (bool)backgroundMeasurementsEnabled;
- (id)backgroundMeasurementsFooter;
- (id)backgroundMeasurementsHeader;
- (id)backgroundMeasurementsTitle;
- (id)backgroundMeasurementsValue;
- (id)bloodOxygenLocalizedPaneTitle;
- (id)bloodOxygenMeasurementsTitle;
- (id)bloodOxygenSectionTitle;
- (void)dealloc;
- (id)initWithUserDefaults:(id)arg1 userDefaultsSyncProvider:(id)arg2;
- (id)learnMoreAboutBloodOxygenURL;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)overrideIsRemoteDisabled;
- (bool)oxygenSaturationDisabled;
- (void)removeObserver:(id)arg1;
- (void)reset;
- (void)setBackgroundMeasurementsDuringSleepMode:(bool)arg1;
- (void)setBackgroundMeasurementsDuringTheaterMode:(bool)arg1;
- (void)setBackgroundMeasurementsEnabled:(bool)arg1;
- (void)setOverrideIsRemoteDisabled:(bool)arg1;
- (void)setOxygenSaturationDisabled:(bool)arg1;

@end
