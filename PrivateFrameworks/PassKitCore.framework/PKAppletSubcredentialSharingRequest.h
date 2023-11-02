
@interface PKAppletSubcredentialSharingRequest : NSObject <NSCopying, NSSecureCoding> {
    PKAppletSubcredential * _credential;
    NSString * _credentialIdentifier;
    PKPassEntitlement * _entitlement;
    bool  _forLocalDevice;
    PKPaymentPass * _pass;
    NSString * _passIdentifier;
    NSString * _recipientIdentifier;
    NSString * _recipientName;
}

@property (nonatomic, retain) PKAppletSubcredential *credential;
@property (nonatomic, readonly, copy) NSString *credentialIdentifier;
@property (nonatomic, retain) PKPassEntitlement *entitlement;
@property (getter=isForLocalDevice, nonatomic) bool forLocalDevice;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, readonly, copy) NSString *passIdentifier;
@property (nonatomic, copy) NSString *recipientIdentifier;
@property (nonatomic, copy) NSString *recipientName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credential;
- (id)credentialForPass:(id)arg1;
- (id)credentialIdentifier;
- (id)credentialWithIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlement;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 entitlements:(id)arg2;
- (id)invitations;
- (bool)isForLocalDevice;
- (id)pass;
- (id)passIdentifier;
- (id)recipientIdentifier;
- (id)recipientName;
- (void)setCredential:(id)arg1;
- (void)setEntitlement:(id)arg1;
- (void)setForLocalDevice:(bool)arg1;
- (void)setPass:(id)arg1;
- (void)setRecipientIdentifier:(id)arg1;
- (void)setRecipientName:(id)arg1;

@end
