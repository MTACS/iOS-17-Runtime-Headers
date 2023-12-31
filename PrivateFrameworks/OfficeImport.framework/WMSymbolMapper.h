
@interface WMSymbolMapper : CMMapper {
    unsigned short  mCharacter;
    NSString * mFontName;
}

+ (bool)isSymbolFontName:(id)arg1;
+ (unsigned short)mapCharacter:(unsigned short)arg1 withFontName:(id)arg2;
+ (unsigned short)mapWindingsCharacter:(unsigned short)arg1;
+ (unsigned short)mapZapfDingbatsCharacter:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)initWithWDSymbol:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
