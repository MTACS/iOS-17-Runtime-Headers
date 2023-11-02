
@interface ASCOfferTheme : NSObject <NSCopying> {
    ASCOfferBackgroundStyle * _backgroundStyle;
    UIColor * _iconTintColor;
    UIColor * _progressColor;
    int  _progressLineCap;
    double  _progressLineWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _stopIndicatorCornerSize;
    double  _stopIndicatorRatio;
    UIColor * _subtitleTextColor;
    UIColor * _titleBackgroundColor;
    UIColor * _titleTextColor;
    UIColor * _titleTextDisabledColor;
}

@property (nonatomic, readonly, retain) ASCOfferBackgroundStyle *backgroundStyle;
@property (nonatomic, readonly) UIColor *iconTintColor;
@property (nonatomic, readonly) UIColor *progressColor;
@property (nonatomic, readonly) int progressLineCap;
@property (nonatomic, readonly) double progressLineWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } stopIndicatorCornerSize;
@property (nonatomic, readonly) double stopIndicatorRatio;
@property (nonatomic, readonly) UIColor *subtitleTextColor;
@property (nonatomic, readonly) UIColor *titleBackgroundColor;
@property (nonatomic, readonly) UIColor *titleTextColor;
@property (nonatomic, readonly) UIColor *titleTextDisabledColor;

+ (id)adTheme;
+ (id)blueTheme;
+ (id)confirmationForTheme:(id)arg1;
+ (id)essoTheme;
+ (id)grayTheme;
+ (id)loadingTheme;
+ (id)primaryTheme;
+ (id)secondaryTheme;
+ (id)viewInAppStoreTheme;
+ (id)whiteOnGrayTheme;
+ (id)whiteTheme;

- (void).cxx_destruct;
- (id)backgroundStyle;
- (id)clone;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)iconTintColor;
- (id)initWithTitleBackgroundColor:(id)arg1 titleTextColor:(id)arg2 subtitleTextColor:(id)arg3 iconTintColor:(id)arg4 progressColor:(id)arg5;
- (id)initWithTitleBackgroundColor:(id)arg1 titleTextColor:(id)arg2 titleTextDisabledColor:(id)arg3 subtitleTextColor:(id)arg4 iconTintColor:(id)arg5 progressColor:(id)arg6;
- (id)initWithTitleBackgroundColor:(id)arg1 titleTextColor:(id)arg2 titleTextDisabledColor:(id)arg3 subtitleTextColor:(id)arg4 iconTintColor:(id)arg5 progressColor:(id)arg6 progressLineWidth:(double)arg7 progressLineCap:(int)arg8 stopIndicatorRatio:(double)arg9 stopIndicatorCornerSize:(struct CGSize { double x1; double x2; })arg10 backgroundStyle:(id)arg11;
- (bool)isEqual:(id)arg1;
- (id)offerThemeWithBackgroundStyle:(id)arg1;
- (id)offerThemeWithProgressLineCap:(int)arg1;
- (id)offerThemeWithProgressLineWidth:(double)arg1;
- (id)offerThemeWithStopIndicatorRatio:(double)arg1;
- (id)progressColor;
- (int)progressLineCap;
- (double)progressLineWidth;
- (struct CGSize { double x1; double x2; })stopIndicatorCornerSize;
- (double)stopIndicatorRatio;
- (id)subtitleTextColor;
- (id)titleBackgroundColor;
- (id)titleTextColor;
- (id)titleTextDisabledColor;

@end
