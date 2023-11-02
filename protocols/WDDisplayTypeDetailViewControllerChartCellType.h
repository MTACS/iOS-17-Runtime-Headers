
@protocol WDDisplayTypeDetailViewControllerChartCellType <NSObject>

@required

- (unsigned long long)displayMode;
- (unsigned long long)marginMode;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setMarginMode:(unsigned long long)arg1;
- (void)setPrimaryValueSource:(id <WDDashboardCellPrimaryValueSource>)arg1 secondaryValueSource:(id <WDDashboardCellSecondaryValueSource>)arg2 chartSource:(id <WDDashboardCellChartSource>)arg3;
- (void)setTimeScope:(long long)arg1;

@end
