
@interface HMDAppleMediaAccessoryMetricsDispatcher : HMFObject <HMDLogEventDailyTaskRunner> {
    HMDLogEventDailyScheduler * _dailyScheduler;
    <HMDAppleMediaAccessoryMetricsDispatcherDataSource> * _dataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    NSString * _previousRoomName;
}

@property (readonly) HMDLogEventDailyScheduler *dailyScheduler;
@property (readonly) <HMDAppleMediaAccessoryMetricsDispatcherDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (copy) NSString *previousRoomName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dailyScheduler;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3;
- (id)logEventSubmitter;
- (id)previousRoomName;
- (void)registerForDailySetRoomLogEvents;
- (void)runDailyTask;
- (void)setPreviousRoomName:(id)arg1;
- (void)submitDailySetRoomEvent;
- (void)submitDailyStatusEvent;
- (void)submitRoomChangeEvent:(id)arg1 previousRoom:(id)arg2;

@end
