
@interface SwiftUI.UIKitSearchBarCoordinator : SwiftUI.PlatformViewCoordinator <UISearchBarDelegate, UITextFieldDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  configuration;
    void delegate;
    void isViewUpdating;
    void oldText;
    void oldTokens;
    void placement;
    void scopes;
    void searchBar;
    void tokenScopes;
    void triggerSubmission;
}

- (void).cxx_destruct;
- (id)init;
- (void)primaryActionTriggered:(id)arg1;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)textFieldDidChangeSelection:(id)arg1;

@end
