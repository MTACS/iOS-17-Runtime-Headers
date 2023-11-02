
@interface PUInternalAutoLoopFeedbackActivity : PXActivity <PXFeedbackAssetUIViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)activityCategory;

- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (id)asset;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)feedbackAssetUIViewController:(id)arg1 didFinish:(bool)arg2;

@end
