
@interface PKFidoProfile : NSObject <NSSecureCoding> {
    NSString * _accountHash;
    NSString * _keyHash;
    NSString * _relyingPartyIdentifier;
}

@property (nonatomic, retain) NSString *accountHash;
@property (nonatomic, retain) NSString *keyHash;
@property (nonatomic, retain) NSString *relyingPartyIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountHash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)keyHash;
- (id)relyingPartyIdentifier;
- (void)setAccountHash:(id)arg1;
- (void)setKeyHash:(id)arg1;
- (void)setRelyingPartyIdentifier:(id)arg1;

@end
