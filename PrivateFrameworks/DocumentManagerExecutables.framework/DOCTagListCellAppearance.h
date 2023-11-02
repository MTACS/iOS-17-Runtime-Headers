
@interface DOCTagListCellAppearance : NSObject <DOCTagPickerCellAppearanceProviding>

@property (readonly) bool addTagCellShowsDashedBorder;
@property (readonly) UIHoverStyle *cellContentHoverStyle;
@property (readonly) double cellCornerRadius;
@property (readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } cellExternalMargins;
@property (readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } cellInteriorLayoutMargins;
@property (readonly) UIImageSymbolConfiguration *checkmarkImageConfiguration;
@property (readonly) <DOCTagContainerAppearanceProviding> *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double dotSize;
@property (readonly) unsigned long long hash;
@property (readonly) double spacing_dotToTitle;
@property (readonly) double spacing_leadingEdgeToDot;
@property (readonly) double spacing_titleToCheckmark;
@property (readonly) double spacing_trailingEdgeToCheckmark;
@property (readonly) Class superclass;
@property (readonly) NSString *titleTextStyle;

- (id)_init;
- (bool)addTagCellShowsDashedBorder;
- (id)backgroundColorForTag:(id)arg1 selected:(bool)arg2;
- (id)cellContentHoverStyle;
- (double)cellCornerRadius;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })cellExternalMargins;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })cellInteriorLayoutMargins;
- (id)checkmarkImageColorForTag:(id)arg1;
- (id)checkmarkImageConfiguration;
- (id)container;
- (double)dotSize;
- (double)spacing_dotToTitle;
- (double)spacing_leadingEdgeToDot;
- (double)spacing_titleToCheckmark;
- (double)spacing_trailingEdgeToCheckmark;
- (id)titleTextStyle;

@end
