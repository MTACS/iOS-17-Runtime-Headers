
@protocol SUUIComposeReviewNicknameDelegate <NSObject>

@optional

- (void)composeReviewNicknameDidCancel:(SUUIComposeReviewNicknameViewController *)arg1;
- (void)composeReviewNicknameDidConfirm:(SUUIComposeReviewNicknameViewController *)arg1 nickname:(NSString *)arg2;

@end
