
@protocol SUUIComposeReviewDelegate <UINavigationControllerDelegate>

@optional

- (void)composeReviewViewController:(SUUIComposeReviewViewController *)arg1 didFailWithDialog:(ISDialog *)arg2;
- (void)composeReviewViewController:(SUUIComposeReviewViewController *)arg1 didSubmitWithEdit:(bool)arg2;
- (void)composeReviewViewController:(SUUIComposeReviewViewController *)arg1 presentDialog:(ISDialog *)arg2;
- (bool)composeReviewViewController:(SUUIComposeReviewViewController *)arg1 shouldSubmitReview:(SUUIReviewMetadata *)arg2;
- (void)composeReviewViewControllerDidCancel:(SUUIComposeReviewViewController *)arg1;
- (void)composeReviewViewControllerDidSubmit:(SUUIComposeReviewViewController *)arg1;

@end
