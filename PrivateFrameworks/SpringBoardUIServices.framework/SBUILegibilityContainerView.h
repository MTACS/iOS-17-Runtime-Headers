
@interface SBUILegibilityContainerView : UIView {
    bool  _dirty;
    UIView<_SBUILegibilityContainerContentView> * _drawView;
    UIImage * _image;
    <SBUILegibilityEngine> * _legibilityEngine;
    <SBUILegibilitySettings> * _legibilitySettings;
    long long  _options;
    UIImage * _processedImage;
    double  _strength;
    UIImage * _strengthenedImage;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) <SBUILegibilityEngine> *legibilityEngine;
@property (nonatomic, retain) <SBUILegibilitySettings> *legibilitySettings;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) UIImage *processedImage;
@property (nonatomic) double strength;
@property (nonatomic, readonly) UIImage *strengthenedImage;

- (void).cxx_destruct;
- (void)_applyStrength;
- (id)_contentColor;
- (id)_drawView;
- (void)_setDrawImage:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)_updateFilters;
- (bool)_usesColorFilters;
- (bool)_usesSecondaryColor;
- (void)applySettingsForLegibilityStyle:(long long)arg1;
- (id)buildDrawView;
- (id)image;
- (void)layoutSubviews;
- (id)legibilityEngine;
- (id)legibilitySettings;
- (long long)options;
- (id)processedImage;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 strengthenedImage:(id)arg2 strength:(double)arg3;
- (void)setLegibilityEngine:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (void)sizeToFit;
- (double)strength;
- (id)strengthenedImage;
- (bool)updateOptions:(long long)arg1;

@end
