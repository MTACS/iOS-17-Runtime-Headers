
@interface ACHAWDSubmissionManager : NSObject <HDPeriodicActivityDelegate> {
    ACHEarnedInstanceStore * _earnedInstanceStore;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDPeriodicActivity * _scheduler;
    NSMutableDictionary * _serverConnectionsByComponentId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ACHEarnedInstanceStore *earnedInstanceStore;
@property (readonly) unsigned long long hash;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) HDPeriodicActivity *scheduler;
@property (nonatomic, retain) NSMutableDictionary *serverConnectionsByComponentId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_computeAndSubmitAchievementCountMetric;
- (id)_formatMetricTypeToString:(unsigned int)arg1;
- (id)_serverConnectionForComponentId:(unsigned int)arg1;
- (bool)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3;
- (id)earnedInstanceStore;
- (id)initWithProfile:(id)arg1 earnedInstanceStore:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (id)profile;
- (id)queue;
- (id)scheduler;
- (id)serverConnectionsByComponentId;
- (void)setEarnedInstanceStore:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setServerConnectionsByComponentId:(id)arg1;

@end
