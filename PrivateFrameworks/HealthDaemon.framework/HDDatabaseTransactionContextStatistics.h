
@interface HDDatabaseTransactionContextStatistics : NSObject {
    NSMutableArray * _transactions;
}

@property (nonatomic, readonly, copy) NSString *shortDescription;
@property (nonatomic, readonly) double totalDuration;
@property (nonatomic, readonly, copy) NSArray *transactions;

- (void).cxx_destruct;
- (void)_addTransactionStatistics:(id)arg1;
- (id)init;
- (id)shortDescription;
- (double)totalDuration;
- (id)transactions;

@end
