
@protocol _MFMailCompositionContextDelegate

@required

- (void)mailCompositionContext:(_MFMailCompositionContext *)arg1 didFinishLoadingMessage:(EMMessage *)arg2 legacyMessage:(MFMailMessage *)arg3 error:(NSError *)arg4;
- (void)mailCompositionContext:(_MFMailCompositionContext *)arg1 messageDidChange:(EMMessage *)arg2;

@end
