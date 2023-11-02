
@interface FedStatsDataSampler : NSObject {
    unsigned long long  _count;
    NSMutableArray * _results;
    unsigned long long  _total;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic) unsigned long long total;

+ (id)pickSamplesFrom:(id)arg1 length:(unsigned long long)arg2;
+ (id)samplerWithCount:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (unsigned long long)count;
- (id)getResults;
- (id)results;
- (void)setCount:(unsigned long long)arg1;
- (void)setResults:(id)arg1;
- (void)setTotal:(unsigned long long)arg1;
- (unsigned long long)total;

@end
