
@interface CRSearchQuery : NSObject <NSSecureCoding> {
    id /* block */  _comparator;
    NSArray * _domains;
    unsigned long long  _implicitGroupThreshold;
    unsigned long long  _options;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _pageRange;
    NSPredicate * _predicate;
    CRSearchPredicate * _searchPredicate;
    bool  _searchPredicateExpansionAttempted;
    NSString * _uuid;
    id /* block */  _weightDecayer;
}

@property (nonatomic, copy) id /* block */ comparator;
@property (nonatomic, copy) NSArray *domains;
@property (nonatomic) unsigned long long implicitGroupThreshold;
@property (nonatomic) unsigned long long options;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } pageRange;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) CRSearchPredicate *searchPredicate;
@property (nonatomic, readonly, copy) NSString *uuid;
@property (nonatomic, copy) id /* block */ weightDecayer;

+ (id /* block */)frecencyComparator;
+ (id /* block */)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4;
+ (id /* block */)rankedFrecencyComparatorWithPreferredSources:(id)arg1;
+ (id)searchQueryForSearchTerm:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 recentsDomain:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)comparator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domains;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)implicitGroupThreshold;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pageRange;
- (id)predicate;
- (id)searchPredicate;
- (void)setComparator:(id /* block */)arg1;
- (void)setDomains:(id)arg1;
- (void)setImplicitGroupThreshold:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPredicate:(id)arg1;
- (void)setSearchPredicate:(id)arg1;
- (void)setWeightDecayer:(id /* block */)arg1;
- (id)uuid;
- (id /* block */)weightDecayer;

@end
