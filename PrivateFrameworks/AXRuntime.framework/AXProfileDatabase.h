
@interface AXProfileDatabase : NSObject {
    NSMutableArray * _entries;
}

+ (id)sharedDatabase;

- (void).cxx_destruct;
- (id)debugStatistics;
- (id)init;
- (void)registerEntry:(id)arg1;
- (id)transactionSummary;

@end
