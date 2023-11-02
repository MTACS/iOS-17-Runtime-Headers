
@interface HDMutableDatabaseTransactionContext : HDDatabaseTransactionContext

@property (nonatomic) bool allowsJournalingDuringProtectedRead;
@property (nonatomic) long long cacheScope;
@property (nonatomic) bool highPriority;
@property (nonatomic) long long journalType;
@property (nonatomic) bool requiresNewDatabaseConnection;
@property (nonatomic) bool requiresProtectedData;
@property (nonatomic) bool requiresWrite;
@property (nonatomic) bool skipJournalMerge;
@property (nonatomic) bool skipTransactionStartTasks;
@property (nonatomic, retain) HDDatabaseTransactionContextStatistics *statistics;

+ (id)contextForAccessibilityAssertion:(id)arg1;
+ (id)contextForReading;
+ (id)contextForReadingProtectedData;
+ (id)contextForWriting;
+ (id)contextForWritingProtectedData;

- (void)addAccessibilityAssertion:(id)arg1;
- (id)contextWithAccessibilityAssertion:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAllowsJournalingDuringProtectedRead:(bool)arg1;
- (void)setCacheScope:(long long)arg1;
- (void)setHighPriority:(bool)arg1;
- (void)setJournalType:(long long)arg1;
- (void)setRequiresNewDatabaseConnection:(bool)arg1;
- (void)setRequiresProtectedData:(bool)arg1;
- (void)setRequiresWrite:(bool)arg1;
- (void)setSkipJournalMerge:(bool)arg1;
- (void)setSkipTransactionStartTasks:(bool)arg1;
- (void)setStatistics:(id)arg1;

@end
