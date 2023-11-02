
@interface REMLElementComparator : NSObject <NSCopying> {
    NSArray * _filteringRules;
    REMLModel * _model;
    NSArray * _rankingRules;
}

@property (nonatomic, readonly) unsigned long long comparisonLevels;
@property (nonatomic, copy) NSArray *filteringRules;
@property (nonatomic, copy) NSArray *rankingRules;

+ (id)comparatorWithFilteringRules:(id)arg1 rankingRules:(id)arg2 model:(id)arg3;

- (void).cxx_destruct;
- (long long)compareElement:(id)arg1 toElement:(id)arg2 level:(unsigned long long)arg3;
- (unsigned long long)comparisonLevels;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)filteringRules;
- (id)initWithModel:(id)arg1;
- (id)model;
- (id)rankingRules;
- (void)setFilteringRules:(id)arg1;
- (void)setRankingRules:(id)arg1;
- (bool)shouldHideElement:(id)arg1;

@end
