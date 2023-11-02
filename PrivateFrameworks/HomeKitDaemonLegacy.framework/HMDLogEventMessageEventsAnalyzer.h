
@interface HMDLogEventMessageEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing, HMDLogEventDailyTaskRunner> {
    id /* block */  _dateFactory;
    HMDEventCountersManager * _eventCountersManager;
    HMDEventCounterGroup * _homeManagerMessagesGroup;
    bool  _isPrimaryResident;
    double  _lastRemoteMessageEventsPeriodicSubmissionTime;
    double  _lastXPCMessageEventsPeriodicSubmissionTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    unsigned long long  _periodicLoggingInterval;
    HMDEventCounterGroup * _residentSyncGroup;
    NSUserDefaults * _userDefaults;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (copy) id /* block */ dateFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDEventCountersManager *eventCountersManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDEventCounterGroup *homeManagerMessagesGroup;
@property bool isPrimaryResident;
@property double lastRemoteMessageEventsPeriodicSubmissionTime;
@property double lastXPCMessageEventsPeriodicSubmissionTime;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) unsigned long long periodicLoggingInterval;
@property (nonatomic, readonly) HMDEventCounterGroup *residentSyncGroup;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)_handleRemoteMessageLogEvent:(id)arg1;
- (void)_handleXPCMessageCounterLogEvent:(id)arg1;
- (void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)arg1 messageDirectionSending:(bool)arg2;
- (void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)arg1 peerInformation:(id)arg2 transportType:(int)arg3 messageDirectionSending:(bool)arg4 identifier:(id)arg5;
- (void)_updateResidentSyncCountersWithRemoteMessageLogEvent:(id)arg1;
- (id /* block */)dateFactory;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)eventCountersManager;
- (void)handlePrimaryResidentChangedNotification:(id)arg1;
- (id)homeManagerMessagesGroup;
- (id)initWithDataSource:(id)arg1;
- (bool)isPrimaryResident;
- (double)lastRemoteMessageEventsPeriodicSubmissionTime;
- (double)lastXPCMessageEventsPeriodicSubmissionTime;
- (id)logEventSubmitter;
- (id)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)arg1;
- (unsigned long long)periodicLoggingInterval;
- (id)periodicRemoteMessageCounterEventNameWithMessageName:(id)arg1 peerInformation:(id)arg2;
- (void)populateAggregationAnalysisLogEvent:(id)arg1;
- (void)resetAggregationAnalysisContext;
- (id)residentSyncGroup;
- (void)runDailyTask;
- (void)setDateFactory:(id /* block */)arg1;
- (void)setIsPrimaryResident:(bool)arg1;
- (void)setLastRemoteMessageEventsPeriodicSubmissionTime:(double)arg1;
- (void)setLastXPCMessageEventsPeriodicSubmissionTime:(double)arg1;
- (void)submitPeriodicAggregateCountersForRemoteMessageCounterRequestGroup:(id)arg1;
- (void)submitPeriodicAggregateCountersForXPCMessageCounterRequestGroup:(id)arg1;
- (void)submitPeriodicRemoteMessageCountersLogEventIfNeeded;
- (void)submitPeriodicRemoteMessageCountersNow:(double)arg1;
- (void)submitPeriodicXPCMessageCountersLogEventsIfNeeded;
- (void)submitPeriodicXPCMessageCountersLogEventsNow:(double)arg1;
- (id)transportTypeStringForRemoteMessageCounterRequestGroup:(id)arg1;
- (id)userDefaults;
- (id)workQueue;

@end
