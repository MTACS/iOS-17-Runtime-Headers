
@interface HMDHomeWalletKey : HMFObject <NSCopying, NSMutableCopying> {
    NSString * _accessCode;
    NSURL * _changeAccessCodeHomeAppCustomURL;
    long long  _color;
    NSURL * _customURL;
    NSString * _homeName;
    HMDHomeWalletKeySecureElementInfo * _nfcInfo;
    NSString * _serialNumber;
    long long  _state;
    NSString * _typeIdentifier;
    NSString * _walletKeyDescription;
}

@property (copy) NSString *accessCode;
@property (copy) NSURL *changeAccessCodeHomeAppCustomURL;
@property long long color;
@property (copy) NSURL *customURL;
@property (copy) NSString *homeName;
@property (readonly, copy) NSString *labelColorValue;
@property (copy) HMDHomeWalletKeySecureElementInfo *nfcInfo;
@property (readonly, copy) NSString *passColorValue;
@property (readonly, copy) NSString *serialNumber;
@property long long state;
@property (readonly, copy) NSString *typeIdentifier;
@property (readonly, copy) NSUUID *uuid;
@property (copy) NSString *walletKeyDescription;

- (void).cxx_destruct;
- (id)accessCode;
- (id)attributeDescriptions;
- (id)changeAccessCodeHomeAppCustomURL;
- (long long)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customURL;
- (unsigned long long)hash;
- (id)homeName;
- (id)initWithPKPass:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2 state:(long long)arg3 walletKeyDescription:(id)arg4 homeName:(id)arg5 color:(long long)arg6 nfcInfo:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)labelColorValue;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nfcInfo;
- (id)passColorValue;
- (id)serialNumber;
- (void)setAccessCode:(id)arg1;
- (void)setChangeAccessCodeHomeAppCustomURL:(id)arg1;
- (void)setColor:(long long)arg1;
- (void)setCustomURL:(id)arg1;
- (void)setHomeName:(id)arg1;
- (void)setNfcInfo:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setWalletKeyDescription:(id)arg1;
- (long long)state;
- (id)typeIdentifier;
- (id)uuid;
- (id)walletKeyDescription;
- (id)xpcWalletKeyWithExpressEnabled:(bool)arg1;

@end
