
@interface NSGlyphGenerator : NSObject

+ (id)defaultGlyphGenerator;
+ (void)initialize;
+ (id)sharedGlyphGenerator;

- (void)generateGlyphsForGlyphStorage:(id)arg1 desiredNumberOfCharacters:(unsigned long long)arg2 glyphIndex:(unsigned long long*)arg3 characterIndex:(unsigned long long*)arg4;

@end
