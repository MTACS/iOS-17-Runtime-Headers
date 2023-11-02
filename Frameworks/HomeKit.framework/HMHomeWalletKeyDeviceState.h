
@interface HMHomeWalletKeyDeviceState : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    bool  _canAddWalletKey;
    long long  _canAddWalletKeyErrorCode;
    NSString * _expressEnablementConflictingPassDescription;
    HMHomeWalletKey * _walletKey;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property bool canAddWalletKey;
@property long long canAddWalletKeyErrorCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *expressEnablementConflictingPassDescription;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (copy) HMHomeWalletKey *walletKey;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (bool)canAddWalletKey;
- (long long)canAddWalletKeyErrorCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expressEnablementConflictingPassDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateDescription;
- (void)setCanAddWalletKey:(bool)arg1;
- (void)setCanAddWalletKeyErrorCode:(long long)arg1;
- (void)setExpressEnablementConflictingPassDescription:(id)arg1;
- (void)setWalletKey:(id)arg1;
- (id)shortDescription;
- (id)walletKey;

@end
