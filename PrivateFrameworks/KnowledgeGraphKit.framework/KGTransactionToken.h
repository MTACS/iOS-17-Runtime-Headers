
@interface KGTransactionToken : NSObject {
    NSString * _stringRepresentation;
    unsigned long long  _transactionSequenceNumber;
}

@property (nonatomic, readonly) NSString *stringRepresentation;
@property (nonatomic, readonly) unsigned long long transactionSequenceNumber;

- (void).cxx_destruct;
- (id)initForGraph:(id)arg1 transactionSequence:(unsigned long long)arg2;
- (id)initForGraph:(id)arg1 withString:(id)arg2;
- (id)initForGraphIdentifier:(id)arg1 transactionSequence:(unsigned long long)arg2;
- (bool)isEqualToToken:(id)arg1;
- (id)stringRepresentation;
- (unsigned long long)transactionSequenceNumber;

@end
