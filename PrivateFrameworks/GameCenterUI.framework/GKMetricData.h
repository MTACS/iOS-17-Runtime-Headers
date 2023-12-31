
@interface GKMetricData : NSObject {
    unsigned long long  _currentMaxVisibleItemCount;
    unsigned long long  _filteredTotalItemCount;
    NSMutableArray * _footerPinnableAttributes;
    NSMutableArray * _headerPinnableAttributes;
    GKGridLayoutMetrics * _metrics;
}

@property (nonatomic) unsigned long long currentMaxVisibleItemCount;
@property (nonatomic) unsigned long long filteredTotalItemCount;
@property (nonatomic, retain) NSMutableArray *footerPinnableAttributes;
@property (nonatomic, retain) NSMutableArray *headerPinnableAttributes;
@property (nonatomic, readonly) NSString *layoutKey;
@property (nonatomic, retain) GKGridLayoutMetrics *metrics;
@property (nonatomic, readonly) GKSectionMetrics *sectionMetrics;

- (void).cxx_destruct;
- (id)_gkDescriptionWithChildren:(long long)arg1;
- (void)addAttributes:(id)arg1 forLocation:(unsigned long long)arg2;
- (unsigned long long)currentMaxVisibleItemCount;
- (id)description;
- (unsigned long long)filteredTotalItemCount;
- (id)footerPinnableAttributes;
- (id)headerPinnableAttributes;
- (id)init;
- (id)layoutKey;
- (id)localDescription;
- (id)metrics;
- (id)sectionMetrics;
- (void)setCurrentMaxVisibleItemCount:(unsigned long long)arg1;
- (void)setFilteredTotalItemCount:(unsigned long long)arg1;
- (void)setFooterPinnableAttributes:(id)arg1;
- (void)setHeaderPinnableAttributes:(id)arg1;
- (void)setMetrics:(id)arg1;

@end
