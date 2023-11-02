
@interface EKUIAutocompleteSearchResultCell : EKUITableViewCellWithPrimaryAndSecondaryFonts

+ (double)cellHeightForResult:(id)arg1 forWidth:(double)arg2;
+ (id)primaryTextColor;
+ (id)secondaryTextColor;
+ (id)secondaryTextLabelFont;
+ (double)verticalSpacingBottomToBaselineForBottomLabelWithPrimaryFont:(id)arg1;
+ (double)verticalSpacingTopToBaselineForBottomLabelWithSecondaryFont:(id)arg1;
+ (double)verticalSpacingTopToBaselineForTopLabelWithPrimaryFont:(id)arg1;

- (id)_createLabelWithColor:(id)arg1;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;
- (id)createPrimaryLabel;
- (id)createSecondaryLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setLabelFonts;
- (void)setupConstraints;
- (void)updateWithResult:(id)arg1;
- (double)verticalSpacingTopToBaselineForBottomLabel;
- (double)verticalSpacingTopToBaselineForTopLabel;
- (double)verticalSpacingTopToColorDot;

@end
