
@interface PKTransitAppletStateDirty : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationIdentifier;
    NSString * _dpanIdentifier;
    NSString * _passUniqueIdentifier;
    NSString * _secureElementIdentifier;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *dpanIdentifier;
@property (nonatomic, copy) NSString *passUniqueIdentifier;
@property (nonatomic, copy) NSString *secureElementIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dpanIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPKTransitAppletStateDirty:(id)arg1;
- (id)passUniqueIdentifier;
- (id)secureElementIdentifier;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setDpanIdentifier:(id)arg1;
- (void)setPassUniqueIdentifier:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;

@end
