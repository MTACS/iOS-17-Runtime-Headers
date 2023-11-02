
@interface WFWorkflowGlyphIcon : WFIcon {
    WFIconBackground * _background;
    unsigned short  _glyph;
}

@property (nonatomic, readonly) WFIconBackground *background;
@property (nonatomic, readonly) unsigned short glyph;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)background;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)glyph;
- (bool)hasClearBackground;
- (bool)hasTransparentBackground;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGlyph:(unsigned short)arg1 background:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
