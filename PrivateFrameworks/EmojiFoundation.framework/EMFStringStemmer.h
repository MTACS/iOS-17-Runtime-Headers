
@interface EMFStringStemmer : NSObject {
    unsigned long long  _encoding;
    NSLocale * _locale;
    struct sb_stemmer { } * _stemmer;
    NSLock * _stemmerLock;
}

@property (nonatomic) unsigned long long encoding;
@property (nonatomic, readonly, retain) NSLocale *locale;

+ (struct sb_stemmer { }*)_createSnowballStemmerForLocale:(id)arg1;
+ (id)stemmerLanguageNameForLocale:(id)arg1;
+ (id)supportedLanguageNames;
+ (unsigned char)supportsLocale:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)encoding;
- (id)initWithLocale:(id)arg1;
- (id)locale;
- (void)setEncoding:(unsigned long long)arg1;
- (id)stemToken:(id)arg1;
- (id)stemTokens:(id)arg1;

@end
