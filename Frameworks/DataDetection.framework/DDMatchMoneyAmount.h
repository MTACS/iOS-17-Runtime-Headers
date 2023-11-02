
@interface DDMatchMoneyAmount : DDMatch {
    double  _amount;
    NSString * _currency;
}

@property (nonatomic, readonly) double amount;
@property (nonatomic, readonly) NSString *currency;

- (void).cxx_destruct;
- (double)amount;
- (id)currency;
- (id)initWithDDScannerResult:(id)arg1;

@end
