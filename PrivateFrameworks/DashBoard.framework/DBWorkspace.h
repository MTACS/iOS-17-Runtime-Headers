
@interface DBWorkspace : NSObject <BSInvalidatable> {
    _DBWorkspaceStateChangeSession * _currentSession;
    bool  _invalidated;
    NSHashTable * _observers;
    <DBWorkspaceOwner> * _owner;
    NSMutableArray * _pendingRequests;
    <BSInvalidatable> * _pendingRequestsStateCaptureBlock;
    <DBWorkspaceState> * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setState:, nonatomic, retain) <DBWorkspaceState> *state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createStateChangeSession;
- (void)_invalidateSession:(id)arg1;
- (void)_setState:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)initWithOwner:(id)arg1;
- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (void)requestStateChange:(id)arg1;
- (id)state;

@end
