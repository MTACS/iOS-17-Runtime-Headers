
@interface TPSAppearance : NSObject {
    unsigned long long  _mediaSizeType;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _sizeToScreenRatio;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) double displayScale;
@property (nonatomic) unsigned long long mediaSizeType;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) double sizeToScreenRatio;
@property (nonatomic, retain) UITraitCollection *traitCollection;

+ (id)bodyFont;
+ (id)boldTextFont;
+ (double)buttonHeight;
+ (id)defaultBackgroundColor;
+ (id)defaultLabelColor;
+ (id)defaultTextLabelFont;
+ (double)displayMultiplier;
+ (id)footnoteBoldTextFont;
+ (id)footnoteFont;
+ (id)footnoteItalicTextFont;
+ (id)headlineFont;
+ (double)introOutroTitleTopPadding;
+ (bool)isMacUI;
+ (bool)isPhoneUI;
+ (id)italicTextFont;
+ (id)language;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (id)preferredFontForTextStyle:(id)arg1 languageCode:(id)arg2;
+ (id)preferredFontForTextStyle:(id)arg1 symoblicTraits:(unsigned int)arg2 languageCode:(id)arg3;
+ (id)secondaryBackgroundColor;
+ (id)secondaryLabelColor;
+ (id)subheadlineFont;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)titleLabelFont;

- (void).cxx_destruct;
- (double)displayMultiplierWithValue:(double)arg1;
- (double)displayScale;
- (double)heightToWidthRatioFromSizes:(id)arg1 mediaSizeType:(unsigned long long)arg2 defaultValue:(double)arg3;
- (id)initAppearanceWithTraits:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)isCompactLayout;
- (unsigned long long)mediaSizeType;
- (double)nativeSizeForValue:(double)arg1;
- (void)setMediaSizeType:(unsigned long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSizeToScreenRatio:(double)arg1;
- (void)setTraitCollection:(id)arg1;
- (bool)sideAppMode;
- (struct CGSize { double x1; double x2; })size;
- (double)sizeToScreenRatio;
- (struct CGSize { double x1; double x2; })sizeWithSizes:(id)arg1 mediaSizeType:(unsigned long long)arg2;
- (id)traitCollection;
- (void)updateAppearanceWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateMediaSizeType;

@end
