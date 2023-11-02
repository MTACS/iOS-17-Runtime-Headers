
@interface HDDatabaseTransactionContext : NSObject <NSCopying, NSMutableCopying> {
    NSMutableSet * _accessibilityAssertions;
    long long  _cacheScope;
    long long  _journalType;
    unsigned long long  _options;
    HDDatabaseTransactionContextStatistics * _statistics;
}

@property (nonatomic, readonly, copy) NSSet *accessibilityAssertions;
@property (nonatomic, readonly) bool allowsJournalingDuringProtectedRead;
@property (nonatomic, readonly) long long cacheScope;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) bool highPriority;
@property (nonatomic, readonly) long long journalType;
@property (nonatomic, readonly) bool requiresNewDatabaseConnection;
@property (nonatomic, readonly) bool requiresProtectedData;
@property (nonatomic, readonly) bool requiresWrite;
@property (nonatomic, readonly) bool skipJournalMerge;
@property (nonatomic, readonly) bool skipTransactionStartTasks;
@property (nonatomic, readonly) HDDatabaseTransactionContextStatistics *statistics;

+ (id)contextForAccessibilityAssertion:(id)arg1;
+ (id)contextForReading;
+ (id)contextForReadingProtectedData;
+ (id)contextForWriting;
+ (id)contextForWritingProtectedData;
+ (id)highPriorityContext;

- (void).cxx_destruct;
- (id)_initWithOptions:(unsigned long long)arg1;
- (id)accessibilityAssertions;
- (bool)allowsJournalingDuringProtectedRead;
- (long long)cacheScope;
- (bool)containsContext:(id)arg1 error:(id*)arg2;
- (id)copyForReadingProtectedData;
- (id)copyForWriting;
- (id)copyForWritingProtectedData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)highPriority;
- (id)init;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (long long)journalType;
- (id)mergedContextWithContext:(id)arg1 error:(id*)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)requiresNewDatabaseConnection;
- (bool)requiresProtectedData;
- (bool)requiresWrite;
- (bool)skipJournalMerge;
- (bool)skipTransactionStartTasks;
- (id)statistics;

@end
