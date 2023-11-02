
@interface ASTLockScreenSuggestionsDetailListController : PSListController {
    ASTLockScreenSuggestionsGlobalController * _globalController;
    PSSpecifier * _globalSpecifier;
    ASTLockScreenSuggestionSpecifier * _lockScreenSpecifier;
    PSSpecifier * _perAppGroup;
    NSArray * _perAppSpecifiers;
}

- (void).cxx_destruct;
- (void)_handleGlobalToggleChangeWithEnabled:(bool)arg1;
- (id)init;
- (id)specifiers;

@end
