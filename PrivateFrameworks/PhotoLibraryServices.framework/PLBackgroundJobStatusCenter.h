
@interface PLBackgroundJobStatusCenter : NSObject <PLBackgroundJobServiceObserver> {
    NSMutableSet * _criteriaShortCodesOfRegisteredActivities;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableArray * _registrationEventsQueue;
    NSMutableArray * _runningEventsQueue;
    NSMutableSet * _workersResponsibleForRegistration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *statusDumpDictionary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRegistrationEventToQueue:(id)arg1;
- (void)_addRunningEventToQueue:(id)arg1;
- (void)_recordNonRegistrationEvent;
- (void)_recordRegistrationEventToState:(unsigned long long)arg1;
- (void)backgroundJobServiceDidChangeStateFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)init;
- (void)recordActivityRegisteredWithCriteria:(id)arg1;
- (void)recordFinishingWorker:(id)arg1;
- (void)recordStartingWorker:(id)arg1 withJobCount:(unsigned long long)arg2;
- (void)recordStoppingWorker:(id)arg1 withRemainingJobCount:(unsigned long long)arg2;
- (void)recordWorkerHasPendingJobs:(id)arg1;
- (id)statusDumpDictionary;

@end
