
@interface _HDAWDPeriodicAction : NSObject <HDPeriodicActivityDelegate> {
    id /* block */  _block;
    long long  _graceInterval;
    long long  _intervalCounter;
    NSString * _intervalCounterKey;
    long long  _intervalMultiple;
    NSDate * _lastProcessedDate;
    NSString * _lastProcessedDateKey;
    NSDate * _lastSubmissionAttemptDate;
    NSString * _lastSubmissionAttemptKey;
    long long  _maximumAttemptCount;
    double  _minimumDelayBetweenAttempts;
    HDPeriodicActivity * _periodicActivity;
    HDAssertion * _preparedDatabaseAccessibilityAssertion;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _repeatInterval;
    bool  _requiresClassB;
    NSString * _taskName;
    long long  _waitingToRun;
    NSString * _waitingToRunKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;

@end
