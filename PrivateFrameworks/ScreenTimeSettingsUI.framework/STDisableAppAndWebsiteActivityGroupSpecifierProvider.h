
@interface STDisableAppAndWebsiteActivityGroupSpecifierProvider : STRootGroupSpecifierProvider {
    PSSpecifier * _disableAppAndWebsiteActivitySpecifier;
}

@property (nonatomic, retain) PSSpecifier *disableAppAndWebsiteActivitySpecifier;

- (void).cxx_destruct;
- (void)confirmDisableAppAndWebsiteActivity:(id)arg1;
- (void)disableAppAndWebsiteActivity:(id)arg1;
- (id)disableAppAndWebsiteActivityConfirmationPrompt;
- (id)disableAppAndWebsiteActivitySpecifier;
- (id)init;
- (bool)isHidden;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)passcodeGatedDeleteButtonSpecifierWithName:(id)arg1 action:(SEL)arg2;
- (void)setCoordinator:(id)arg1;
- (void)setDisableAppAndWebsiteActivitySpecifier:(id)arg1;
- (void)updateDisableAppAndWebsiteActivitySpecifier;

@end
