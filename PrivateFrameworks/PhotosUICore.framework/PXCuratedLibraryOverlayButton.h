
@interface PXCuratedLibraryOverlayButton : UIButton <PXGReusableView, UIPointerInteractionDelegate> {
    NSString * _axLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    UIView * _contentView;
    UILabel * _customCaptionLabel;
    UIImageView * _customIconImageView;
    UIView * _customSolidBackgroundView;
    UILabel * _customTitleLabel;
    UIVisualEffectView * _effectView;
    bool  _isSizeCalculationButton;
    UIPointerInteraction * _pointerInteraction;
    PXCuratedLibraryOverlayButtonConfiguration * _userData;
}

@property (nonatomic, retain) NSString *axLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UILabel *customCaptionLabel;
@property (nonatomic, retain) UIImageView *customIconImageView;
@property (nonatomic, retain) UIView *customSolidBackgroundView;
@property (nonatomic, retain) UILabel *customTitleLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSizeCalculationButton;
@property (nonatomic, retain) UIPointerInteraction *pointerInteraction;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (readonly) Class superclass;
@property (nonatomic, copy) PXCuratedLibraryOverlayButtonConfiguration *userData;

+ (void)_getSize:(out struct CGSize { double x1; double x2; }*)arg1 titleFrame:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 captionFrame:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 iconFrame:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 forConfiguration:(id)arg5 title:(id)arg6;
+ (struct CGSize { double x1; double x2; })_sizeOfTitle:(id)arg1 withFont:(id)arg2;
+ (id)buttonSizeCache;
+ (id)defaultTitleColor;
+ (id)defaultTitleFont;
+ (id)roundedCornerMaskImage:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGSize { double x1; double x2; })sizeWithConfiguration:(id)arg1;
+ (id)titleSizeCache;
+ (bool)usesButtonSystem;

- (void).cxx_destruct;
- (void)_accessibilitySettingsChanged:(id)arg1;
- (void)_performAction:(id)arg1;
- (void)_performMenuAction:(id)arg1;
- (void)_platformSpecificViewSetup;
- (void)_setupViews;
- (void)_updateBackgroundView;
- (void)_updateButtonSystemWithConfiguration:(id)arg1;
- (void)_updateButtonWithConfiguration:(id)arg1;
- (void)_updateEffectView;
- (void)_updateEffectViewBackgroundStyle;
- (id)axLabel;
- (void)becomeReusable;
- (bool)canBecomeFocused;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)contentView;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)customCaptionLabel;
- (id)customIconImageView;
- (id)customSolidBackgroundView;
- (id)customTitleLabel;
- (id)description;
- (id)effectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSizeCalculationButton;
- (void)layoutSubviews;
- (id)pointerInteraction;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)prepareForReuse;
- (void)setAxLabel:(id)arg1;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setCustomCaptionLabel:(id)arg1;
- (void)setCustomIconImageView:(id)arg1;
- (void)setCustomSolidBackgroundView:(id)arg1;
- (void)setCustomTitleLabel:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsSizeCalculationButton:(bool)arg1;
- (void)setPointerInteraction:(id)arg1;
- (void)setUserData:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)userData;

@end
