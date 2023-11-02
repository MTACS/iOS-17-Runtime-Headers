
@interface FBWorkspaceEventDispatcher : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    FBMutableWorkspaceConnectionsState * _lock_mutableState;
    NSMutableDictionary * _lock_restartAssertionsByPidNumber;
    NSMutableDictionary * _lock_sourcesByPidNumber;
    NSMapTable * _lock_targetsByIdentifier;
    NSCountedSet * _main_incompleteTargetRegistrations;
    NSDictionary * _preregisteredWorkspaces;
    FBWorkspaceConnectionsStateStore * _store;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_flushCalloutsWithCompletion:(id /* block */)arg1;
- (id)_initWithConnectionStore:(id)arg1 preregisteredWorkspaces:(id)arg2;
- (void)_mainThread_dispatchHandshakeFromSource:(id)arg1 toTarget:(id)arg2;
- (void)_mainThread_dispatchSceneRequestsFromSource:(id)arg1 toTarget:(id)arg2;
- (bool)handleSceneRequest:(id)arg1 fromSource:(id)arg2;
- (id)init;
- (void)noteHandshakeFromSource:(id)arg1 withRemnants:(id)arg2;
- (id)registerSourceWithProcessHandle:(id)arg1;
- (id)registerTarget:(id)arg1;

@end
