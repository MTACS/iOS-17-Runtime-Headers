
@protocol SKUIClientComposeReviewViewController <NSObject>

@required

- (void)didFinishWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)didPrepareWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)promptForStarRating;

@end
