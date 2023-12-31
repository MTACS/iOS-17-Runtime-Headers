
@interface PKDateAndTransactionCountPair : NSObject {
    NSDate * _date;
    unsigned long long  _transactionCount;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) unsigned long long transactionCount;

- (void).cxx_destruct;
- (id)date;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setTransactionCount:(unsigned long long)arg1;
- (unsigned long long)transactionCount;

@end
