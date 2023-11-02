
@protocol SGSuggestionDelegate <SGSuggestionViewControllerPresenter>

@required

- (void)suggestion:(id <SGSuggestion>)arg1 actionFinished:(bool)arg2;
- (void)suggestionWasUpdated:(id <SGSuggestion>)arg1;
- (long long)suggestionsUIContext;

@optional

- (void)bannerDismissAction;
- (void)bannerPrimaryAction;
- (void)dismissICSPreviewController:(id)arg1;
- (EKICSPreviewController *)icsPreviewControllerForData:(NSData *)arg1 andEventStore:(EKEventStore *)arg2;
- (void)suggestionBatchDismissal;
- (UIViewController *)tableViewController;

@end
