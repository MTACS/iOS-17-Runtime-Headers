
@interface AXUIBannerView : AXUIPlatterContainerView {
    NSString * _secondaryText;
    UILabel * _secondaryTextLabel;
    UILabel * _textLabel;
    NSArray * _withSecondaryTextConstraints;
}

@property (nonatomic, readonly) double defaultPlatterToTextVerticalSpacing;
@property (nonatomic, readonly) double defaultTitleToSubtitleVerticalSpacing;
@property (nonatomic, readonly) double platterToTextHorizontalSpacing;
@property (nonatomic, retain) NSString *secondaryText;
@property (nonatomic, retain) UILabel *secondaryTextLabel;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic, retain) NSArray *withSecondaryTextConstraints;

- (void).cxx_destruct;
- (void)_updateSecondaryTextVisibility;
- (double)defaultPlatterToTextVerticalSpacing;
- (double)defaultTitleToSubtitleVerticalSpacing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)platterToTextHorizontalSpacing;
- (double)platterWidth;
- (id)secondaryText;
- (id)secondaryTextLabel;
- (void)setSecondaryText:(id)arg1;
- (void)setSecondaryTextLabel:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setWithSecondaryTextConstraints:(id)arg1;
- (id)text;
- (id)textLabel;
- (id)withSecondaryTextConstraints;

@end
