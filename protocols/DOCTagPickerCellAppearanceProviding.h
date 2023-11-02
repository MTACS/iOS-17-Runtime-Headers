
@protocol DOCTagPickerCellAppearanceProviding <DOCUIAppearanceValues>

@required

- (bool)addTagCellShowsDashedBorder;
- (UIColor *)backgroundColorForTag:(DOCTag *)arg1 selected:(bool)arg2;
- (UIHoverStyle *)cellContentHoverStyle;
- (double)cellCornerRadius;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })cellExternalMargins;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })cellInteriorLayoutMargins;
- (UIColor *)checkmarkImageColorForTag:(DOCTag *)arg1;
- (UIImageSymbolConfiguration *)checkmarkImageConfiguration;
- (<DOCTagContainerAppearanceProviding> *)container;
- (double)dotSize;
- (double)spacing_dotToTitle;
- (double)spacing_leadingEdgeToDot;
- (double)spacing_titleToCheckmark;
- (double)spacing_trailingEdgeToCheckmark;
- (NSString *)titleTextStyle;

@end
