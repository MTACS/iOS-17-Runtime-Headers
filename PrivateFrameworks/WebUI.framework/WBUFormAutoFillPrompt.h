
@interface WBUFormAutoFillPrompt : NSObject {
    UIAlertController * _alertController;
}

+ (void)showAutoFillPromptInWebView:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 cancelWhenAppEntersBackground:(bool)arg6 makeFirstButtonSuggestedAction:(bool)arg7 headerViewController:(id)arg8 completionHandler:(id /* block */)arg9;
+ (void)showAutoFillPromptInWebView:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 makeFirstButtonSuggestedAction:(bool)arg6 completionHandler:(id /* block */)arg7;

- (void).cxx_destruct;
- (void)_alertTextFieldDidChange:(id)arg1;
- (void)showAutoFillPromptForUsernameInWebView:(id)arg1 title:(id)arg2 message:(id)arg3 suggestedUsername:(id)arg4 password:(id)arg5 isGeneratedPassword:(bool)arg6 completionHandler:(id /* block */)arg7;

@end
