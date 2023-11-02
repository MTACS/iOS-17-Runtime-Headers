
@interface PSInternationalLanguageSetupController : PSSetupController {
    PSLanguageSelector * _languageSelector;
}

@property (nonatomic, retain) PSLanguageSelector *languageSelector;

- (void).cxx_destruct;
- (void)commit;
- (id)languageSelector;
- (void)setLanguage:(id)arg1 specifier:(id)arg2;
- (void)setLanguageSelector:(id)arg1;
- (void)setupController;

@end
