
@interface PKTitleDetailValueTextView : UIView {
    unsigned long long  _accessory;
    UIView * _accessoryView;
    UIFont * _amountFont;
    PKIconTextLabel * _amountLabel;
    NSAttributedString * _amountText;
    UIColor * _amountTextColor;
    bool  _centerPrimaryText;
    double  _labelPadding;
    UIFont * _primaryFont;
    UIImage * _primaryIcon;
    PKIconTextLabel * _primaryLabel;
    NSAttributedString * _primaryText;
    UIColor * _primaryTextColor;
    UIFont * _secondaryFont;
    UIImage * _secondaryIcon;
    PKIconTextLabel * _secondaryLabel;
    NSAttributedString * _secondaryText;
    UIColor * _secondaryTextColor;
    UIFont * _tertiaryFont;
    UIImage * _tertiaryIcon;
    PKIconTextLabel * _tertiaryLabel;
    NSAttributedString * _tertiaryText;
    UIColor * _tertiaryTextColor;
}

@property (nonatomic) unsigned long long accessory;
@property (nonatomic, retain) UIFont *amountFont;
@property (nonatomic, copy) NSAttributedString *amountText;
@property (nonatomic, retain) UIColor *amountTextColor;
@property (nonatomic) bool centerPrimaryText;
@property (nonatomic) double labelPadding;
@property (nonatomic, retain) UIFont *primaryFont;
@property (nonatomic, retain) UIImage *primaryIcon;
@property (nonatomic, copy) NSAttributedString *primaryText;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) UIFont *secondaryFont;
@property (nonatomic, retain) UIImage *secondaryIcon;
@property (nonatomic, copy) NSAttributedString *secondaryText;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic, retain) UIFont *tertiaryFont;
@property (nonatomic, retain) UIImage *tertiaryIcon;
@property (nonatomic, copy) NSAttributedString *tertiaryText;
@property (nonatomic, retain) UIColor *tertiaryTextColor;

- (void).cxx_destruct;
- (void)_configureView;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_useDefaultFont;
- (unsigned long long)accessory;
- (id)amountFont;
- (id)amountText;
- (id)amountTextColor;
- (bool)centerPrimaryText;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (double)labelPadding;
- (void)layoutSubviews;
- (id)primaryFont;
- (id)primaryIcon;
- (id)primaryText;
- (id)primaryTextColor;
- (id)secondaryFont;
- (id)secondaryIcon;
- (id)secondaryText;
- (id)secondaryTextColor;
- (void)setAccessory:(unsigned long long)arg1;
- (void)setAmountFont:(id)arg1;
- (void)setAmountText:(id)arg1;
- (void)setAmountTextColor:(id)arg1;
- (void)setCenterPrimaryText:(bool)arg1;
- (void)setLabelPadding:(double)arg1;
- (void)setPrimaryFont:(id)arg1;
- (void)setPrimaryIcon:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setSecondaryFont:(id)arg1;
- (void)setSecondaryIcon:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setTertiaryFont:(id)arg1;
- (void)setTertiaryIcon:(id)arg1;
- (void)setTertiaryText:(id)arg1;
- (void)setTertiaryTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tertiaryFont;
- (id)tertiaryIcon;
- (id)tertiaryText;
- (id)tertiaryTextColor;

@end
