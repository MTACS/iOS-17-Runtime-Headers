
@interface WBSTemplateIconMonogramConfiguration : NSObject {
    UIColor * _backgroundColor;
    double  _baselineOffset;
    double  _cornerRadius;
    long long  _fontDesign;
    double  _fontSize;
    long long  _fontWeight;
    UIColor * _foregroundColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    bool  _skipMonogramGeneration;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) double baselineOffset;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long fontDesign;
@property (nonatomic) double fontSize;
@property (nonatomic) long long fontWeight;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic) bool skipMonogramGeneration;

+ (id)configurationWithBackgroundColor:(id)arg1;
+ (id)configurationWithIconSize:(struct CGSize { double x1; double x2; })arg1 fontSize:(double)arg2 fontWeight:(long long)arg3 fontDesign:(long long)arg4 baselineOffset:(double)arg5 backgroundColor:(id)arg6 cornerRadius:(double)arg7;

- (void).cxx_destruct;
- (id)backgroundColor;
- (double)baselineOffset;
- (double)cornerRadius;
- (long long)fontDesign;
- (double)fontSize;
- (long long)fontWeight;
- (id)foregroundColor;
- (unsigned long long)hash;
- (struct CGSize { double x1; double x2; })iconSize;
- (bool)isEqual:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaselineOffset:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFontDesign:(long long)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFontWeight:(long long)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSkipMonogramGeneration:(bool)arg1;
- (bool)skipMonogramGeneration;

@end
