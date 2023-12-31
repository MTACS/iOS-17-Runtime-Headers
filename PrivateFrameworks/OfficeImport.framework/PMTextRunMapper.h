
@interface PMTextRunMapper : CMMapper {
    OADTextRun * mTextRun;
}

- (void).cxx_destruct;
- (bool)_isDefaultFill:(id)arg1;
- (void)addFontForLanguageType:(int)arg1 toCharacterStyle:(id)arg2;
- (id)copyCharacterStyleWithState:(id)arg1;
- (id)fontScheme;
- (id)initWithOadTextRun:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
