
@protocol ICHashtagViewControllerDelegate <NSObject>

@optional

- (void)hashtagViewController:(ICHashtagViewController *)arg1 insertFutureHashtagWithText:(NSString *)arg2;
- (void)hashtagViewController:(ICHashtagViewController *)arg1 insertHashtagWithText:(NSString *)arg2 viaAutoComplete:(bool)arg3;
- (void)hashtagViewController:(ICHashtagViewController *)arg1 insertUnknownInlineAttachmentWithText:(NSString *)arg2;

@end
