
@interface ATXHomeScreenPageIconRanker : NSObject {
    ATXHomeScreenConfigCache * _cache;
}

- (void).cxx_destruct;
- (id)_pageForPageIndex:(unsigned long long)arg1;
- (id)iconIndexesInAscendingOrderOfHistoricalUsageForPageIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithCache:(id)arg1;

@end
