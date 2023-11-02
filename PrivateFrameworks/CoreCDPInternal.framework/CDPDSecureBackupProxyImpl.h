
@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy> {
    CDPContext * _cdpContext;
}

@property (nonatomic, retain) CDPContext *cdpContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_createAndRegisterBackupPublicKeyInSOS:(id)arg1 error:(id*)arg2;
- (void)_resetEscrowMissingPromptDebounceCount;
- (id)accountInfoWithInfo:(id)arg1 error:(id*)arg2;
- (id)activityTypeString;
- (void)cacheRecoveryKey:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)cdpContext;
- (bool)disableWithInfo:(id)arg1 error:(id*)arg2;
- (void)enableWithInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)enableWithInfo:(id)arg1 error:(id*)arg2;
- (id)initWithContext:(id)arg1;
- (bool)isRecoveryKeySet:(id*)arg1;
- (id)recoverWithInfo:(id)arg1 error:(id*)arg2;
- (bool)removeRecoveryKeyFromSOS:(id*)arg1;
- (id)secureBackupContext;
- (id)secureBackupContextWithInfo:(id)arg1;
- (void)setCdpContext:(id)arg1;
- (bool)setRecoveryKeyInSOS:(id)arg1 error:(id*)arg2;
- (void)uncacheAllSecrets;
- (bool)verifyRecoveryKey:(id)arg1 error:(id*)arg2;

@end
