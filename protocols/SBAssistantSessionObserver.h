
@protocol SBAssistantSessionObserver <NSObject>

@required

- (void)assistantSession:(SBAssistantSession *)arg1 viewDidAppearInWindowScene:(SBWindowScene *)arg2;
- (void)assistantSession:(SBAssistantSession *)arg1 viewDidDisappearInWindowScene:(SBWindowScene *)arg2;
- (void)assistantSession:(SBAssistantSession *)arg1 viewWillAppearInWindowScene:(SBWindowScene *)arg2;
- (void)assistantSession:(SBAssistantSession *)arg1 viewWillDisappearInWindowScene:(SBWindowScene *)arg2;

@end
