
@interface PKCreditBalanceCell : PKDashboardCollectionViewCell {
    bool  _isCompactUI;
    PKDashboardCreditAccountItem * _item;
    UILabel * _labelAmount;
    UILabel * _labelBalance;
    UILabel * _labelCreditAvailable;
    bool  _useAccessibilityLayout;
}

@property (nonatomic, retain) PKDashboardCreditAccountItem *item;
@property (nonatomic, readonly) UILabel *labelAmount;
@property (nonatomic, readonly) UILabel *labelBalance;
@property (nonatomic, readonly) UILabel *labelCreditAvailable;
@property (nonatomic) bool useAccessibilityLayout;

- (void).cxx_destruct;
- (void)_createSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (id)labelAmount;
- (id)labelBalance;
- (id)labelCreditAvailable;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (void)setUseAccessibilityLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)useAccessibilityLayout;

@end
