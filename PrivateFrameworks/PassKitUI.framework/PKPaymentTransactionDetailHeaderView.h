
@interface PKPaymentTransactionDetailHeaderView : UIView {
    UILabel * _amountLabel;
    NSString * _amountText;
    bool  _hasProminentSubtitle;
    bool  _inBridge;
    bool  _isTemplateLayout;
    UIImage * _merchantIcon;
    UIImageView * _merchantIconImageView;
    UILabel * _secondaryLabel;
    NSString * _secondarySubtitleText;
    UILabel * _subtitleLabel;
    NSString * _subtitleText;
    UILabel * _tertiaryLabel;
    NSString * _tertiarySubtitleText;
    bool  _useStroke;
}

@property (nonatomic, copy) NSString *amountText;
@property (nonatomic) bool hasProminentSubtitle;
@property (nonatomic) bool inBridge;
@property (nonatomic, copy) UIImage *merchantIcon;
@property (nonatomic, copy) NSString *secondarySubtitleText;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, copy) NSString *tertiarySubtitleText;
@property (nonatomic) bool useStroke;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)amountText;
- (bool)hasProminentSubtitle;
- (bool)inBridge;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)merchantIcon;
- (id)secondarySubtitleText;
- (void)setAmountText:(id)arg1;
- (void)setHasProminentSubtitle:(bool)arg1;
- (void)setInBridge:(bool)arg1;
- (void)setMerchantIcon:(id)arg1;
- (void)setSecondarySubtitleText:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTertiarySubtitleText:(id)arg1;
- (void)setUseStroke:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleText;
- (id)tertiarySubtitleText;
- (bool)useStroke;

@end
