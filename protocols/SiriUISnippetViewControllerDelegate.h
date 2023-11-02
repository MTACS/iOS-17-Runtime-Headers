
@protocol SiriUISnippetViewControllerDelegate <SiriUIAceObjectViewControllerDelegate>

@required

- (double)boundingWidthForSnippetViewController:(SiriUISnippetViewController *)arg1;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 didShowGuideStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 pushSirilandSnippets:(NSArray *)arg2;
- (void)siriSnippetViewController:(void *)arg1 requestPasscodeUnlockWithCompletion:(void *)arg2; // needs 2 arg types, found 7: SiriUISnippetViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 setStatusBarHidden:(bool)arg2 animated:(bool)arg3;
- (void)siriSnippetViewController:(void *)arg1 setStatusBarHidden:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <SiriSharedUIViewControlling> *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriSnippetViewController:(void *)arg1 shouldPresentPicker:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <SiriSharedUIViewControlling> *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)siriSnippetViewControllerIsVisible:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriSnippetViewControllerViewDidLoad:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id <SiriSharedUIViewControlling>)arg1;

@optional

- (unsigned long long)navigationIndexOfSnippetViewController:(SiriUISnippetViewController *)arg1;
- (unsigned long long)siriDeviceLockStateForSnippetViewController:(id <SiriSharedUIViewControlling>)arg1;
- (NSSet *)siriEnabledAppListForSiriViewController:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 handleStartLocalRequest:(SAStartLocalRequest *)arg2 turnIdentifier:(NSUUID *)arg3;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 performAceCommands:(NSArray *)arg2 sashItem:(SiriUISashItem *)arg3;
- (void)siriSnippetViewController:(id <SiriSharedUIViewControlling>)arg1 setTypeToSiriViewHidden:(bool)arg2;
- (void)siriSnippetViewControllerRequestsPinning:(SiriUISnippetViewController *)arg1;
- (void)userTouchedSnippet;

@end
