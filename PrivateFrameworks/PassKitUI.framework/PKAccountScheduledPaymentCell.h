
@interface PKAccountScheduledPaymentCell : UITableViewCell {
    UILabel * _amountLabel;
    unsigned long long  _featureIdentifier;
    UILabel * _frequencyLabel;
    bool  _hasPaymentDueDate;
    UITableViewCellLayoutManager * _layoutManager;
    bool  _onHold;
    PKAccountPayment * _payment;
    bool  _sizing;
    UILabel * _statusLabel;
    NSTimeZone * _timeZone;
    UIColor * _titleColor;
    bool  _useStackedLayout;
}

@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic) bool onHold;
@property (nonatomic) PKAccountPayment *payment;
@property (nonatomic, copy) UIColor *titleColor;

- (void).cxx_destruct;
- (id)_amountAttributedString;
- (id)_amountString;
- (id)_dateString;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveLayoutMargins;
- (id)_frequencyAttributedString;
- (id)_frequencyString;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_statusAttributedString;
- (bool)_useStackedLayoutForUsableWidth:(double)arg1;
- (unsigned long long)featureIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (bool)onHold;
- (id)payment;
- (void)prepareForReuse;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setOnHold:(bool)arg1;
- (void)setPayment:(id)arg1;
- (void)setPayment:(id)arg1 forAccount:(id)arg2;
- (void)setTitleColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleColor;

@end
