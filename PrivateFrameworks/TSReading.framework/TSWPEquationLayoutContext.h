
@interface TSWPEquationLayoutContext : NSObject <EQKitLayoutContext> {
    double  _columnWidth;
    struct __CFString { } * _fontName;
    double  _fontSize;
}

@property (nonatomic) double columnWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct __CFString { }*)baseFontName;
- (double)baseFontSize;
- (double)columnWidth;
- (double)containerWidth;
- (void)dealloc;
- (double)fontSize;
- (id)initWithTextAttributes:(struct __CFDictionary { }*)arg1 columnWidth:(double)arg2;
- (bool)isEqual:(id)arg1;
- (void)setColumnWidth:(double)arg1;
- (void)setFontSize:(double)arg1;

@end
