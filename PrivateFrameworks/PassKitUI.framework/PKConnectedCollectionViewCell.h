
@interface PKConnectedCollectionViewCell : UICollectionViewListCell {
    UIFont * _amountFont;
    NSAttributedString * _amountText;
    UIColor * _amountTextColor;
    UIColor * _backgroundColor;
    PKGradientVerticalConnector * _bottomConnector;
    bool  _centerPrimaryText;
    PKConnectedCircleView * _circleView;
    double  _minimumHeight;
    UIFont * _primaryFont;
    NSAttributedString * _primaryText;
    UIColor * _primaryTextColor;
    UIFont * _secondaryFont;
    NSAttributedString * _secondaryText;
    UIColor * _secondaryTextColor;
    bool  _showChevron;
    unsigned long long  _targetType;
    NSAttributedString * _tertiaryText;
    UIColor * _tertiaryTextColor;
    PKTitleDetailValueTextView * _textView;
    PKGradientVerticalConnector * _topConnector;
}

@property (nonatomic, retain) UIFont *amountFont;
@property (nonatomic, copy) NSAttributedString *amountText;
@property (nonatomic, retain) UIColor *amountTextColor;
@property (nonatomic, retain) PKGradientVerticalConnector *bottomConnector;
@property (nonatomic) bool centerPrimaryText;
@property (nonatomic) double minimumHeight;
@property (nonatomic, retain) UIFont *primaryFont;
@property (nonatomic, copy) NSAttributedString *primaryText;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) UIFont *secondaryFont;
@property (nonatomic, copy) NSAttributedString *secondaryText;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic) bool showChevron;
@property (nonatomic) unsigned long long targetType;
@property (nonatomic, copy) NSAttributedString *tertiaryText;
@property (nonatomic, retain) UIColor *tertiaryTextColor;
@property (nonatomic, retain) PKGradientVerticalConnector *topConnector;

+ (double)textInsetWithOuterRadius:(double)arg1;

- (void).cxx_destruct;
- (void)_configureView;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (id)amountFont;
- (id)amountText;
- (id)amountTextColor;
- (id)bottomConnector;
- (bool)centerPrimaryText;
- (void)layoutSubviews;
- (double)minimumHeight;
- (void)prepareForReuse;
- (id)primaryFont;
- (id)primaryText;
- (id)primaryTextColor;
- (id)secondaryFont;
- (id)secondaryText;
- (id)secondaryTextColor;
- (void)setAmountFont:(id)arg1;
- (void)setAmountText:(id)arg1;
- (void)setAmountTextColor:(id)arg1;
- (void)setBottomConnector:(id)arg1;
- (void)setCenterPrimaryText:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setPrimaryFont:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setSecondaryFont:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setShowChevron:(bool)arg1;
- (void)setTargetType:(unsigned long long)arg1;
- (void)setTertiaryText:(id)arg1;
- (void)setTertiaryTextColor:(id)arg1;
- (void)setTopConnector:(id)arg1;
- (bool)showChevron;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)targetType;
- (id)tertiaryText;
- (id)tertiaryTextColor;
- (id)topConnector;

@end
