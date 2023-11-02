
@interface HKMonthWeekView : HKCalendarWeekView {
    bool  _accessoryContentsFetched;
    NSArray * _accessoryViews;
    bool  _displaysMonthTitle;
    bool  _displaysTopBorderLine;
    bool  _isRTL;
    CALayer * _topBorderLine;
}

@property (nonatomic) bool accessoryContentsFetched;
@property (nonatomic, readonly) NSArray *accessoryViews;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTopBorderLine;
- (bool)accessoryContentsFetched;
- (id)accessoryViews;
- (Class)cellClass;
- (id)cellMatchingDate:(id)arg1;
- (void)clearAccessoryViews;
- (bool)containsMonthTitle;
- (id)initWithDateCache:(id)arg1 displaysMonthTitle:(bool)arg2 displaysTopBorderLine:(bool)arg3;
- (void)layoutSubviews;
- (Class)monthTitleClass;
- (void)selectedCalendarDay:(id)arg1;
- (void)setAccessoryContentsFetched:(bool)arg1;
- (void)setMonthWeekStart:(id)arg1;
- (void)setTitleHighlighted:(bool)arg1;
- (bool)supportsRTL;
- (void)traitCollectionDidChange:(id)arg1;

@end
