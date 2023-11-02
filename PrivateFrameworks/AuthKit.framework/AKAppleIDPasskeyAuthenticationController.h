
@interface AKAppleIDPasskeyAuthenticationController : NSObject <AKAppleIDPasskeyAuthenticationControllerProtocol, ASAuthorizationControllerDelegate> {
    NSObject<OS_dispatch_queue> * _passkeyRequestQueue;
    NSObject<OS_dispatch_group> * _serializationGroup;
    NSObject<OS_dispatch_queue> * _serializationQueue;
    NSMapTable * _stateByController;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateByControllerLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_authorizationControllerForAccount:(id)arg1;
- (void)_onqueue_authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2 error:(id)arg3;
- (void)_onqueue_createPasskeyWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_popPasskeyRequestStateForController:(id)arg1;
- (void)_pushPasskeyRequestState:(id)arg1 forController:(id)arg2;
- (void)appleIDPasskeyStatusForAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)appleIDPasskeysForAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (void)canCreateiCloudKeychainPasskeyForAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)createPasskeyWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAllPasskeysForAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;

@end
