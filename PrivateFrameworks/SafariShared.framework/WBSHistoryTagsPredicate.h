
@interface WBSHistoryTagsPredicate : NSObject <WBSHistoryPredicate> {
    NSDate * _endDate;
    NSSet * _identifiers;
    unsigned long long  _limit;
    unsigned long long  _minimumItemCount;
    long long  _sortOrder;
    NSDate * _startDate;
    unsigned long long  _tagType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *identifiers;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) unsigned long long minimumItemCount;
@property (nonatomic) long long sortOrder;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tagType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 tagType:(unsigned long long)arg3;
- (unsigned long long)limit;
- (unsigned long long)minimumItemCount;
- (void)setIdentifiers:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setMinimumItemCount:(unsigned long long)arg1;
- (void)setSortOrder:(long long)arg1;
- (long long)sortOrder;
- (id)startDate;
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned long long)tagType;

@end
