
@interface STUsageSummaryHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView> {
    UISegmentedControl * _segmentedControl;
}

@property (nonatomic, readonly) UISegmentedControl *segmentedControl;

- (void).cxx_destruct;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (id)segmentedControl;

@end
