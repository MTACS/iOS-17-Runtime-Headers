
@interface CUITextStyle : CUINamedLookup {
    long long  _alignment;
    NSString * _fontName;
    double  _fontSize;
    double  _maxPointSize;
    double  _minPointSize;
    long long  _scalingStyle;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) double maxPointSize;
@property (nonatomic, readonly) double minPointSize;
@property (nonatomic, readonly) long long scalingStyle;

- (long long)alignment;
- (void)dealloc;
- (id)fontName;
- (double)fontSize;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (double)maxPointSize;
- (double)minPointSize;
- (long long)scalingStyle;

@end
