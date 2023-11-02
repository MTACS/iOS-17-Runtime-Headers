
@interface PKSearchTransactionTypeResult : NSObject <PKSearchAutocompleteToken> {
    long long  _transactionType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long transactionType;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTransactionType:(long long)arg1;
- (unsigned long long)tokenType;
- (long long)transactionType;

@end
