
@interface WeatherInternalPreferences : NSUserDefaults {
    <WeatherPreferencesPersistence> * _persistence;
}

@property (nonatomic, readonly) unsigned long long deviceInactivityThreshold;
@property (nonatomic, readonly) bool isInternalInstall;
@property (nonatomic, readonly) bool isV3Enabled;
@property (retain) <WeatherPreferencesPersistence> *persistence;
@property (nonatomic, readonly) bool shouldShowUpdateTimestamp;

+ (id)sharedInternalPreferences;

- (void).cxx_destruct;
- (unsigned long long)deviceInactivityThreshold;
- (bool)isInternalInstall;
- (bool)isV3Enabled;
- (id)persistence;
- (void)setPersistence:(id)arg1;
- (bool)shouldShowUpdateTimestamp;

@end
