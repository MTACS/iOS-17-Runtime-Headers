
@interface SSAMSPurchase : AMSPurchase <NSCopying, NSSecureCoding> {
    NSNumber * _accountIdentifier;
    NSString * _mediaType;
    bool  _preauthenticated;
}

@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSString *mediaType;
@property (getter=isPreauthenticated, nonatomic) bool preauthenticated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPurchase:(id)arg1;
- (bool)isPreauthenticated;
- (id)mediaType;
- (void)setAccountIdentifier:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setPreauthenticated:(bool)arg1;

@end
