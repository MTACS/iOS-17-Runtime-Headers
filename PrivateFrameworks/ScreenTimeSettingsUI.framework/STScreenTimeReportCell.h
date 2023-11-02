
@interface STScreenTimeReportCell : STTableCell {
    STNoUsageDataView * _noUsageDataView;
    UIViewController<STScreenTimeReportFiltering> * _reportViewController;
}

@property (readonly) STNoUsageDataView *noUsageDataView;
@property (readonly) UIViewController<STScreenTimeReportFiltering> *reportViewController;

- (void).cxx_destruct;
- (void)_selectedUsageReportDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)noUsageDataView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)reportViewController;
- (void)setValue:(id)arg1;
- (id)value;

@end
