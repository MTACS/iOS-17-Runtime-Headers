
@interface PXUIInteractiveBadgeTheme : NSObject <PXUIBadgeTheme> {
    UIColor * _afterLabelImageTintColor;
    double  _backgroundAlpha;
    UIBlurEffect * _backgroundBlurEffect;
    UIColor * _backgroundBorderColor;
    double  _backgroundBorderWidth;
    UIColor * _backgroundColor;
    double  _backgroundCornerRadius;
    Class  _backgroundViewClass;
    double  _imageAlpha;
    CAFilter * _imageCompositingFilter;
    UIImageSymbolConfiguration * _imageConfiguration;
    UIColor * _imageTintColor;
    double  _labelAlpha;
    CAFilter * _labelCompositingFilter;
    UIFont * _labelFont;
    UIColor * _labelTextColor;
}

@property (nonatomic, readonly) UIColor *afterLabelImageTintColor;
@property (nonatomic, readonly) double backgroundAlpha;
@property (nonatomic, readonly) UIBlurEffect *backgroundBlurEffect;
@property (nonatomic, readonly) UIColor *backgroundBorderColor;
@property (nonatomic, readonly) double backgroundBorderWidth;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) double backgroundCornerRadius;
@property (nonatomic, readonly) Class backgroundViewClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double imageAlpha;
@property (nonatomic, readonly) CAFilter *imageCompositingFilter;
@property (nonatomic, readonly) UIImageSymbolConfiguration *imageConfiguration;
@property (nonatomic, readonly) UIColor *imageTintColor;
@property (nonatomic, readonly) double labelAlpha;
@property (nonatomic, readonly) CAFilter *labelCompositingFilter;
@property (nonatomic, readonly) UIFont *labelFont;
@property (nonatomic, readonly) UIColor *labelTextColor;
@property (readonly) Class superclass;

+ (id)actionableBadgeTheme;
+ (id)disabledActionableBadgeTheme;
+ (id)sharedToggledOffBadgeTheme;
+ (id)sharedToggledOnBadgeTheme;

- (void).cxx_destruct;
- (id)afterLabelImageTintColor;
- (double)backgroundAlpha;
- (id)backgroundBlurEffect;
- (id)backgroundBorderColor;
- (double)backgroundBorderWidth;
- (id)backgroundColor;
- (double)backgroundCornerRadius;
- (Class)backgroundViewClass;
- (double)imageAlpha;
- (id)imageCompositingFilter;
- (id)imageConfiguration;
- (id)imageTintColor;
- (id)init;
- (id)initWithIsToggledOn:(bool)arg1 isActionable:(bool)arg2 isDisabled:(bool)arg3;
- (double)labelAlpha;
- (id)labelCompositingFilter;
- (id)labelFont;
- (id)labelTextColor;

@end
