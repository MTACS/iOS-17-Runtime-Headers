
@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo <NSSecureCoding> {
    NSString * _name;
}

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)glyphName;
- (id)initWithCoder:(id)arg1;
- (id)initWithGlyphName:(id)arg1 glyph:(unsigned int)arg2 forFont:(id)arg3 baseString:(id)arg4;

@end
