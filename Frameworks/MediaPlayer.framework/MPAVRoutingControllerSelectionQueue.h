
@interface MPAVRoutingControllerSelectionQueue : NSObject {
    bool  _hasPendingPickedRoutes;
    NSMutableSet * _pendingRoutes;
    NSMapTable * _pendingSelectionTimers;
    MPAVRoutingController * _routingController;
    MPAVRoutingControllerSelection * _selectionInProgress;
    MSVTimer * _selectionInProgressTimer;
    NSMutableArray * _selectionsEnqueued;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) bool hasPendingPickedRoutes;
@property (nonatomic, readonly) MPAVRoute *pendingPickedRoute;
@property (nonatomic, readonly) NSSet *pendingPickedRoutes;
@property (nonatomic, readonly) MPAVRoutingController *routingController;

- (void).cxx_destruct;
- (void)_dequeue;
- (void)_dequeueSelectionWhenPossible;
- (void)_enqueue:(id)arg1;
- (void)_processSelection:(id)arg1 completion:(id /* block */)arg2;
- (void)addPendingRoutes:(id)arg1;
- (void)cancelInProgressSelectionForRoute:(id)arg1;
- (void)enqueueSelectionOperation:(long long)arg1 forRoutes:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasPendingPickedRoutes;
- (bool)hasPendingRoutes;
- (id)initWithRoutingController:(id)arg1;
- (id)pendingPickedRoute;
- (id)pendingPickedRoutes;
- (void)pickedRouteDidChange;
- (void)removeAllPendingRoutes;
- (void)removePendingRoutes:(id)arg1;
- (void)removePendingRoutes:(id)arg1 withError:(bool)arg2;
- (bool)routeIsPendingPick:(id)arg1;
- (id)routingController;

@end
