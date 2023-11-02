
@interface OADFontCollection : OADBaseFontCollection {
    NSMutableDictionary * _scriptToFontMap;
}

- (void).cxx_destruct;
- (id)description;
- (id)fontForScript:(id)arg1;
- (id)init;
- (bool)isEmpty;
- (bool)isEqualToFontCollection:(id)arg1;
- (id)scripts;
- (void)setFont:(id)arg1 forScript:(id)arg2;

@end
