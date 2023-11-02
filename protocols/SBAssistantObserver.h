
@protocol SBAssistantObserver <NSObject>

@optional

- (void)assistantDidAppear:(SBAssistantController *)arg1 windowScene:(SBWindowScene *)arg2;
- (void)assistantDidDisappear:(SBAssistantController *)arg1 windowScene:(SBWindowScene *)arg2;
- (void)assistantWillAppear:(SBAssistantController *)arg1 windowScene:(SBWindowScene *)arg2;
- (void)assistantWillDisappear:(SBAssistantController *)arg1 windowScene:(SBWindowScene *)arg2;

@end
