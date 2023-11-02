
@interface PKPaymentEligibilityFIDOProfile : NSObject {
    NSString * _accountHash;
    NSData * _keyHash;
    NSString * _relyingPartyIdentifier;
}

@property (nonatomic, readonly, copy) NSString *accountHash;
@property (nonatomic, readonly, copy) NSData *keyHash;
@property (nonatomic, readonly, copy) NSString *relyingPartyIdentifier;

- (void).cxx_destruct;
- (id)accountHash;
- (id)initWithDictionary:(id)arg1;
- (id)keyHash;
- (id)relyingPartyIdentifier;

@end
