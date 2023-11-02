
@interface ICPrefManager : NSObject {
    NSXPCConnection * _authConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _authConnectionLock;
    NSMutableArray * _authConnectionSemaphores;
}

@property (nonatomic, retain) NSXPCConnection *authConnection;

+ (id)defaultAuthManager;

- (void)addSelectorToInterface:(id)arg1 selectorString:(id)arg2 origin:(bool)arg3;
- (id)authConnection;
- (id)authManagerConnection;
- (void)dealloc;
- (void)endQuery:(id)arg1;
- (id)getContentsAuthorizationStatus;
- (id)getControlAuthorizationStatus;
- (bool)getGoodNewsStatus;
- (id)init;
- (void)invalidateQueries;
- (bool)openRemoteAuthenticationManager;
- (id)remoteAuthManager;
- (void)requestContentsAuthorizationShouldPrompt:(bool)arg1 completion:(id /* block */)arg2;
- (void)requestControlAuthorizationShouldPrompt:(bool)arg1 completion:(id /* block */)arg2;
- (void)resetContentsAuthorizationWithCompletion:(id /* block */)arg1;
- (void)resetControlAuthorizationWithCompletion:(id /* block */)arg1;
- (void)setAuthConnection:(id)arg1;
- (void)startQuery:(id)arg1;

@end
