
@interface STOverallUsageSummaryCell : STTableCell {
    STNoUsageDataView * _noUsageDataView;
    STUsageSummaryTitleView * _titleView;
    STUsageGraphViewController * _weekGraphViewController;
}

@property (readonly) STNoUsageDataView *noUsageDataView;
@property (readonly) STUsageSummaryTitleView *titleView;
@property (readonly) STUsageGraphViewController *weekGraphViewController;

- (void).cxx_destruct;
- (void)_hasMulitlineLayoutDidChangeFrom:(bool)arg1 to:(bool)arg2;
- (void)_setNoUsageDataViewVisibility;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)noUsageDataView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setValue:(id)arg1;
- (id)titleView;
- (id)value;
- (id)weekGraphViewController;

@end
