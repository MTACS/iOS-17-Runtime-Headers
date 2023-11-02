
@interface CHSInlineTextParameters : NSObject <BSXPCSecureCoding, NSCopying> {
    bool  _allowsNonSystemForegroundColors;
    NSString * _dateFormat;
    CHSFontSpecification * _fontSpecification;
    bool  _forceUppercase;
    BSColor * _foregroundColor;
    unsigned long long  _graphicAlignment;
    struct CGSize { 
        double width; 
        double height; 
    }  _graphicMaxSize;
    unsigned long long  _horizontalAlignment;
    bool  _ignoresRTL;
    bool  _showsDateAlongsideText;
    unsigned long long  _symbolScale;
}

@property (nonatomic) bool allowsNonSystemForegroundColors;
@property (nonatomic, copy) NSString *dateFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) CHSFontSpecification *fontSpecification;
@property (nonatomic) bool forceUppercase;
@property (nonatomic, copy) BSColor *foregroundColor;
@property (nonatomic) unsigned long long graphicAlignment;
@property (nonatomic) struct CGSize { double x1; double x2; } graphicMaxSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long horizontalAlignment;
@property (nonatomic) bool ignoresRTL;
@property (nonatomic) bool showsDateAlongsideText;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long symbolScale;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_effectiveDateFormat;
- (id)_initWithInlineTextProperties:(id)arg1;
- (bool)allowsNonSystemForegroundColors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateFormat;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)fontSpecification;
- (bool)forceUppercase;
- (id)foregroundColor;
- (unsigned long long)graphicAlignment;
- (struct CGSize { double x1; double x2; })graphicMaxSize;
- (unsigned long long)hash;
- (unsigned long long)horizontalAlignment;
- (bool)ignoresRTL;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAllowsNonSystemForegroundColors:(bool)arg1;
- (void)setDateFormat:(id)arg1;
- (void)setFontSpecification:(id)arg1;
- (void)setForceUppercase:(bool)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setGraphicAlignment:(unsigned long long)arg1;
- (void)setGraphicMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHorizontalAlignment:(unsigned long long)arg1;
- (void)setIgnoresRTL:(bool)arg1;
- (void)setShowsDateAlongsideText:(bool)arg1;
- (void)setSymbolScale:(unsigned long long)arg1;
- (bool)showsDateAlongsideText;
- (unsigned long long)symbolScale;

@end
