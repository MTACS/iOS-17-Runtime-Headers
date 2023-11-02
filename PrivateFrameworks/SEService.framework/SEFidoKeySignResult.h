
@interface SEFidoKeySignResult : NSObject <NSSecureCoding> {
    NSData * _fidoAssertion;
    NSData * _fidoKeyHash;
    NSString * _relyingParty;
    NSString * _relyingPartyAccountHash;
}

@property (readonly) NSData *fidoAssertion;
@property (readonly) NSData *fidoKeyHash;
@property (readonly) NSString *relyingParty;
@property (readonly) NSString *relyingPartyAccountHash;
@property (readonly) NSData *signedChallenge;

+ (bool)supportsSecureCoding;
+ (id)withRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 fidoAssertion:(id)arg4;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fidoAssertion;
- (id)fidoKeyHash;
- (id)initWithCoder:(id)arg1;
- (id)relyingParty;
- (id)relyingPartyAccountHash;
- (id)signedChallenge;

@end
