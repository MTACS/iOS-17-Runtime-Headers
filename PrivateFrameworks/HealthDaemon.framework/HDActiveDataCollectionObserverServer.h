
@interface HDActiveDataCollectionObserverServer : HDStandardTaskServer <HDWorkoutSessionObserver, HKActiveDataCollectionObserverServerInterface> {
    NSSet * _observedTypes;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _recentlyNotifiedPauseState;
    NSSet * _recentlyNotifiedTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)launchObservingProcessesForTypes:(id)arg1;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_subscribeForQuantityTypes:(id)arg1;
- (void)remote_unsubscribeForQuantityTypes:(id)arg1;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;

@end
