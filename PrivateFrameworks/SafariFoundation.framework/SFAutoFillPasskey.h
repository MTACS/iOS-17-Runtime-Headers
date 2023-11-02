
@interface SFAutoFillPasskey : NSObject <NSSecureCoding> {
    WBSAutoFillPasskey * _corePasskey;
}

@property (nonatomic, readonly, copy) WBSAutoFillPasskey *corePasskey;
@property (nonatomic, readonly, copy) NSString *customTitle;
@property (nonatomic, readonly, copy) SFAutoFillPasskeyIdentifier *identifier;
@property (nonatomic, readonly) NSString *relyingPartyIdentifier;
@property (nonatomic, readonly) NSData *userHandle;
@property (nonatomic, readonly) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)corePasskey;
- (id)customTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreAutoFillPasskey:(id)arg1;
- (id)relyingPartyIdentifier;
- (id)userHandle;
- (id)username;

@end
