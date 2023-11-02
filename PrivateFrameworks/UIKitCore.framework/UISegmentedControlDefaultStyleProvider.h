
@interface UISegmentedControlDefaultStyleProvider : NSObject <UISegmentedControlStyleProvider>

@property (nonatomic, readonly) bool animateHighlightingSelectionByDefault;
@property (nonatomic, readonly) bool animateSlidingSelectionByDefault;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) UIColor *defaultBackgroundTintColor;
@property (nonatomic, readonly) double defaultContentPaddingWidth;
@property (nonatomic, readonly) double defaultInterSegmentSpacing;
@property (nonatomic, readonly) double defaultTextContentPaddingWidth;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasShadowWithSelectedSegmentEffect;
@property (nonatomic, readonly) bool hasTransparentBackgroundByDefault;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIVibrancyEffect *highlightedSegmentDefaultVibrancyEffect;
@property (nonatomic, readonly) bool limitInternalLayoutAndInteractionToDefaultHeight;
@property (nonatomic, readonly) double mostlyInsideMargin;
@property (nonatomic, readonly) double segmentHidingFinalScaleFactor;
@property (nonatomic, readonly) double segmentSelectionScaleFactor;
@property (nonatomic, readonly) UIVibrancyEffect *selectedSegmentContentDefaultVibrancyEffect;
@property (nonatomic, readonly) UIBlurEffect *selectedSegmentDefaultBlurEffect;
@property (nonatomic, readonly) UIVibrancyEffect *selectedSegmentDefaultVibrancyEffect;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAXPopover;
@property (nonatomic, readonly) bool supportsDynamicTypeByDefault;
@property (nonatomic, readonly) UIVibrancyEffect *unselectedSegmentContentDefaultVibrancyEffect;
@property (nonatomic, readonly) bool useGeneratedImages;
@property (nonatomic, readonly) bool useSelectionIndicatorStyling;
@property (nonatomic, readonly) bool useTVStyleFocusSelection;
@property (nonatomic, readonly) bool usesContinuousCurveCorners;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentInsetsForControlSize:(int)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentInsetsForControlSize:(int)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 traitCollection:(id)arg3;
- (bool)animateSlidingSelectionByDefault;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForControlSize:(int)arg1 position:(unsigned int)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 traitCollection:(id)arg4;
- (double)cornerRadiusForControlSize:(int)arg1;
- (id)createBackdropView;
- (id)createSegmentBezelView;
- (id)createSelectedSegmentEffectShadowView;
- (id)defaultBackgroundTintColor;
- (double)defaultContentPaddingWidth;
- (double)defaultHeightForControlSize:(int)arg1 traitCollection:(id)arg2;
- (double)defaultInterSegmentSpacing;
- (double)defaultTextContentPaddingWidth;
- (double)dividerWidthForControlSize:(int)arg1;
- (id)fontColorForSegment:(id)arg1 enabled:(bool)arg2 selected:(bool)arg3 state:(unsigned long long)arg4;
- (id)fontForControlSize:(int)arg1 selected:(bool)arg2;
- (bool)hasShadowWithSelectedSegmentEffect;
- (bool)hasTransparentBackgroundByDefault;
- (bool)limitInternalLayoutAndInteractionToDefaultHeight;
- (bool)maskToCornerRadius;
- (double)mostlyInsideMargin;
- (double)segmentHidingFinalScaleFactor;
- (double)segmentSelectionScaleFactor;
- (id)selectedSegmentContentDefaultVibrancyEffect;
- (id)selectedSegmentDefaultBlurEffect;
- (id)selectedSegmentDefaultVibrancyEffect;
- (double)selectionIndicatorInsetForControlSize:(int)arg1;
- (bool)supportsAXPopover;
- (bool)supportsDynamicTypeByDefault;
- (void)touchesBegan;
- (void)touchesEnded;
- (id)unselectedSegmentContentDefaultVibrancyEffect;
- (bool)useGeneratedImages;
- (bool)useSelectionIndicatorStyling;
- (bool)useTVStyleFocusSelection;
- (bool)usesContinuousCurveCorners;

@end
