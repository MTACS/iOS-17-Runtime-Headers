
@interface HMDMutableHomeWalletKey : HMDHomeWalletKey

@property (copy) NSString *accessCode;
@property (copy) NSURL *changeAccessCodeHomeAppCustomURL;
@property long long color;
@property (copy) NSURL *customURL;
@property (copy) NSString *homeName;
@property (copy) HMDHomeWalletKeySecureElementInfo *nfcInfo;
@property long long state;
@property (copy) NSString *walletKeyDescription;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
