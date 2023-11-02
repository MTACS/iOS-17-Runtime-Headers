
@interface DOCTagMakerAppearance : NSObject <DOCTagMakerAppearanceProviding>

@property (readonly) <DOCTagContainerAppearanceProviding> *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } inputFieldRoundedCornerBackgroundMargins;
@property (readonly) bool inputFieldShowsLeadingDot;
@property (readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } rowOfTagsContentInsets;
@property (readonly) UIColor *rowOfTagsDotSelectionBorderColor;
@property (readonly) double rowOfTagsDotSelectionBorderWidth;
@property (readonly) double rowOfTagsDotSize;
@property (readonly) Class superclass;

- (id)_init;
- (id)container;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })inputFieldRoundedCornerBackgroundMargins;
- (bool)inputFieldShowsLeadingDot;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })rowOfTagsContentInsets;
- (id)rowOfTagsDotSelectionBorderColor;
- (double)rowOfTagsDotSelectionBorderWidth;
- (double)rowOfTagsDotSize;

@end
