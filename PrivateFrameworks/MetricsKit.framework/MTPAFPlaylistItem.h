
@interface MTPAFPlaylistItem : NSObject {
    unsigned long long  _end;
    NSArray * _metricsData;
    unsigned long long  _start;
}

@property (nonatomic) unsigned long long end;
@property (copy) NSArray *metricsData;
@property (nonatomic) unsigned long long start;

- (void).cxx_destruct;
- (unsigned long long)end;
- (id)initWithStart:(unsigned long long)arg1 end:(unsigned long long)arg2 metricsData:(id)arg3;
- (id)metricsData;
- (void)setEnd:(unsigned long long)arg1;
- (void)setMetricsData:(id)arg1;
- (void)setStart:(unsigned long long)arg1;
- (unsigned long long)start;

@end
