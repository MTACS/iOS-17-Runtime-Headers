
@protocol SKUIComposeReviewNicknameDelegate <NSObject>

@optional

- (void)composeReviewNicknameDidCancel:(SKUIComposeReviewNicknameViewController *)arg1;
- (void)composeReviewNicknameDidConfirm:(SKUIComposeReviewNicknameViewController *)arg1 nickname:(NSString *)arg2;

@end
