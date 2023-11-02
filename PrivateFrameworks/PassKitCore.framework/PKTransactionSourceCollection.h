
@interface PKTransactionSourceCollection : NSObject {
    NSSet * _transactionSources;
}

@property (nonatomic, readonly, copy) NSSet *transactionSources;

- (void).cxx_destruct;
- (id)account;
- (id)description;
- (unsigned long long)hash;
- (id)initWithTransactionSource:(id)arg1;
- (id)initWithTransactionSources:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)paymentPass;
- (id)transactionSourceForTransactionSourceIdentifier:(id)arg1;
- (id)transactionSourceIdentifiers;
- (id)transactionSources;
- (id)transactionSourcesForType:(unsigned long long)arg1;

@end
