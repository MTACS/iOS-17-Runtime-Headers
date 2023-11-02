
@interface STHistoricalPickupsCell : STTableCell {
    NSLayoutConstraint * _bottomConstraint;
    UILabel * _firstUsedAfterPickupLabel;
    STHistoricalUsageViewController * _historicalUsageViewController;
    STHorizontallySegmentedView * _pickupMetricsView;
}

@property (retain) NSLayoutConstraint *bottomConstraint;
@property (readonly) UILabel *firstUsedAfterPickupLabel;
@property (readonly) STHistoricalUsageViewController *historicalUsageViewController;
@property (readonly) STHorizontallySegmentedView *pickupMetricsView;

- (void).cxx_destruct;
- (void)_currentViewModeDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)_handleEffectiveChangeForViewMode:(long long)arg1 hasMultilineLayout:(bool)arg2 numberOfLines:(unsigned long long)arg3;
- (void)_hasMulitlineLayoutDidChangeFrom:(bool)arg1 to:(bool)arg2;
- (void)_numberOfLinesDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)bottomConstraint;
- (void)dealloc;
- (id)firstUsedAfterPickupLabel;
- (id)historicalUsageViewController;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pickupMetricsView;
- (void)setBottomConstraint:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
