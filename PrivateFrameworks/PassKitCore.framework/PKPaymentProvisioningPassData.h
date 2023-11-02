
@interface PKPaymentProvisioningPassData : NSObject <NSSecureCoding> {
    NSString * _ownershipToken;
    NSString * _ownershipTokenIdentifier;
    NSURL * _passURL;
    PKSecureElementPass * _secureElementPass;
    bool  _suppressMakeDefaultPaymentPassOffer;
    bool  _willProvisionWithAuthenticationDisabled;
}

@property (nonatomic, readonly, copy) NSString *ownershipToken;
@property (nonatomic, readonly, copy) NSString *ownershipTokenIdentifier;
@property (nonatomic, readonly, copy) NSURL *passURL;
@property (nonatomic, retain) PKSecureElementPass *secureElementPass;
@property (nonatomic, readonly) bool suppressMakeDefaultPaymentPassOffer;
@property (nonatomic, readonly) bool willProvisionWithAuthenticationDisabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSecureElementPass:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)ownershipToken;
- (id)ownershipTokenIdentifier;
- (id)passURL;
- (id)secureElementPass;
- (void)setSecureElementPass:(id)arg1;
- (bool)suppressMakeDefaultPaymentPassOffer;
- (bool)willProvisionWithAuthenticationDisabled;

@end
