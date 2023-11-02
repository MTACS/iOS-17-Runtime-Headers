
@interface OBPrivacyModalNavigationController : OBNavigationController {
    bool  _darkMode;
    id /* block */  _dismissButtonPressedHandler;
}

@property (getter=isDarkMode, nonatomic) bool darkMode;
@property (copy) id /* block */ dismissButtonPressedHandler;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_doneButtonPressed;
- (void)addDismissButtonWithPressedHandler:(id /* block */)arg1;
- (id /* block */)dismissButtonPressedHandler;
- (bool)isDarkMode;
- (long long)preferredUserInterfaceStyle;
- (void)setDarkMode:(bool)arg1;
- (void)setDismissButtonPressedHandler:(id /* block */)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
