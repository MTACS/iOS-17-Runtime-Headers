
@interface PXStoryChromeButtonSpec : NSObject {
    long long  _backgroundStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _badgeImageSize;
    long long  _badgeSystemImageWeight;
    long long  _blurEffectStyle;
    UIColor * _defaultFocusedTintColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultImageSize;
    UIColor * _defaultTintColor;
    PXExtendedTraitCollection * _extendedTraitCollection;
    struct CGSize { 
        double width; 
        double height; 
    }  _focusedShadowOffset;
    double  _focusedShadowOpacity;
    long long  _highlightedBlurEffectStyle;
    NSDictionary * _labelAttributes;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _labelPadding;
    double  _roundedRectCornerRadius;
    double  _shadowRadius;
    bool  _shouldDimWhenHighlighted;
    long long  _systemImageScale;
    double  _systemImageSizeWithBackground;
    double  _systemImageSizeWithoutBackground;
    long long  _systemImageStyle;
    long long  _systemImageWeightWithBackground;
    long long  _systemImageWeightWithoutBackground;
    long long  _textOnlyBlurEffectStyle;
}

@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } badgeImageSize;
@property (nonatomic, readonly) long long badgeSystemImageWeight;
@property (nonatomic, readonly) long long blurEffectStyle;
@property (nonatomic, readonly) UIColor *defaultFocusedTintColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultImageSize;
@property (nonatomic, readonly) UIColor *defaultTintColor;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } focusedShadowOffset;
@property (nonatomic, readonly) double focusedShadowOpacity;
@property (nonatomic, readonly) long long highlightedBlurEffectStyle;
@property (nonatomic, readonly) NSDictionary *labelAttributes;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } labelPadding;
@property (nonatomic, readonly) double roundedRectCornerRadius;
@property (nonatomic, readonly) double shadowRadius;
@property (nonatomic, readonly) bool shouldDimWhenHighlighted;
@property (nonatomic, readonly) long long systemImageScale;
@property (nonatomic, readonly) double systemImageSizeWithBackground;
@property (nonatomic, readonly) double systemImageSizeWithoutBackground;
@property (nonatomic, readonly) long long systemImageStyle;
@property (nonatomic, readonly) long long systemImageWeightWithBackground;
@property (nonatomic, readonly) long long systemImageWeightWithoutBackground;
@property (nonatomic, readonly) long long textOnlyBlurEffectStyle;

- (void).cxx_destruct;
- (long long)backgroundStyle;
- (struct CGSize { double x1; double x2; })badgeImageSize;
- (long long)badgeSystemImageWeight;
- (long long)blurEffectStyle;
- (id)defaultFocusedTintColor;
- (struct CGSize { double x1; double x2; })defaultImageSize;
- (id)defaultTintColor;
- (id)extendedTraitCollection;
- (struct CGSize { double x1; double x2; })focusedShadowOffset;
- (double)focusedShadowOpacity;
- (long long)highlightedBlurEffectStyle;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)labelAttributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })labelPadding;
- (double)roundedRectCornerRadius;
- (double)shadowRadius;
- (bool)shouldDimWhenHighlighted;
- (long long)systemImageScale;
- (double)systemImageSizeWithBackground;
- (double)systemImageSizeWithoutBackground;
- (long long)systemImageStyle;
- (long long)systemImageWeightWithBackground;
- (long long)systemImageWeightWithoutBackground;
- (long long)textOnlyBlurEffectStyle;

@end
