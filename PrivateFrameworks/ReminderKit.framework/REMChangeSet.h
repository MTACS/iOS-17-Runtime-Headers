
@interface REMChangeSet : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _deletes;
    NSError * _error;
    NSArray * _filterByTransactionAuthorStrings;
    bool  _filterByTransactionAuthorsIsExclusion;
    NSArray * _filteredTransactions;
    NSArray * _inserts;
    bool  _isTruncated;
    NSArray * _transactions;
    NSArray * _updates;
}

@property (nonatomic, retain) NSArray *deletes;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSArray *filterByTransactionAuthorStrings;
@property (nonatomic) bool filterByTransactionAuthorsIsExclusion;
@property (nonatomic, retain) NSArray *filteredTransactions;
@property (nonatomic, retain) NSArray *inserts;
@property (nonatomic) bool isTruncated;
@property (nonatomic, readonly) NSArray *transactions;
@property (nonatomic, retain) NSArray *updates;

+ (id)errorChangeSetWithError:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_filterAndFlattenAndConsolidateChanges;
- (bool)applyFilterByTransactionAuthors:(id)arg1 isExclusion:(bool)arg2;
- (bool)consolidateAndFilterChangesWithTransactionAuthors:(id)arg1 isExclusion:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)enumerateChanges:(long long)arg1 forModelsOfClass:(Class)arg2 withBlock:(id /* block */)arg3;
- (id)error;
- (id)filterByTransactionAuthorStrings;
- (bool)filterByTransactionAuthorsIsExclusion;
- (id)filteredTransactions;
- (id)initWithChangeTransactions:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)inserts;
- (bool)isEqual:(id)arg1;
- (bool)isTruncated;
- (id)lastChangeTokenForAccountID:(id)arg1;
- (void)setDeletes:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFilterByTransactionAuthorStrings:(id)arg1;
- (void)setFilterByTransactionAuthorsIsExclusion:(bool)arg1;
- (void)setFilteredTransactions:(id)arg1;
- (void)setInserts:(id)arg1;
- (void)setIsTruncated:(bool)arg1;
- (void)setUpdates:(id)arg1;
- (id)transactions;
- (id)updates;

@end
