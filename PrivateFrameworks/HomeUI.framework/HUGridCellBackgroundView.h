
@interface HUGridCellBackgroundView : UIView {
    <HUBackgroundEffectViewGrouping> * _backgroundEffectViewGrouper;
    unsigned long long  _backgroundState;
    UIColor * _backgroundTintColor;
    UIView * _ccHighlightMaterialView;
    UIView * _ccOffMaterialView;
    UIView * _ccOnMaterialView;
    double  _cornerRadius;
    HUGridCellBackgroundDisplayOptions * _displayOptions;
    UIVisualEffectView * _effectView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedWallpaperRect;
    UIBlurEffect * _overrideBackgroundEffect;
    bool  _pressed;
    bool  _useDefaultCellBackgroundColor;
}

@property (nonatomic) <HUBackgroundEffectViewGrouping> *backgroundEffectViewGrouper;
@property (nonatomic) unsigned long long backgroundState;
@property (nonatomic, retain) UIColor *backgroundTintColor;
@property (nonatomic, retain) UIView *ccHighlightMaterialView;
@property (nonatomic, retain) UIView *ccOffMaterialView;
@property (nonatomic, retain) UIView *ccOnMaterialView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) HUGridCellBackgroundDisplayOptions *displayOptions;
@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedWallpaperRect;
@property (nonatomic, retain) UIBlurEffect *overrideBackgroundEffect;
@property (getter=isPressed, nonatomic) bool pressed;
@property (nonatomic) bool useDefaultCellBackgroundColor;

+ (id)_sharedBlurEffect;

- (void).cxx_destruct;
- (void)_createEffectViewIfNecessary;
- (void)_createHighlightCCMateriaViewIfNecessary;
- (void)_createOffCCMaterialViewIfNecessary;
- (void)_createOnCCMaterialViewIfNecessary;
- (id)_normalBackgroundColor;
- (bool)_shouldUseCCMaterialView;
- (bool)_shouldUsePrecomputedWallpaperContents;
- (bool)_shouldUseVisualEffectStyle;
- (void)_updateBackgroundColor;
- (void)_updateCornerRadius;
- (void)_updateDisplay;
- (void)_updateHighlightView;
- (void)_updateWallpaperContentsRect;
- (id)backgroundEffectViewGrouper;
- (unsigned long long)backgroundState;
- (id)backgroundTintColor;
- (id)ccHighlightMaterialView;
- (id)ccOffMaterialView;
- (id)ccOnMaterialView;
- (double)cornerRadius;
- (void)dealloc;
- (id)displayOptions;
- (id)effectView;
- (bool)isPressed;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedWallpaperRect;
- (id)overrideBackgroundEffect;
- (void)setBackgroundEffectViewGrouper:(id)arg1;
- (void)setBackgroundState:(unsigned long long)arg1;
- (void)setBackgroundTintColor:(id)arg1;
- (void)setCcHighlightMaterialView:(id)arg1;
- (void)setCcOffMaterialView:(id)arg1;
- (void)setCcOnMaterialView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDisplayOptions:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setNormalizedWallpaperRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOverrideBackgroundEffect:(id)arg1;
- (void)setPressed:(bool)arg1;
- (void)setUseDefaultCellBackgroundColor:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useDefaultCellBackgroundColor;

@end
