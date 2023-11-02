
@interface _UISearchAtomViewVisualStyle : NSObject <_UIVisualStyleProviding> {
    _UISearchAtomView * _searchAtomView;
}

@property (nonatomic, readonly) double contentHorizontalPadding;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) UIBlurEffect *defaultAtomBackgroundBlurEffect;
@property (nonatomic, readonly) UIColor *defaultAtomBackgroundColor;
@property (nonatomic, readonly) UIFont *defaultFont;
@property (nonatomic, readonly) UIColor *defaultSelectedAtomBackgroundColor;
@property (nonatomic, readonly) UIColor *defaultSelectedTextAndImageColor;
@property (nonatomic, readonly) UIColor *defaultTextAndImageColor;
@property (nonatomic, readonly) double disabledAlpha;
@property (nonatomic, readonly) UIBlurEffect *disabledAtomBackgroundBlurEffect;
@property (nonatomic, readonly) double imageTextSpacing;
@property (nonatomic, readonly) double maximumAtomWidthFraction;
@property (nonatomic, readonly) double maximumFallbackWidth;
@property (nonatomic, readonly) double minimumConstrainedAtomWidth;
@property (nonatomic, readonly) double minimumTextConstrastRatio;
@property (nonatomic, readonly) _UISearchAtomView *searchAtomView;
@property (nonatomic, readonly) UIColor *textContrastFallbackColor;
@property (nonatomic, readonly) double textVerticalPadding;

- (void).cxx_destruct;
- (double)contentHorizontalPadding;
- (double)cornerRadius;
- (id)defaultAtomBackgroundBlurEffect;
- (id)defaultAtomBackgroundColor;
- (id)defaultFont;
- (id)defaultSelectedAtomBackgroundColor;
- (id)defaultSelectedTextAndImageColor;
- (id)defaultTextAndImageColor;
- (double)disabledAlpha;
- (id)disabledAtomBackgroundBlurEffect;
- (double)imageTextSpacing;
- (id)initWithInstance:(id)arg1;
- (double)maximumAtomWidthFraction;
- (double)maximumFallbackWidth;
- (double)minimumConstrainedAtomWidth;
- (double)minimumTextConstrastRatio;
- (id)searchAtomView;
- (id)textContrastFallbackColor;
- (double)textVerticalPadding;
- (void)updateColorsWithBackgroundColor:(id)arg1;

@end
