
@interface SEFidoKey : NSObject <NSSecureCoding> {
    NSData * _fidoAttestation;
    NSData * _fidoPublicKey;
    NSString * _relyingParty;
    NSString * _relyingPartyAccountHash;
}

@property (readonly) NSData *fidoAttestation;
@property (readonly) NSData *fidoKeyHash;
@property (readonly) NSData *fidoPublicKey;
@property (readonly) NSString *relyingParty;
@property (readonly) NSString *relyingPartyAccountHash;

+ (bool)supportsSecureCoding;
+ (id)withRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoPublicKey:(id)arg3 fidoAttestation:(id)arg4;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fidoAttestation;
- (id)fidoKeyHash;
- (id)fidoPublicKey;
- (id)initWithCoder:(id)arg1;
- (id)relyingParty;
- (id)relyingPartyAccountHash;

@end
