
@interface GKDataSourceMetrics : GKGridLayoutMetrics {
    NSString * _cachedKey;
    NSArray * _childMetrics;
    GKCollectionViewDataSource * _dataSource;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _globalSectionRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _localSectionRange;
    NSMutableDictionary * _sectionToMetrics;
}

@property (nonatomic, retain) NSString *cachedKey;
@property (nonatomic, retain) NSArray *childMetrics;
@property (nonatomic, retain) GKCollectionViewDataSource *dataSource;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } globalSectionRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } localSectionRange;
@property (nonatomic, retain) NSMutableDictionary *sectionToMetrics;

+ (id)dataSourceMetricsWithMetrics:(id)arg1 dataSource:(id)arg2;

- (void).cxx_destruct;
- (id)_gkDescriptionWithChildren:(long long)arg1;
- (id)accumulateSections:(id)arg1 layout:(id)arg2;
- (id)applyDataSourceMetricsToSections:(id)arg1 withParent:(id)arg2 layout:(id)arg3;
- (id)cachedKey;
- (id)childMetrics;
- (void)computeGlobalSectionRangesWithBaseIndex:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;
- (id)description;
- (void)generateMetricDataForLayout:(id)arg1;
- (id)globalLayoutKey;
- (id)globalLayoutKeyForSection:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })globalSectionRange;
- (id)initWithMetrics:(id)arg1 dataSource:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })localSectionRange;
- (id)metricsForSection:(long long)arg1;
- (void)prepareLayout:(id)arg1;
- (id)sectionToMetrics;
- (void)setCachedKey:(id)arg1;
- (void)setChildMetrics:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setGlobalSectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setLocalSectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setMetrics:(id)arg1 forSection:(long long)arg2;
- (void)setSectionToMetrics:(id)arg1;

@end