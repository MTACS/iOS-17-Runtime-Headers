
@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject {
    CDPLocalSecret * _cachedLocalSecret;
    CDPContext * _cdpContext;
    long long  _deviceToDeviceEncryptionUpgradeType;
    long long  _deviceToDeviceEncryptionUpgradeUIStyle;
    NSString * _featureName;
    bool  _forceInlinePresentation;
    bool  _isDemoDevice;
    UIViewController * _presentingViewController;
    CDPContext * _repairContext;
    bool  _requiresSynchronousRepair;
    NSString * _securityUpgradeContext;
    bool  _shouldSuppressPasscodeCreationCancelPrompt;
}

@property (nonatomic, readonly, copy) NSString *altDSID;
@property (nonatomic, copy) CDPLocalSecret *cachedLocalSecret;
@property (nonatomic, readonly) CDPContext *cdpContext;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeType;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeUIStyle;
@property (nonatomic, copy) NSString *featureName;
@property (nonatomic) bool forceInlinePresentation;
@property (nonatomic) bool isDemoDevice;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) CDPContext *repairContext;
@property (nonatomic) bool requiresSynchronousRepair;
@property (nonatomic, copy) NSString *securityUpgradeContext;
@property (nonatomic) bool shouldSuppressPasscodeCreationCancelPrompt;

- (void).cxx_destruct;
- (id)altDSID;
- (id)cachedLocalSecret;
- (id)cdpContext;
- (long long)deviceToDeviceEncryptionUpgradeType;
- (long long)deviceToDeviceEncryptionUpgradeUIStyle;
- (id)featureName;
- (bool)forceInlinePresentation;
- (id)initWithAltDSID:(id)arg1;
- (id)initWithCDPContext:(id)arg1;
- (bool)isDemoDevice;
- (id)presentingViewController;
- (id)repairContext;
- (bool)requiresSynchronousRepair;
- (id)securityUpgradeContext;
- (void)setCachedLocalSecret:(id)arg1;
- (void)setDeviceToDeviceEncryptionUpgradeType:(long long)arg1;
- (void)setDeviceToDeviceEncryptionUpgradeUIStyle:(long long)arg1;
- (void)setFeatureName:(id)arg1;
- (void)setForceInlinePresentation:(bool)arg1;
- (void)setIsDemoDevice:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRepairContext:(id)arg1;
- (void)setRequiresSynchronousRepair:(bool)arg1;
- (void)setSecurityUpgradeContext:(id)arg1;
- (void)setShouldSuppressPasscodeCreationCancelPrompt:(bool)arg1;
- (bool)shouldSuppressPasscodeCreationCancelPrompt;

@end
