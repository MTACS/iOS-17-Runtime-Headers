
@interface HDAudioAnalyticsManager : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {
    double  _calculationPeriod;
    HDPeriodicActivity * _periodicActivity;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    double  _retryPeriod;
}

@property (nonatomic, readonly) double calculationPeriod;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDPeriodicActivity *periodicActivity;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) double retryPeriod;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_dayComponents:(id)arg1 lessThan:(id)arg2;
- (id)_dayForDate:(id)arg1;
- (bool)_recordedDataForToday;
- (double)calculationPeriod;
- (id)capturePhoneAnalytics;
- (void)daemonReady:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)lastSuccessfulCalculation;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (id)periodicActivity;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (bool)periodicActivityRequiresProtectedData:(id)arg1;
- (id)profile;
- (id)queue;
- (double)retryPeriod;
- (void)setPeriodicActivity:(id)arg1;

@end
