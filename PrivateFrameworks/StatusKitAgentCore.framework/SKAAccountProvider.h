
@interface SKAAccountProvider : NSObject <SKAAccountProviding> {
    NSObject<OS_dispatch_queue> * _tokenFetchQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *tokenFetchQueue;

+ (id)logger;

- (void).cxx_destruct;
- (long long)_authResetTime;
- (id)_jwtTokenForPrimaryAccountForIdentifier:(id)arg1 withError:(id*)arg2;
- (void)_markReauthAttempt;
- (long long)_maxReauthCount;
- (id)_primarySystemiCloudAccountWithError:(id*)arg1;
- (bool)_shouldAttemptReauth;
- (id)init;
- (id)presenceJwtTokenForPrimaryAccountWithError:(id*)arg1;
- (void)refreshCredentialForPrimaryAccountWithCompletion:(id /* block */)arg1;
- (void)setTokenFetchQueue:(id)arg1;
- (id)statusJwtTokenForPrimaryAccountWithError:(id*)arg1;
- (id)tokenFetchQueue;

@end
