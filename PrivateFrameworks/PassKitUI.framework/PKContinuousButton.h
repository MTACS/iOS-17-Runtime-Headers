
@interface PKContinuousButton : UIButton <PKLegacyButtonInterface> {
    UIColor * _activityIndicatorColor;
    UIActivityIndicatorView * _activityIndicatorView;
    UIColor * _appliedInputColor;
    long long  _backdropStyle;
    _UIBackdropView * _backdropView;
    bool  _blurDisabled;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSize;
    struct { 
        double cornerRadius; 
        long long shape; 
        long long style; 
        long long highlightEffect; 
        long long disabledEffect; 
    }  _configuration;
    NSMutableSet * _disabledImageStates;
    UIColor * _disabledInputColor;
    bool  _enabled;
    CAFilter * _highlightFilter;
    UIColor * _highlightInputColor;
    bool  _highlighted;
    UIImage * _image;
    CAShapeLayer * _layer;
    UIColor * _normalInputColor;
    UIColor * _overrideBackgroundColor;
    UIColor * _overrideTitleColor;
    bool  _selected;
    UIColor * _selectedInputColor;
    bool  _showSpinner;
    bool  _updatingBackdropSettings;
}

@property (nonatomic) bool blurDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showSpinner;
@property (readonly) Class superclass;

+ (id)_filterInputColorForEffect:(long long)arg1;
+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (void)_createHighlightFilterIfNecessary;
- (void)_dynamicUserInterfaceTraitDidChange;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateBackdropSettings;
- (void)_updateColor;
- (void)_updateFilter;
- (void)_updateTitleColor;
- (bool)blurDisabled;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(struct { double x1; long long x2; long long x3; long long x4; long long x5; })arg1;
- (id)initWithCornerRadius:(double)arg1 effect:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)setBlurDisabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageEnabled:(bool)arg1 forState:(unsigned long long)arg2;
- (void)setSelected:(bool)arg1;
- (void)setShowSpinner:(bool)arg1;
- (bool)showSpinner;
- (void)tintColorDidChange;
- (void)updateActivityIndicatorColorWithColor:(id)arg1;
- (void)updateBackgroundColorWithColor:(id)arg1;
- (void)updateImageView;
- (void)updateTitleColorWithColor:(id)arg1;
- (void)updateWithImage:(id)arg1;

@end
