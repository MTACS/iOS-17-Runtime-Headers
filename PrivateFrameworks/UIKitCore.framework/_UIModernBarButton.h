
@interface _UIModernBarButton : UIButton <_UIButtonBarButtonAppearance> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __additionalSelectionInsets;
    bool  _guardAgainstDegenerateBaselineCalculation;
}

@property (setter=_setAdditionalSelectionInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _additionalSelectionInsets;
@property (setter=_setGuardAgainstDegenerateBaselineCalculation:, nonatomic) bool _guardAgainstDegenerateBaselineCalculation;

+ (Class)_visualProviderClass;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_additionalSelectionInsets;
- (bool)_guardAgainstDegenerateBaselineCalculation;
- (bool)_likelyToHaveTitle;
- (struct CGSize { double x1; double x2; })_roundSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedIndicatorBounds;
- (void)_setAdditionalSelectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setGuardAgainstDegenerateBaselineCalculation:(bool)arg1;
- (void)_setupForUseAsImageButton;
- (bool)_shouldAdjustToTraitCollection;
- (bool)_supportsMacIdiom;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)didMoveToWindow;

@end
