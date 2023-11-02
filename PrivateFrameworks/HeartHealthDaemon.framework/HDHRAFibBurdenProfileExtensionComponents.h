
@interface HDHRAFibBurdenProfileExtensionComponents : NSObject {
    HKHRAFibBurdenAnalyzer * _analyzer;
    HDAnalyticsDailyEventManager * _dailyAnalyticsEventManager;
    <HDFeatureAvailabilityExtension> * _featureAvailabilityManager;
    HKFeatureStatusManager * _featureStatusManager;
    <HDHRAFibBurdenNotificationManaging> * _notificationManager;
    HDHRAFibBurdenRescindedNotificationManager * _notificationsRescindedManager;
    <HKHRAFibBurdenSevenDayAnalysisScheduling> * _sevenDayAnalysisScheduler;
    unsigned long long  _stateHandlerHandle;
}

@property (nonatomic, retain) HKHRAFibBurdenAnalyzer *analyzer;
@property (nonatomic, retain) HDAnalyticsDailyEventManager *dailyAnalyticsEventManager;
@property (nonatomic, retain) <HDFeatureAvailabilityExtension> *featureAvailabilityManager;
@property (nonatomic, retain) HKFeatureStatusManager *featureStatusManager;
@property (nonatomic, retain) <HDHRAFibBurdenNotificationManaging> *notificationManager;
@property (nonatomic, retain) HDHRAFibBurdenRescindedNotificationManager *notificationsRescindedManager;
@property (nonatomic, retain) <HKHRAFibBurdenSevenDayAnalysisScheduling> *sevenDayAnalysisScheduler;
@property (nonatomic) unsigned long long stateHandlerHandle;

+ (id)determineDeviceCapability;
+ (id)makeComponentsForProfile:(id)arg1;
+ (id)makeComponentsForTesting;

- (void).cxx_destruct;
- (id)_initForTesting;
- (id)analyzer;
- (id)dailyAnalyticsEventManager;
- (void)dealloc;
- (id)featureAvailabilityManager;
- (id)featureStatusManager;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)notificationManager;
- (id)notificationsRescindedManager;
- (void)setAnalyzer:(id)arg1;
- (void)setDailyAnalyticsEventManager:(id)arg1;
- (void)setFeatureAvailabilityManager:(id)arg1;
- (void)setFeatureStatusManager:(id)arg1;
- (void)setNotificationManager:(id)arg1;
- (void)setNotificationsRescindedManager:(id)arg1;
- (void)setSevenDayAnalysisScheduler:(id)arg1;
- (void)setStateHandlerHandle:(unsigned long long)arg1;
- (id)sevenDayAnalysisScheduler;
- (unsigned long long)stateHandlerHandle;

@end
