
@interface PKCreditActivityCell : PKDashboardCollectionViewCell {
    PKSpendingSummaryChartView * _chartView;
    bool  _isCompactUI;
    PKDashboardCreditAccountItem * _item;
    UILabel * _labelRewardsSummary;
    UILabel * _labelTitle;
    NSString * _rewardsSummary;
    NSString * _title;
    bool  _useAccessibilityLayout;
}

@property (nonatomic, readonly) PKSpendingSummaryChartView *chartView;
@property (nonatomic, retain) PKDashboardCreditAccountItem *item;
@property (nonatomic, retain) NSString *rewardsSummary;
@property (nonatomic, retain) UIFont *rewardsSummaryFont;
@property (nonatomic, retain) UIColor *rewardsSummaryTextColor;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic) bool useAccessibilityLayout;

- (void).cxx_destruct;
- (void)_createSubviews;
- (id)chartView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutSubviews;
- (id)rewardsSummary;
- (id)rewardsSummaryFont;
- (id)rewardsSummaryTextColor;
- (void)setItem:(id)arg1;
- (void)setRewardsSummary:(id)arg1;
- (void)setRewardsSummaryFont:(id)arg1;
- (void)setRewardsSummaryTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setUseAccessibilityLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleFont;
- (bool)useAccessibilityLayout;

@end
