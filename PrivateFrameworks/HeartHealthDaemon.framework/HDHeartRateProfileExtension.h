
@interface HDHeartRateProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider, HDHRAFibBurdenProfileExtensionComponentsContainer, HDHRHeartNotificationsUserDefaultsProviding, HDProfileExtension, HDProfileReadyObserver> {
    HDHRAFibBurdenProfileExtensionComponents * _aFibBurdenComponents;
    HDBackgroundFeatureDeliveryManager * _cardioFitnessBackgroundFeatureDeliveryManager;
    HDHRCardioFitnessFeatureAvailabilityManager * _cardioFitnessFeatureAvailabilityManager;
    HDHRCardioFitnessAnalyticsDailyEventActivity * _dailyAnalyticsActivity;
    HDHRDailyHeartRateManager * _dailyHeartRateManager;
    HDHRElectrocardiogramRecordingFeatureAvailabilityManager * _electrocardiogramRecordingAvailabilityManager;
    id  _electrocardiogramRecordingV2DeliveryManager;
    HDHRHealthLiteDataCollector * _healthLiteDataCollector;
    NSUserDefaults * _heartNotificationsUserDefaults;
    HDHeartRateWidgetDataManager * _heartRateDataManager;
    HDHRNotificationManager * _heartRateNotificationManager;
    HDHRHeartbeatSeriesFeatureExclusivityManager * _heartbeatSeriesFeatureExclusivityManager;
    <HDFeatureAvailabilityExtension> * _highHeartRateNotificationsFeatureAvailabilityManager;
    HDHRIrregularRhythmNotificationsFeatureAvailabilityManager * _irregularRhythmNotificationsAvailabilityManager;
    HKFeatureStatusManager * _irregularRhythmNotificationsFeatureStatusManager;
    HDHRIrregularRhythmNotificationsSettingMigrator * _irregularRhythmNotificationsSettingMigrator;
    HDBackgroundFeatureDeliveryManager * _irregularRhythmNotificationsV2DeliveryManager;
    <HDFeatureAvailabilityExtension> * _lowHeartRateNotificationsFeatureAvailabilityManager;
    HDPrimaryProfile * _profile;
}

@property (nonatomic, retain) HDHRAFibBurdenProfileExtensionComponents *aFibBurdenComponents;
@property (nonatomic, retain) HDHRDailyHeartRateManager *dailyHeartRateManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDHRHealthLiteDataCollector *healthLiteDataCollector;
@property (nonatomic, retain) NSUserDefaults *heartNotificationsUserDefaults;
@property (nonatomic, retain) HDHeartRateWidgetDataManager *heartRateDataManager;
@property (nonatomic, retain) HDHRNotificationManager *heartRateNotificationManager;
@property (nonatomic, readonly) HKFeatureStatusManager *irregularRhythmNotificationsFeatureStatusManager;
@property (nonatomic, readonly) HDPrimaryProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupElectrocardiogramRecordingWithProfile:(id)arg1;
- (id)aFibBurdenComponents;
- (id)dailyHeartRateManager;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;
- (id)healthLiteDataCollector;
- (id)heartNotificationsUserDefaults;
- (id)heartRateDataManager;
- (id)heartRateNotificationManager;
- (id)initWithProfile:(id)arg1 heartNotificationsUserDefaults:(id)arg2;
- (id)irregularRhythmNotificationsFeatureStatusManager;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setAFibBurdenComponents:(id)arg1;
- (void)setDailyHeartRateManager:(id)arg1;
- (void)setHealthLiteDataCollector:(id)arg1;
- (void)setHeartNotificationsUserDefaults:(id)arg1;
- (void)setHeartRateDataManager:(id)arg1;
- (void)setHeartRateNotificationManager:(id)arg1;

@end
