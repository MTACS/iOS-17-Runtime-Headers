
@interface WBSReaderFontManager : NSObject {
    NSString * _languageTag;
    NSArray * _validatedFonts;
}

@property (readonly) NSArray *fonts;
@property (readonly, copy) NSString *languageTag;
@property (readonly) NSArray *possibleFonts;

- (void).cxx_destruct;
- (void)_fontDownloadDidFinish:(id)arg1;
- (id)defaultFontForLanguageTag:(id)arg1;
- (id)fontWithFontFamilyName:(id)arg1;
- (id)fonts;
- (id)init;
- (id)languageTag;
- (id)possibleFonts;
- (void)updateLanguageTag:(id)arg1;

@end
