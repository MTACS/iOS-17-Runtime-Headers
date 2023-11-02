
@interface ICAgeVerificationManager : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _ageVerificationStateInternal;
    NSObject<OS_dispatch_queue> * _calloutQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) ICAgeVerificationState *ageVerificationState;
@property (nonatomic, retain) NSMutableDictionary *ageVerificationStateInternal;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calloutQueue;

+ (id)defaultManager;

- (void).cxx_destruct;
- (bool)_bagHasValidKeys:(id)arg1;
- (id)_init;
- (bool)_processAgeVerificationState:(id)arg1 forDSID:(id)arg2;
- (void)_registerForNotifications;
- (void)_runAgeVerificationForUserIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateAgeVerificationStateAndSendNotification:(bool)arg1 completion:(id /* block */)arg2;
- (void)_updateAgeVerificationStateForUserIdentity:(id)arg1 sendNotification:(bool)arg2 completion:(id /* block */)arg3;
- (void)_userIdentityStoreDidChange:(id)arg1;
- (id)accessQueue;
- (id)ageVerificationState;
- (id)ageVerificationStateForUserIdentity:(id)arg1;
- (id)ageVerificationStateInternal;
- (id)calloutQueue;
- (void)getAgeVerificationStateForUserIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)getAgeVerificationStateWithCompletion:(id /* block */)arg1;
- (void)setAccessQueue:(id)arg1;
- (void)setAgeVerificationStateInternal:(id)arg1;
- (void)setCalloutQueue:(id)arg1;

@end
