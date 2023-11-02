
@interface PowerUIIntelligenceManager : NSObject {
    _OSChargingPredictor * _chargingPredictor;
    <_CDContext> * _context;
    NSString * _defaultsDomain;
    NSDictionary * _lastPluginPredictionInfo;
    NSObject<OS_os_log> * _log;
    <_DKKnowledgeQuerying> * _store;
    PowerUITrialManager * _trialManager;
}

@property (nonatomic, retain) _OSChargingPredictor *chargingPredictor;
@property (nonatomic, retain) <_CDContext> *context;
@property (nonatomic, retain) NSString *defaultsDomain;
@property (nonatomic, retain) NSDictionary *lastPluginPredictionInfo;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *store;
@property (nonatomic, retain) PowerUITrialManager *trialManager;

- (void).cxx_destruct;
- (id)chargingPredictor;
- (id)context;
- (id)defaultsDomain;
- (void)handleCallback;
- (id)initWithDefaultsDomain:(id)arg1 withContextStore:(id)arg2 withKnowledgeStore:(id)arg3 withTrialManager:(id)arg4;
- (id)lastPluginPredictionInfo;
- (id)log;
- (void)postAnalyticsEventForNewEventTypeWithPredictedDurationMinutes:(long long)arg1 andActualDurationMinutes:(long long)arg2 andConfidence:(double)arg3 didMeetThreshold:(int)arg4 andWasWireless:(bool)arg5 andPredictionScheme:(id)arg6;
- (void)postAnalyticsEventForOldEventTypeWithPredictedDurationMinutes:(long long)arg1 andActualDurationMinutes:(long long)arg2;
- (void)postPluginNotificationWithPredictorOutput:(id)arg1 andError:(id)arg2 andState:(id)arg3;
- (id)queryPredictedPlugoutDate;
- (void)removePluginNotification;
- (void)setChargingPredictor:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultsDomain:(id)arg1;
- (void)setLastPluginPredictionInfo:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setTrialManager:(id)arg1;
- (id)store;
- (id)trialManager;
- (id)ttrURLforBadPredictionsWithStateDictionary:(id)arg1;

@end
