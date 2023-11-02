
@interface MPCContentAgeRequirementManager : NSObject {
    NSError * _authorizationError;
    <MPCContentAgeRequirementDelegate> * _delegate;
    ICAgeVerificationState * _lastKnownAgeVerificationState;
    long long  _status;
}

@property (nonatomic, copy) NSError *authorizationError;
@property (nonatomic, readonly) long long authorizationReason;
@property (nonatomic) <MPCContentAgeRequirementDelegate> *delegate;
@property (nonatomic, copy) ICAgeVerificationState *lastKnownAgeVerificationState;
@property (nonatomic) long long status;

+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)_askPlaybackAuthorizationForItem:(id)arg1 reason:(long long)arg2;
- (id)_explicitContentErrorWithUnderlyingError:(id)arg1 message:(id)arg2;
- (id)_init;
- (id)_retrieveAgeVerificationStateForUserIdentity:(id)arg1;
- (void)_setupWithAgeGateForItem:(id)arg1;
- (void)_setupWithAgeVerificationState:(id)arg1;
- (bool)_shouldAskPlaybackAuthorizationForItem:(id)arg1 reason:(long long)arg2;
- (void)_updateAuthorizationStatusWithAuthorizationState:(id)arg1 forItem:(id)arg2;
- (id)authorizationError;
- (long long)authorizationReason;
- (id)delegate;
- (bool)isItemAuthorized:(id)arg1;
- (bool)isItemAuthorized:(id)arg1 shouldAskForAuthorization:(bool)arg2;
- (id)lastKnownAgeVerificationState;
- (void)setAuthorizationError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastKnownAgeVerificationState:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
