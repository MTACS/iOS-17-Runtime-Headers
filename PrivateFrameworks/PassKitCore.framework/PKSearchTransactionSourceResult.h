
@interface PKSearchTransactionSourceResult : NSObject <PKSearchAutocompleteToken> {
    unsigned long long  _transactionSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transactionSource;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTransactionSource:(unsigned long long)arg1;
- (unsigned long long)tokenType;
- (unsigned long long)transactionSource;

@end
