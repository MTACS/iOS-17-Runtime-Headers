
@interface HRBulletedIndentedLabel : UIView {
    UILabel * _label;
    NSString * _text;
}

@property (nonatomic, retain) UILabel *label;
@property (nonatomic, copy) NSString *text;

+ (id)_bodyFont;
+ (id)_bodyFontTextStyle;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)_updateLeadingDetailAttributedTextSize;
- (id)firstBaselineAnchor;
- (id)initWithText:(id)arg1;
- (id)label;
- (id)lastBaselineAnchor;
- (void)setLabel:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)traitCollectionDidChange:(id)arg1;

@end
