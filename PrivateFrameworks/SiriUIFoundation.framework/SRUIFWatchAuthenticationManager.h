
@interface SRUIFWatchAuthenticationManager : NSObject <SFAuthenticationManagerDelegate> {
    id /* block */  _authenticationCompletion;
    SFAuthenticationManager * _authenticationManager;
    AFWatchdogTimer * _authenticationWatchdogTimer;
    NSUUID * _currentSessionID;
    NSObject<OS_dispatch_queue> * _watchAuthenticationQueue;
}

@property (nonatomic, copy) id /* block */ authenticationCompletion;
@property (nonatomic, retain) SFAuthenticationManager *authenticationManager;
@property (nonatomic, retain) AFWatchdogTimer *authenticationWatchdogTimer;
@property (nonatomic, copy) NSUUID *currentSessionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_requestWatchAuthentication:(id /* block */)arg1;
- (id /* block */)authenticationCompletion;
- (id)authenticationManager;
- (id)authenticationWatchdogTimer;
- (id)currentSessionID;
- (id)init;
- (id)initWithQueue:(id)arg1 manager:(id)arg2;
- (void)manager:(id)arg1 didCompleteAuthenticationForSessionWithID:(id)arg2;
- (void)manager:(id)arg1 didFailAuthenticationForSessionWithID:(id)arg2 error:(id)arg3;
- (void)manager:(id)arg1 didStartAuthenticationForSessionWithID:(id)arg2;
- (void)requestWatchAuthentication:(id /* block */)arg1;
- (void)setAuthenticationCompletion:(id /* block */)arg1;
- (void)setAuthenticationManager:(id)arg1;
- (void)setAuthenticationWatchdogTimer:(id)arg1;
- (void)setCurrentSessionID:(id)arg1;

@end
