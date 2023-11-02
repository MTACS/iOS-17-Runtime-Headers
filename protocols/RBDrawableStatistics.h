
@protocol RBDrawableStatistics

@required

- (void)resetStatistics:(unsigned long long)arg1 alpha:(double)arg2;
- (void)setStatisticsHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <RBDrawableStatistics> *, void*
- (NSDictionary *)statistics;
- (id /* block */)statisticsHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <RBDrawableStatistics> *, void*, id, SEL

@end
