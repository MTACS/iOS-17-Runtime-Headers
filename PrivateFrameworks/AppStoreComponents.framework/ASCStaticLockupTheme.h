
@interface ASCStaticLockupTheme : NSObject <ASCLockupTheme, NSCopying> {
    id /* block */  _headingFontSizeProvider;
    double  _headingFontWeight;
    UIColor * _headingTextColor;
    NSString * _headingTextStyle;
    id /* block */  _subtitleFontSizeProvider;
    double  _subtitleFontWeight;
    UIColor * _subtitleTextColor;
    NSString * _subtitleTextStyle;
    id /* block */  _titleFontSizeProvider;
    double  _titleFontWeight;
    UIColor * _titleTextColor;
    NSString * _titleTextStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ headingFontSizeProvider;
@property (nonatomic) double headingFontWeight;
@property (nonatomic, readonly) UIColor *headingTextColor;
@property (nonatomic, copy) NSString *headingTextStyle;
@property (nonatomic, copy) id /* block */ subtitleFontSizeProvider;
@property (nonatomic) double subtitleFontWeight;
@property (nonatomic, readonly) UIColor *subtitleTextColor;
@property (nonatomic, copy) NSString *subtitleTextStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ titleFontSizeProvider;
@property (nonatomic) double titleFontWeight;
@property (nonatomic, readonly) UIColor *titleTextColor;
@property (nonatomic, copy) NSString *titleTextStyle;

+ (id)adTheme;
+ (id)adWhiteTheme;

- (void).cxx_destruct;
- (void)applyToLockupContentView:(id)arg1 compatibleWithTraitCollection:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)headingFontCompatibleWithTraitCollection:(id)arg1;
- (id /* block */)headingFontSizeProvider;
- (double)headingFontWeight;
- (id)headingTextColor;
- (id)headingTextStyle;
- (id)initWithTitleTextColor:(id)arg1 titleFontSizeProvider:(id /* block */)arg2 titleFontWeight:(double)arg3 subtitleTextColor:(id)arg4 subtitleFontSizeProvider:(id /* block */)arg5 subtitleFontWeight:(double)arg6 headingTextColor:(id)arg7 headingFontSizeProvider:(id /* block */)arg8 headingFontWeight:(double)arg9;
- (id)initWithTitleTextColor:(id)arg1 titleTextStyle:(id)arg2 titleFontWeight:(double)arg3 subtitleTextColor:(id)arg4 subtitleTextStyle:(id)arg5 subtitleFontWeight:(double)arg6 headingTextColor:(id)arg7 headingTextStyle:(id)arg8 headingFontWeight:(double)arg9;
- (bool)isEqual:(id)arg1;
- (void)setHeadingFontSizeProvider:(id /* block */)arg1;
- (void)setHeadingFontWeight:(double)arg1;
- (void)setHeadingTextStyle:(id)arg1;
- (void)setSubtitleFontSizeProvider:(id /* block */)arg1;
- (void)setSubtitleFontWeight:(double)arg1;
- (void)setSubtitleTextStyle:(id)arg1;
- (void)setTitleFontSizeProvider:(id /* block */)arg1;
- (void)setTitleFontWeight:(double)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (id)subtitleFontCompatibleWithTraitCollection:(id)arg1;
- (id /* block */)subtitleFontSizeProvider;
- (double)subtitleFontWeight;
- (id)subtitleTextColor;
- (id)subtitleTextStyle;
- (id)titleFontCompatibleWithTraitCollection:(id)arg1;
- (id /* block */)titleFontSizeProvider;
- (double)titleFontWeight;
- (id)titleTextColor;
- (id)titleTextStyle;

@end
