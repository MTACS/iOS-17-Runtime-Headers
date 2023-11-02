
@interface _HFCharacteristicReadAndWriteTransactions : NSObject {
    NSMutableOrderedSet * _transactionsReading;
    NSMutableOrderedSet * _transactionsWriting;
}

@property (nonatomic, retain) NSMutableOrderedSet *transactionsReading;
@property (nonatomic, retain) NSMutableOrderedSet *transactionsWriting;

- (void).cxx_destruct;
- (id)init;
- (void)setTransactionsReading:(id)arg1;
- (void)setTransactionsWriting:(id)arg1;
- (id)transactionsReading;
- (id)transactionsWriting;

@end
