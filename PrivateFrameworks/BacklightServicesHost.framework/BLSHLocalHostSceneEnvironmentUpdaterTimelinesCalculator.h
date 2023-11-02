
@interface BLSHLocalHostSceneEnvironmentUpdaterTimelinesCalculator : NSObject <BLSHEngineRequestDatesOperationDelegate> {
    id /* block */  _completion;
    NSDateInterval * _dateInterval;
    <BLSBacklightSceneEnvironment> * _localHostEnvironment;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_incompleteTimelineEntriesForDateInterval;
    bool  _lock_localHostEnvTimelinesComplete;
    BLSHEngineRequestDatesOperation * _lock_requestDatesOperation;
    bool  _lock_requestDatesOperationComplete;
    NSMutableSet * _lock_timelines;
    <BLSHOSTimerProviding> * _osTimerProvider;
    NSDate * _previousPresentationDate;
    bool  _shouldReset;
    NSArray * _subHostedHostEnvironments;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)calculateWithCompletion:(id /* block */)arg1;
- (void)callCompletionIfDone;
- (void)lock_completeAllTimelineEntries;
- (void)requestDatesOperation:(id)arg1 didTimeoutPendingEnvironments:(id)arg2;
- (void)requestDatesOperation:(id)arg1 environment:(id)arg2 didProvideSpecifiers:(id)arg3 forPresentationInterval:(id)arg4 isComplete:(bool)arg5;

@end
