
@protocol TVRowHosting <NSObject>

@required

- (NSArray *)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2;

@optional

- (bool)shouldBindRowsTogether;
- (NSArray *)showcaseRowMetricsForExpectedWidth:(double)arg1;

@end
