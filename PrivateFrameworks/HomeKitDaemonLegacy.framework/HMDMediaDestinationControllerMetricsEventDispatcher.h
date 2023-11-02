
@interface HMDMediaDestinationControllerMetricsEventDispatcher : HMFObject <HMDLogEventDailyTaskRunner, HMFLogging> {
    <HMDMediaDestinationControllerMetricsEventDispatcherDataSource> * _dataSource;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent * _trackedStagedDestinationIdentifierEvent;
}

@property <HMDMediaDestinationControllerMetricsEventDispatcherDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;
@property (retain) HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *trackedStagedDestinationIdentifierEvent;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)dataSourceCurrentDestinationType;
- (id)dataSourceCurrentUser;
- (id)dataSourceCurrentUserPrivilege;
- (id)dataSourceDestinationTypeWithIdentifier:(id)arg1;
- (id)dataSourceIsTriggeredOnControllerDevice;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 dataSource:(id)arg3;
- (id)logEventSubmitter;
- (id)logIdentifier;
- (void)runDailyTask;
- (void)setDataSource:(id)arg1;
- (void)setTrackedStagedDestinationIdentifierEvent:(id)arg1;
- (void)startStagedDestinationIdentifierCommittedEventWithStagedDestinationIdentifier:(id)arg1;
- (void)submitDailySetDestinationEvent;
- (void)submitFailureEventWithEventErrorCode:(unsigned long long)arg1 error:(id)arg2;
- (void)submitReceivedUpdateDestinationRequestMessageEventWithDestinationIdentifier:(id)arg1 existingDestinationIdentifier:(id)arg2;
- (void)submitStagedDestinationIdentifierCommittedEventWithCommittedDestinationIdentifier:(id)arg1;
- (void)submitTransactionUpdatedDestinationEventWithDestinationIdentifier:(id)arg1 existingDestinationIdentifier:(id)arg2;
- (id)trackedStagedDestinationIdentifierEvent;

@end
