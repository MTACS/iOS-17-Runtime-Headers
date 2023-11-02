
@interface EKUITableViewCellWithPrimaryAndSecondaryFonts : EKUITableViewCell

+ (void)_clearFontCaches;
+ (bool)allowLargestFontSizesForWidth:(double)arg1;
+ (id)constrainedPrimaryTextLabelFont;
+ (void)initialize;
+ (id)primaryTextLabelFontForWidth:(double)arg1;
+ (id)scalablePrimaryTextLabelFont;
+ (id)secondaryTextLabelFont;
+ (id)timeLabelsFont;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (id)primaryTextLabelFont;
- (id)secondaryTextLabelFont;
- (id)timeLabelsFont;

@end
