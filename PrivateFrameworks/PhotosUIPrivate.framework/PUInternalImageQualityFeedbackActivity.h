
@interface PUInternalImageQualityFeedbackActivity : PXActivity <PXFeedbackImageQualityUIViewControllerDelegate> {
    PXFeedbackImageQualityUIViewController * _feedbackController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (id)assets;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)feedbackImageQualityUIViewController:(id)arg1 didFinish:(bool)arg2;

@end
