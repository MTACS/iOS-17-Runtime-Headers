
@interface MNNavdStateUpdater : NSObject <MNNavigationStateObserver> {
    bool  _hasObservers;
    MNObserverHashTable * _innerObservers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedUpdater;

- (void).cxx_destruct;
- (id)initPrivate;
- (bool)isNavigatingOrPredictingDestination;
- (bool)isNavigatingWithETA;
- (void)registerObserver:(id)arg1;
- (void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)unregisterObserver:(id)arg1;

@end
