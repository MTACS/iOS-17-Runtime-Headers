
@interface HUCameraRecordingFeedbackActivity : UIActivity {
    HMCameraClip * _cameraClip;
    HMCameraProfile * _cameraProfile;
    UINavigationController * _previewNavigationController;
    id /* block */  _submissionHandler;
}

@property (nonatomic, retain) HMCameraClip *cameraClip;
@property (nonatomic, retain) HMCameraProfile *cameraProfile;
@property (nonatomic, retain) UINavigationController *previewNavigationController;
@property (nonatomic, copy) id /* block */ submissionHandler;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (id)cameraClip;
- (id)cameraProfile;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)prepareWithActivityItems:(id)arg1;
- (id)previewNavigationController;
- (void)setCameraClip:(id)arg1;
- (void)setCameraProfile:(id)arg1;
- (void)setPreviewNavigationController:(id)arg1;
- (void)setSubmissionHandler:(id /* block */)arg1;
- (id /* block */)submissionHandler;

@end
