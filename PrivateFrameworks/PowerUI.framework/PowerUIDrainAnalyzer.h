
@interface PowerUIDrainAnalyzer : NSObject {
    <_CDLocalContext> * _context;
    NSUserDefaults * _defaults;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    NSObject<OS_os_log> * _log;
    long long  _minBatteryLevel;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <_CDLocalContext> *context;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *knowledgeStore;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) long long minBatteryLevel;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)context;
- (id)defaults;
- (id)init;
- (id)knowledgeStore;
- (id)log;
- (long long)minBatteryLevel;
- (void)monitorPluggedInStatus;
- (id)notificationQueue;
- (id)queue;
- (void)recordAnalytics;
- (void)recordPredictionResultAndTime;
- (void)resetState;
- (void)scheduleAnalyticsActivity;
- (void)scheduleLowSOCPrediction;
- (void)setContext:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setKnowledgeStore:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setMinBatteryLevel:(long long)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)updateLPMAndMinSOC;

@end
