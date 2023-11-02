
@interface PGBackgroundPIPAuthorization : NSObject <PGBackgroundPIPServerToClientInterface> {
    NSString * _activitySessionIdentifier;
    NSString * _appBundleIdentifier;
    BSServiceConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _lock_state;
    id /* block */  _stateTransitionHandler;
}

@property (nonatomic, readonly, copy) NSString *activitySessionIdentifier;
@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long state;
@property (readonly, copy) id /* block */ stateTransitionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_transitionToState:(long long)arg1;
- (id)activitySessionIdentifier;
- (id)appBundleIdentifier;
- (void)dealloc;
- (id)description;
- (id)initWithActivitySessionIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 stateTransitionHandler:(id /* block */)arg3;
- (void)revoke;
- (long long)state;
- (id /* block */)stateTransitionHandler;
- (oneway void)transitionToState:(id)arg1;

@end
