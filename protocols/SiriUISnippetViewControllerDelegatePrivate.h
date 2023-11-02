
@protocol SiriUISnippetViewControllerDelegatePrivate <NSObject>

@required

- (void)cancelSpeakingForSiriViewController:(id <SiriSharedUIViewControlling>)arg1;
- (NSLocale *)localeForSiriViewController:(id <SiriSharedUIViewControlling>)arg1;
- (void)removeSiriViewController:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 didRequestKeyboardWithVisibility:(bool)arg2;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)siriViewController:(void *)arg1 speakText:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: <SiriSharedUIViewControlling> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)siriViewController:(id <SiriSharedUIViewControlling>)arg1 startCorrectedSpeechRequestWithText:(NSString *)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(AFUserUtteranceSelectionResults *)arg4;
- (void)siriViewControllerDidEndEditing:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriViewControllerRequestTearDownEditingViewController:(id <SiriSharedUIViewControlling>)arg1;
- (bool)siriViewControllerShouldPreventUserInteraction:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriViewControllerWillBeginEditing:(id <SiriSharedUIViewControlling>)arg1;

@end
