
@interface NSLineFragmentRenderingContext : NSObject <NSTextApplicationFrameworkContextClient> {
    struct CGSize { double x1; double x2; } * _advancements;
    long long  _appContext;
    CUICatalog * _catalog;
    double  _elasticWidth;
    struct { 
        unsigned int _isRTL : 1; 
        unsigned int _vAdvance : 1; 
        unsigned int _flipped : 1; 
        unsigned int _usesSimpleTextEffects : 1; 
        unsigned int _applicationFrameworkContext : 3; 
        unsigned int _reserved : 25; 
    }  _flags;
    unsigned short * _glyphs;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageBounds;
    double  _leftControlWidth;
    double  _leftSideDelta;
    double  _lineWidth;
    long long  _numRuns;
    long long  _resolvedAlignment;
    long long  _resolvedDirection;
    double  _rightControlWidth;
    void * _runs;
    CUIStyleEffectConfiguration * _styleEffects;
    __NSImmutableTextStorage * _textStorage;
}

@property long long applicationFrameworkContext;
@property (nonatomic, retain) CUICatalog *cuiCatalog;
@property (nonatomic, retain) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long resolvedBaseWritingDirection;
@property long long resolvedTextAlignment;
@property (readonly) Class superclass;
@property (getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:, nonatomic) bool usesSimpleTextEffects;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (void)_setUsesSimpleTextEffects:(bool)arg1;
- (bool)_usesSimpleTextEffects;
- (long long)applicationFrameworkContext;
- (id)cuiCatalog;
- (id)cuiStyleEffects;
- (void)dealloc;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (double)elasticWidth;
- (void)finalize;
- (void)getMaximumAscender:(double*)arg1 minimumDescender:(double*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageBounds;
- (id)initWithTextStorage:(id)arg1 runs:(struct __CFArray { }*)arg2 glyphOrigin:(double)arg3 lineFragmentWidth:(double)arg4 elasticWidth:(double)arg5 usesScreenFonts:(bool)arg6 isRTL:(bool)arg7 applicationFrameworkContext:(long long)arg8;
- (bool)isRTL;
- (double)lineFragmentWidth;
- (oneway void)release;
- (long long)resolvedBaseWritingDirection;
- (long long)resolvedTextAlignment;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (void)setCuiCatalog:(id)arg1;
- (void)setCuiStyleEffects:(id)arg1;
- (void)setResolvedBaseWritingDirection:(long long)arg1;
- (void)setResolvedTextAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeWithBehavior:(long long)arg1 usesFontLeading:(bool)arg2 baselineDelta:(double*)arg3;

@end
