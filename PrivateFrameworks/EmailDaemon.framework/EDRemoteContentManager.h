
@interface EDRemoteContentManager : NSObject {
    <EFScheduler> * _backgroundWorkScheduler;
    unsigned long long  _batchSize;
    double  _maximumTimeout;
    double  _minimumTimeout;
    unsigned long long  _pruneFrequency;
    unsigned long long  _remainingCountToSchedule;
    EDRemoteContentPersistence * _remoteContentPersistence;
    EFLocked * _remoteLinkVerificationTimes;
    double  _requestInterval;
    NSLock * _requestLock;
    NSBackgroundActivityScheduler * _requestScheduler;
    id /* block */  _requestSchedulerBlock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _requestSchedulerLock;
    unsigned long long  _requestedSinceLastPrune;
    NSDate * _schedulingLastUpdate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _schedulingLock;
    <EDRemoteContentManagerTestDelegate> * _testDelegate;
    NSDate * _timeoutLastUpdate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _timeoutLock;
    EFCancelationToken * _token;
    <EFScheduler> * _unconditionalRequestScheduler;
    EMRemoteContentURLSession * _urlSession;
}

@property (nonatomic, readonly) <EFScheduler> *backgroundWorkScheduler;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) double maximumTimeout;
@property (nonatomic) double minimumTimeout;
@property (nonatomic) unsigned long long pruneFrequency;
@property (nonatomic, readonly) EDRemoteContentPersistence *remoteContentPersistence;
@property (nonatomic) double requestInterval;
@property (nonatomic, readonly) NSLock *requestLock;
@property (nonatomic, copy) id /* block */ requestSchedulerBlock;
@property (nonatomic) unsigned long long requestedSinceLastPrune;
@property (nonatomic, retain) NSDate *schedulingLastUpdate;
@property (nonatomic) <EDRemoteContentManagerTestDelegate> *testDelegate;
@property (nonatomic, retain) NSDate *timeoutLastUpdate;
@property (nonatomic, readonly) <EFScheduler> *unconditionalRequestScheduler;
@property (nonatomic, readonly) EMRemoteContentURLSession *urlSession;

- (void).cxx_destruct;
- (void)_addRemoteContentLinks:(id)arg1 andVerify:(bool)arg2 WithParsedLinks:(id)arg3 defaultCharsetName:(id)arg4;
- (double)_getTimeout;
- (id)_issueAndWaitForBatch:(id)arg1 deferBlock:(id /* block */)arg2 successful:(unsigned long long*)arg3 failed:(unsigned long long*)arg4 canceled:(unsigned long long*)arg5 deferred:(unsigned long long*)arg6;
- (unsigned long long)_performRequests:(unsigned long long)arg1 unconditionally:(bool)arg2 withDeferBlock:(id /* block */)arg3 completedCount:(unsigned long long*)arg4;
- (unsigned long long)_requestRemoteLinksInBackground:(unsigned long long)arg1 unconditionally:(bool)arg2 hasMoreLinks:(bool*)arg3 deferBlock:(id /* block */)arg4;
- (id)_requestSchedulerWithInterval:(double)arg1;
- (void)_scheduleBackgroundRequests;
- (void)_scheduleRequestForLinks:(unsigned long long)arg1 unconditionally:(bool)arg2 withDelay:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)_updateScheduling;
- (void)_updateTimeoutSettingDefaultIfNeeded:(bool)arg1;
- (id)_viewDurationsFromBiome;
- (void)addRemoteContentLinks:(id)arg1;
- (void)addRemoteContentLinks:(id)arg1 andVerifyWithParsedLinks:(id)arg2 defaultCharsetName:(id)arg3;
- (void)addRemoteContentLinks:(id)arg1 requiredParsing:(bool)arg2;
- (id)backgroundWorkScheduler;
- (unsigned long long)batchSize;
- (id)initWithRemoteContentPersistence:(id)arg1 contentRuleListManager:(id)arg2 urlSession:(id)arg3;
- (double)maximumTimeout;
- (double)minimumTimeout;
- (void)noteViewOfRemoteContentLinks:(id)arg1;
- (unsigned long long)pruneFrequency;
- (id)remoteContentPersistence;
- (double)requestInterval;
- (id)requestLock;
- (id /* block */)requestSchedulerBlock;
- (unsigned long long)requestedSinceLastPrune;
- (void)scheduleRecurringActivity;
- (id)schedulingLastUpdate;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setMaximumTimeout:(double)arg1;
- (void)setMinimumTimeout:(double)arg1;
- (void)setPruneFrequency:(unsigned long long)arg1;
- (void)setRequestInterval:(double)arg1;
- (void)setRequestSchedulerBlock:(id /* block */)arg1;
- (void)setRequestedSinceLastPrune:(unsigned long long)arg1;
- (void)setSchedulingLastUpdate:(id)arg1;
- (void)setTestDelegate:(id)arg1;
- (void)setTimeoutLastUpdate:(id)arg1;
- (bool)shouldAddRemoteContentLinksForMessage:(id)arg1 logMessage:(id*)arg2;
- (bool)shouldAddRemoteContentLinksForMessageWithDateReceived:(id)arg1;
- (bool)shouldVerifyRemoteLinks;
- (id)testDelegate;
- (void)test_tearDown;
- (id)timeoutLastUpdate;
- (id)unconditionalRequestScheduler;
- (id)urlSession;

@end
