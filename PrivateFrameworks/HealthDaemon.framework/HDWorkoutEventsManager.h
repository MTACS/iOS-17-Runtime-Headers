
@interface HDWorkoutEventsManager : NSObject <HDAssertionObserver> {
    HDAssertionManager * _assertionManager;
    NSMutableSet * _eventCollectors;
    <HDWorkoutEventCollectorDelegate> * _eventsDelegate;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)fakeActivityDetection:(id)arg1 workoutActivity:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (void)requestPendingEventsThroughDate:(id)arg1 sessionIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)takeSessionAssertionWithOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2 sessionIdentifier:(id)arg3 eventsDelegate:(id)arg4;
- (void)unitTest_setCMWorkoutManager:(id)arg1;
- (void)updateEventCollectorsForActivityType:(unsigned long long)arg1 activityIdentifier:(id)arg2;

@end
