
@interface SearchUISymbolImage : SearchUIImage {
    int  _backgroundColor;
    UIColor * _customBackgroundColor;
    UIColor * _customForegroundColor;
    long long  _preferredFill;
    double  _preferredSymbolFontSize;
    int  _primaryColor;
    bool  _punchThroughBackground;
    int  _secondaryColor;
    UIFont * _symbolFont;
    NSString * _symbolName;
    long long  _symbolScale;
    long long  _symbolWeight;
}

@property int backgroundColor;
@property (nonatomic, retain) UIColor *customBackgroundColor;
@property (nonatomic, retain) UIColor *customForegroundColor;
@property long long preferredFill;
@property double preferredSymbolFontSize;
@property int primaryColor;
@property bool punchThroughBackground;
@property int secondaryColor;
@property (retain) UIFont *symbolFont;
@property (retain) NSString *symbolName;
@property long long symbolScale;
@property long long symbolWeight;

+ (id)chevronImage;
+ (id)uiImageWithSymbolName:(id)arg1;
+ (id)uiImageWithSymbolName:(id)arg1 font:(id)arg2 scale:(long long)arg3;
+ (id)uiImageWithSymbolName:(id)arg1 font:(id)arg2 scale:(long long)arg3 weight:(long long)arg4 isTemplate:(bool)arg5;
+ (id)uiImageWithSymbolName:(id)arg1 font:(id)arg2 scale:(long long)arg3 weight:(long long)arg4 isTemplate:(bool)arg5 platformPrimaryColor:(id)arg6 platformSecondaryColor:(id)arg7 appearance:(id)arg8 preferredFill:(long long)arg9;
+ (id)uiImageWithSymbolName:(id)arg1 font:(id)arg2 scale:(long long)arg3 weight:(long long)arg4 isTemplate:(bool)arg5 primaryColor:(int)arg6 secondaryColor:(int)arg7 appearance:(id)arg8;
+ (id)uiImageWithSymbolName:(id)arg1 font:(id)arg2 scale:(long long)arg3 weight:(long long)arg4 isTemplate:(bool)arg5 primaryColor:(int)arg6 secondaryColor:(int)arg7 appearance:(id)arg8 preferredFill:(long long)arg9;

- (void).cxx_destruct;
- (double)aspectRatio;
- (int)backgroundColor;
- (id)customBackgroundColor;
- (id)customForegroundColor;
- (int)defaultCornerRoundingStyle;
- (bool)drawsOnBackground;
- (unsigned long long)hash;
- (id)initWithSFImage:(id)arg1;
- (id)initWithSymbolName:(id)arg1;
- (id)initWithSymbolName:(id)arg1 font:(id)arg2 scale:(long long)arg3;
- (id)initWithSymbolName:(id)arg1 font:(id)arg2 scale:(long long)arg3 weight:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2;
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2 completionHandler:(id /* block */)arg3;
- (long long)preferredFill;
- (double)preferredSymbolFontSize;
- (int)primaryColor;
- (bool)punchThroughBackground;
- (int)secondaryColor;
- (void)setBackgroundColor:(int)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setCustomForegroundColor:(id)arg1;
- (void)setPreferredFill:(long long)arg1;
- (void)setPreferredSymbolFontSize:(double)arg1;
- (void)setPrimaryColor:(int)arg1;
- (void)setPunchThroughBackground:(bool)arg1;
- (void)setSecondaryColor:(int)arg1;
- (void)setSymbolFont:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (void)setSymbolScale:(long long)arg1;
- (void)setSymbolWeight:(long long)arg1;
- (id)symbolFont;
- (id)symbolName;
- (long long)symbolScale;
- (long long)symbolWeight;

@end
