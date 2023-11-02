
@interface HKHearingFeatures : NSObject

+ (bool)_boolForPreferenceKey:(id)arg1 defaultValue:(bool)arg2 fromValues:(id)arg3;
+ (bool)_isHeadphoneExposureDataTransient;
+ (bool)_isHeadphoneExposureDataTransientOnActiveWatchWithError:(id*)arg1;
+ (bool)_isMeasureOtherHeadphonesEnabled;
+ (bool)_isMeasureOtherHeadphonesEnabledOnActiveWatchWithError:(id*)arg1;
+ (id)_numbersForPhonePreferenceKeys:(id)arg1;
+ (id)_numbersForPreferenceKeys:(id)arg1 error:(id*)arg2;
+ (id)_numbersForPreferenceKeys:(id)arg1 fromActiveWatch:(bool)arg2;
+ (id)_numbersForWatchPreferenceKeys:(id)arg1;
+ (bool)_setBoolForPhonePreferenceKey:(id)arg1 newValue:(bool)arg2 error:(id*)arg3;
+ (bool)_setBoolForPreferenceKey:(id)arg1 newValue:(bool)arg2 error:(id*)arg3;
+ (bool)_setBoolForWatchPreferenceKey:(id)arg1 newValue:(bool)arg2 error:(id*)arg3;
+ (bool)_setHeadphoneExposureMeasureLevelsEnabled:(bool)arg1 error:(id*)arg2;
+ (bool)_setHeadphoneExposureMeasureLevelsEnabledOnActiveWatch:(bool)arg1 error:(id*)arg2;
+ (bool)_setHeadphoneExposureNotificationsEnabled:(bool)arg1 error:(id*)arg2;
+ (bool)_setHeadphoneExposureNotificationsEnabledOnActiveWatch:(bool)arg1 error:(id*)arg2;
+ (id)_sharedAudioDataAnalysisManager;
+ (id)activePairedDevice;
+ (bool)areHeadphoneExposureNotificationsMandatory;
+ (bool)areHeadphoneExposureNotificationsMandatoryOnActiveWatchWithError:(id*)arg1;
+ (bool)hasActivePairedDevice;
+ (bool)isHeadphoneExposureMeasureLevelsEnabled;
+ (bool)isHeadphoneExposureMeasureLevelsEnabledOnActiveWatchWithError:(id*)arg1;
+ (bool)isHeadphoneExposureNotificationsEnabled;
+ (bool)isHeadphoneExposureNotificationsEnabledOnActiveWatchWithError:(id*)arg1;
+ (bool)isHeadphoneExposureNotificationsSupportedOnActiveWatch;
+ (bool)setBoolForPreferenceKey:(id)arg1 newValue:(bool)arg2 forPairedWatch:(bool)arg3 error:(id*)arg4;
+ (id)sharedInstance;
+ (void)startObservingForChanges;
+ (bool)unitTesting_forceDefaultHeadphoneDataCollectionInterval;
+ (void)unitTesting_overrideForceDefaultHeadphoneDataCollectionInterval:(id)arg1;
+ (void)unitTesting_overrideIsHeadphoneExposureNotificationsEnabled:(id)arg1;
+ (void)unitTesting_overrideSimulateLocalHeadphonePlayback:(id)arg1;
+ (bool)unitTesting_simulateLocalHeadphonePlayback;

- (void)_adasPreferenceDidChange:(id)arg1;
- (void)_startObservingForChanges;
- (void)_startObservingForChangesOnActiveWatch;
- (void)_stopObservingForChanges;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (bool)swizzled_isHAENFeatureEnabled;

@end
