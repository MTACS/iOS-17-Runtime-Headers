
@protocol CAMCameraReviewViewController <NSObject>

@required

- (id)initWithAssets:(NSArray *)arg1;
- (<CAMCameraReviewDelegate> *)reviewDelegate;
- (void)setReviewDelegate:(id <CAMCameraReviewDelegate>)arg1;

@end
