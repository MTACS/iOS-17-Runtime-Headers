
@protocol PKSegmentedBarConfiguration <NSObject>

@required

- (UIColor *)colorForSegmentAtIndex:(long long)arg1;
- (bool)isReady;
- (long long)numberOfSegments;
- (double)totalValue;
- (double)valueForSegmentAtIndex:(long long)arg1;

@end
