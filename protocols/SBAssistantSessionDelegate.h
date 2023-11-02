
@protocol SBAssistantSessionDelegate <SBAssistantSessionObserver>

@required

- (void)assistantSession:(void *)arg1 requestsDismissalWithAnimation:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: SBAssistantSession *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)assistantSession:(SBAssistantSession *)arg1 requestsDismissalWithDismissalOptions:(SiriDismissalOptions *)arg2;

@end
