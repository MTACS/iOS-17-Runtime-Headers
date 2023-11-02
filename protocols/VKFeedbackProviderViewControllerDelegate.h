
@protocol VKFeedbackProviderViewControllerDelegate <NSObject>

@required

- (void)feedbackProviderViewController:(VKFeedbackProviderViewController *)arg1 submitWithOptions:(unsigned long long)arg2 attachments:(NSArray *)arg3;
- (void)feedbackProviderViewControllerDidCancel:(VKFeedbackProviderViewController *)arg1;

@end
