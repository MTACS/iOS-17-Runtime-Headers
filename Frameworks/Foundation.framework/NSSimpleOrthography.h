
@interface NSSimpleOrthography : NSOrthography {
    unsigned int  _orthographyFlags;
}

+ (void)initialize;
+ (id)orthographyWithFlags:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (id)allLanguages;
- (id)allScripts;
- (Class)classForCoder;
- (id)dominantLanguage;
- (id)dominantLanguageForScript:(id)arg1;
- (id)dominantScript;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (id)initWithFlags:(unsigned int)arg1;
- (id)languageMap;
- (id)languagesForScript:(id)arg1;
- (unsigned int)orthographyFlags;

@end
