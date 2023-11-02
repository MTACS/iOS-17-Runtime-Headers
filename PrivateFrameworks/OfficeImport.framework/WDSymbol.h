
@interface WDSymbol : WDRunWithCharacterProperties {
    unsigned short  mCharacter;
    WDFont * mFont;
}

- (void).cxx_destruct;
- (unsigned short)character;
- (id)description;
- (id)font;
- (id)initWithParagraph:(id)arg1;
- (int)runType;
- (void)setCharacter:(unsigned short)arg1;
- (void)setFont:(id)arg1;

@end
