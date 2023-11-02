
@interface PKSpendingSummaryChartBarConfiguration : NSObject <PKSegmentedBarConfiguration> {
    NSArray * _orderedCategories;
    PKSpendingSummary * _summary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKSpendingSummary *summary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_categoryAtIndex:(long long)arg1;
- (void)_configureWithSummary:(id)arg1;
- (id)colorForSegmentAtIndex:(long long)arg1;
- (id)initWithSummary:(id)arg1;
- (bool)isReady;
- (long long)numberOfSegments;
- (id)summary;
- (double)totalValue;
- (double)valueForSegmentAtIndex:(long long)arg1;

@end
