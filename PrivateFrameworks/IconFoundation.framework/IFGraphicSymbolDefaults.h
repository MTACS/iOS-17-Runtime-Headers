
@interface IFGraphicSymbolDefaults : NSObject {
    IFColor * _borderColorDarkMode;
    IFColor * _borderColorLightMode;
    double  _borderWidth;
    long long  _enclosureColor;
    long long  _enclosureColorAlternate;
    double  _enclosureSizeMultiplier;
    long long  _fill;
    long long  _renderingMode;
    long long  _shape;
    long long  _symbolColor;
    long long  _symbolColorAlternate;
    NSString * _symbolName;
}

@property (readonly) IFColor *borderColorDarkMode;
@property (readonly) IFColor *borderColorLightMode;
@property (readonly) double borderWidth;
@property (readonly) long long enclosureColor;
@property (readonly) long long enclosureColorAlternate;
@property (readonly) double enclosureSizeMultiplier;
@property (readonly) long long fill;
@property (readonly) long long renderingMode;
@property (readonly) long long shape;
@property (readonly) long long symbolColor;
@property (readonly) long long symbolColorAlternate;
@property (readonly) NSString *symbolName;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)borderColorDarkMode;
- (id)borderColorLightMode;
- (double)borderWidth;
- (long long)enclosureColor;
- (long long)enclosureColorAlternate;
- (double)enclosureSizeMultiplier;
- (long long)fill;
- (id)init;
- (long long)renderingMode;
- (long long)shape;
- (long long)symbolColor;
- (long long)symbolColorAlternate;
- (id)symbolName;

@end
