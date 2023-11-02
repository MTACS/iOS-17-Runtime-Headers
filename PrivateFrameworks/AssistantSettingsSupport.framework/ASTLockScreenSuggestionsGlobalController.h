
@interface ASTLockScreenSuggestionsGlobalController : NSObject {
    id /* block */  _onChangeCallback;
    PSSpecifier * _specifier;
}

- (void).cxx_destruct;
- (id)initWithOnChangeCallback:(id /* block */)arg1;
- (id)isLockScreenSuggestionEnabled:(id)arg1;
- (void)setLockScreenSuggestionsEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)specifier;

@end
