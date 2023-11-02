
@interface MTPAFPlaylist : NSObject {
    NSMutableArray * _items;
    NSArray * _metricsData;
}

@property (nonatomic, retain) NSMutableArray *items;
@property (copy) NSArray *metricsData;

- (void).cxx_destruct;
- (void)addItemStartAtMilliseconds:(unsigned long long)arg1 durationMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3;
- (void)addItemStartAtMilliseconds:(unsigned long long)arg1 endAtMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3;
- (void)addItemStartAtSeconds:(double)arg1 durationSeconds:(double)arg2 metricsData:(id)arg3;
- (id)currentItems;
- (id)initWithSharedMetricsData:(id)arg1;
- (id)items;
- (id)metricsData;
- (void)setItems:(id)arg1;
- (void)setMetricsData:(id)arg1;
- (void)updateEventData:(id)arg1;

@end
