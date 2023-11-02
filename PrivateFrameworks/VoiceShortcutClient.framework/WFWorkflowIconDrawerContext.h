
@interface WFWorkflowIconDrawerContext : NSObject {
    NSSet * _coreGlyphsCatalogs;
    struct CGFont { } * _glyphFont;
    struct __CTFont { } * _glyphTestFont;
}

@property (nonatomic, readonly) NSSet *coreGlyphsCatalogs;
@property (nonatomic, readonly) struct CGFont { }*glyphFont;
@property (nonatomic, readonly) struct __CTFont { }*glyphTestFont;

+ (id)cachedContextOrNewContext;
+ (double)glyphTestFontSize;

- (void).cxx_destruct;
- (id)coreGlyphsCatalogs;
- (void)dealloc;
- (struct CGFont { }*)glyphFont;
- (struct __CTFont { }*)glyphTestFont;
- (struct __CTFont { }*)newGlyphFontForSize:(double)arg1;

@end
