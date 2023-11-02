
@protocol DOCTagInfoCollectionAppearanceProviding <DOCUIAppearanceValues>

@required

- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })cellContentInsets;
- (double)cellCornerRadius;
- (double)dimmingAlphaDuringMenuPresentation;
- (double)horizontalTagSpacing;
- (NSString *)labelFontStyle;
- (double)tagToLabelSpacing;
- (double)verticalTagSpacing;

@end
