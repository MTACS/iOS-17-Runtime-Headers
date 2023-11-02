
@interface ISBiometricUpdateTouchIDSettingsOperation : ISOperation {
    NSNumber * _accountIdentifier;
    NSString * _attestationStringExtendedActions;
    NSString * _attestationStringPurchase;
    ISBiometricStore * _biometricStore;
    NSArray * _certChainExtended;
    NSArray * _certChainPrimary;
    bool  _regeneratePublicKey;
    id /* block */  _resultBlock;
    AMSBiometricsTokenUpdateTaskShim * _shim;
    bool  _shouldSuppressAuthPrompts;
    long long  _status;
}

@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSString *attestationStringExtendedActions;
@property (nonatomic, copy) NSString *attestationStringPurchase;
@property (nonatomic, retain) ISBiometricStore *biometricStore;
@property (nonatomic, copy) NSArray *certChainExtended;
@property (nonatomic, copy) NSArray *certChainPrimary;
@property bool regeneratePublicKey;
@property (copy) id /* block */ resultBlock;
@property (readonly) AMSBiometricsTokenUpdateTaskShim *shim;
@property bool shouldSuppressAuthPrompts;
@property (readonly) long long status;

- (void).cxx_destruct;
- (id)_newUpdateTouchIDSettingsOperation;
- (id)accountIdentifier;
- (id)attestationStringExtendedActions;
- (id)attestationStringPurchase;
- (id)biometricStore;
- (id)certChainExtended;
- (id)certChainPrimary;
- (id)initWithAccountIdentifier:(id)arg1;
- (bool)regeneratePublicKey;
- (id /* block */)resultBlock;
- (void)run;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAttestationStringExtendedActions:(id)arg1;
- (void)setAttestationStringPurchase:(id)arg1;
- (void)setBiometricStore:(id)arg1;
- (void)setCertChainExtended:(id)arg1;
- (void)setCertChainPrimary:(id)arg1;
- (void)setRegeneratePublicKey:(bool)arg1;
- (void)setResultBlock:(id /* block */)arg1;
- (void)setShouldSuppressAuthPrompts:(bool)arg1;
- (id)shim;
- (bool)shouldSuppressAuthPrompts;
- (long long)status;

@end
