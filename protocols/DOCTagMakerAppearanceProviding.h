
@protocol DOCTagMakerAppearanceProviding <DOCUIAppearanceValues>

@required

- (<DOCTagContainerAppearanceProviding> *)container;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })inputFieldRoundedCornerBackgroundMargins;
- (bool)inputFieldShowsLeadingDot;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })rowOfTagsContentInsets;
- (UIColor *)rowOfTagsDotSelectionBorderColor;
- (double)rowOfTagsDotSelectionBorderWidth;
- (double)rowOfTagsDotSize;

@end
