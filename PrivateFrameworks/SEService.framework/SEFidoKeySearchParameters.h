
@interface SEFidoKeySearchParameters : NSObject <NSSecureCoding> {
    NSData * _fidoKeyHash;
    NSString * _relyingParty;
    NSString * _relyingPartyAccountHash;
}

@property (readonly) NSData *fidoKeyHash;
@property (readonly) NSString *relyingParty;
@property (readonly) NSString *relyingPartyAccountHash;

+ (bool)supportsSecureCoding;
+ (id)withRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fidoKeyHash;
- (id)initWithCoder:(id)arg1;
- (id)relyingParty;
- (id)relyingPartyAccountHash;

@end
