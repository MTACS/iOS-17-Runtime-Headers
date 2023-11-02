
@interface PKSearchTransactionStatusResult : NSObject <PKSearchAutocompleteToken> {
    long long  _transactionStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long transactionStatus;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTransactionStatus:(long long)arg1;
- (unsigned long long)tokenType;
- (long long)transactionStatus;

@end
