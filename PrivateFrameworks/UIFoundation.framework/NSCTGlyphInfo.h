
@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)_baseString;
- (unsigned long long)_cfTypeID;
- (unsigned int)_glyph;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (bool)allowsWeakReference;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)glyphName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;

@end
