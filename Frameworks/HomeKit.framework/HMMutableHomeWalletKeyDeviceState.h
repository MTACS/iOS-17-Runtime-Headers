
@interface HMMutableHomeWalletKeyDeviceState : HMHomeWalletKeyDeviceState

@property bool canAddWalletKey;
@property long long canAddWalletKeyErrorCode;
@property (copy) NSString *expressEnablementConflictingPassDescription;
@property (copy) HMHomeWalletKey *walletKey;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
