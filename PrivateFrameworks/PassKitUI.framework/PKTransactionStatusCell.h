
@interface PKTransactionStatusCell : UITableViewCell {
    bool  _isBridge;
    UILabel * _primaryLabel;
    NSString * _primaryText;
    UIColor * _primaryTextOverrideColor;
    UIColor * _secondaryTextOverrideColor;
    NSAttributedString * _secondaryTitleAttributed;
    UIButton * _secondaryTitleButton;
    id /* block */  _secondaryTitleButtonAction;
    UILabel * _secondaryTitleLabel;
    NSString * _secondaryTitleLinkText;
    NSURL * _secondaryTitleLinkURL;
    NSString * _secondaryValue;
    UILabel * _secondaryValueLabel;
    bool  _templateLayout;
}

@property (nonatomic) bool isBridge;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, retain) UIColor *primaryTextOverrideColor;
@property (nonatomic, retain) UIColor *secondaryTextOverrideColor;
@property (nonatomic, copy) NSString *secondaryTitle;
@property (nonatomic, copy) NSAttributedString *secondaryTitleAttributed;
@property (nonatomic, copy) id /* block */ secondaryTitleButtonAction;
@property (nonatomic, copy) NSString *secondaryTitleLinkText;
@property (nonatomic, copy) NSURL *secondaryTitleLinkURL;
@property (nonatomic, copy) NSString *secondaryValue;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateTextColors;
- (void)didPressSecondaryTitleButton:(id)arg1;
- (bool)hasCompleteSecondaryLink;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isBridge;
- (void)layoutSubviews;
- (id)primaryText;
- (id)primaryTextOverrideColor;
- (id)secondaryTextOverrideColor;
- (id)secondaryTitle;
- (id)secondaryTitleAttributed;
- (id /* block */)secondaryTitleButtonAction;
- (id)secondaryTitleLinkText;
- (id)secondaryTitleLinkURL;
- (id)secondaryValue;
- (void)setIsBridge:(bool)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setPrimaryTextOverrideColor:(id)arg1;
- (void)setSecondaryTextOverrideColor:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryTitleAttributed:(id)arg1;
- (void)setSecondaryTitleButtonAction:(id /* block */)arg1;
- (void)setSecondaryTitleLinkText:(id)arg1;
- (void)setSecondaryTitleLinkURL:(id)arg1;
- (void)setSecondaryValue:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
