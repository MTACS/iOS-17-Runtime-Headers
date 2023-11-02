
@interface PKSearchTransactionPeerPaymentSubTypeResult : NSObject <PKSearchAutocompleteToken> {
    long long  _subType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long subType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSubType:(long long)arg1;
- (long long)subType;
- (unsigned long long)tokenType;

@end
