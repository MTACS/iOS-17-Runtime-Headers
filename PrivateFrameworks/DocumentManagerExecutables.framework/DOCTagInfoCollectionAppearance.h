
@interface DOCTagInfoCollectionAppearance : NSObject <DOCTagInfoCollectionAppearanceProviding>

@property (readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } cellContentInsets;
@property (readonly) double cellCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double dimmingAlphaDuringMenuPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) double horizontalTagSpacing;
@property (readonly) NSString *labelFontStyle;
@property (readonly) Class superclass;
@property (readonly) double tagToLabelSpacing;
@property (readonly) double verticalTagSpacing;

- (id)_init;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })cellContentInsets;
- (double)cellCornerRadius;
- (double)dimmingAlphaDuringMenuPresentation;
- (double)horizontalTagSpacing;
- (id)labelFontStyle;
- (double)tagToLabelSpacing;
- (double)verticalTagSpacing;

@end
