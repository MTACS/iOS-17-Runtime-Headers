
@interface STDailyAverageSummaryTableViewCell : STTableCell {
    STDailyAverageView * _dailyAverageView;
    STUsageSummaryTitleView * _titleView;
    STHorizontallySegmentedView * _topItemsView;
    STUsageGraphViewController * _usageGraphViewController;
}

@property (readonly) STDailyAverageView *dailyAverageView;
@property (readonly) STUsageSummaryTitleView *titleView;
@property (readonly) STHorizontallySegmentedView *topItemsView;
@property (readonly) STUsageGraphViewController *usageGraphViewController;

- (void).cxx_destruct;
- (void)_layoutDidChangeFrom:(bool)arg1 to:(bool)arg2;
- (void)_numberOfLinesDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)dailyAverageView;
- (void)dealloc;
- (id)initWithUsageReport:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)titleView;
- (id)topItemsView;
- (id)usageGraphViewController;

@end
