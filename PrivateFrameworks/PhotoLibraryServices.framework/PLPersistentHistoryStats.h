
@interface PLPersistentHistoryStats : NSObject {
    long long  _changesPageCount;
    NSDate * _earliestTransactionDate;
    long long  _filePageCount;
    long long  _transactionCount;
    long long  _transactionStringsPageCount;
    long long  _transactionsPageCount;
    long long  _unusedPageCount;
}

@property (nonatomic) long long changesPageCount;
@property (nonatomic, readonly) double changesPageCountPercent;
@property (nonatomic, readonly) double changesPageCountPercentOfPayload;
@property (nonatomic, readonly) long long daysSinceEarliestTransaction;
@property (nonatomic, copy) NSDate *earliestTransactionDate;
@property (nonatomic) long long filePageCount;
@property (nonatomic, readonly) long long payloadPageCount;
@property (nonatomic, readonly) long long persistentHistoryPageCount;
@property (nonatomic, readonly) double persistentHistoryPageCountPercent;
@property (nonatomic, readonly) double persistentHistoryPageCountPercentOfPayload;
@property (nonatomic) long long transactionCount;
@property (nonatomic) long long transactionStringsPageCount;
@property (nonatomic, readonly) double transactionStringsPageCountPercent;
@property (nonatomic, readonly) double transactionStringsPageCountPercentOfPayload;
@property (nonatomic) long long transactionsPageCount;
@property (nonatomic, readonly) double transactionsPageCountPercent;
@property (nonatomic, readonly) double transactionsPageCountPercentOfPayload;
@property (nonatomic) long long unusedPageCount;

+ (bool)fetchEarliestTransactionDateFromDatabase:(id)arg1 intoStats:(id)arg2;
+ (bool)fetchPageCountsOfPersistentHistoryTablesFromDatabase:(id)arg1 intoStats:(id)arg2;
+ (bool)fetchTotalPageCountFromDatabase:(id)arg1 intoStats:(id)arg2;
+ (bool)fetchTransactionCountFromDatabase:(id)arg1 intoStats:(id)arg2;
+ (bool)fetchUnusedPageCountFromDatabase:(id)arg1 intoStats:(id)arg2;
+ (id)statsFromDatabase:(id)arg1;

- (void).cxx_destruct;
- (double)_pageCountAsPercentOfFile:(long long)arg1;
- (double)_pageCountAsPercentOfPayload:(long long)arg1;
- (long long)changesPageCount;
- (double)changesPageCountPercent;
- (double)changesPageCountPercentOfPayload;
- (long long)daysSinceEarliestTransaction;
- (id)earliestTransactionDate;
- (long long)filePageCount;
- (long long)payloadPageCount;
- (long long)persistentHistoryPageCount;
- (double)persistentHistoryPageCountPercent;
- (double)persistentHistoryPageCountPercentOfPayload;
- (void)setChangesPageCount:(long long)arg1;
- (void)setEarliestTransactionDate:(id)arg1;
- (void)setFilePageCount:(long long)arg1;
- (void)setTransactionCount:(long long)arg1;
- (void)setTransactionStringsPageCount:(long long)arg1;
- (void)setTransactionsPageCount:(long long)arg1;
- (void)setUnusedPageCount:(long long)arg1;
- (long long)transactionCount;
- (long long)transactionStringsPageCount;
- (double)transactionStringsPageCountPercent;
- (double)transactionStringsPageCountPercentOfPayload;
- (long long)transactionsPageCount;
- (double)transactionsPageCountPercent;
- (double)transactionsPageCountPercentOfPayload;
- (long long)unusedPageCount;

@end
