
@protocol SearchUIKeyboardableNavigationProtocol <NSObject>

@required

- (bool)canSetupKeyboardHandler;
- (SFCardSection *)keyboardCardSectionForFocus;
- (SFSearchResult *)keyboardResultForFocus;
- (bool)navigateKeyboardDown;
- (bool)navigateKeyboardLeft;
- (bool)navigateKeyboardRight;
- (bool)navigateKeyboardUp;
- (void)removeKeyboardHandler;
- (void)returnKeyPressed;
- (void)setupKeyboardHandler;
- (void)tabKeyPressed;

@end
