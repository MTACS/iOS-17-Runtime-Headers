
@protocol DTKPKtraceAggregator <NSObject>

@required

- (id)initWithConfig:(id <DTKPConfiguration>)arg1;
- (NSError *)pause;
- (NSError *)resume;
- (NSError *)start;
- (NSError *)stop;
- (<DVTInputStream> *)swapOutCurrentDatastream:(id*)arg1;

@end
