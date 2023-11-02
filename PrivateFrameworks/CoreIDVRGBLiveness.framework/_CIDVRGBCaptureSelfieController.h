
@interface _CIDVRGBCaptureSelfieController : NSObject <CIDVRGBAVSessionManagerDelegate, CIDVRGBCaptureSelfieController> {
    unsigned long long  _analyticStitchFramesToIgnore;
    long long  _analyticsState;
    <PADAuditDataRepository> * _audit;
    <CIDVRGBAVSessionManager> * _avSession;
    NSMutableArray * _buttonPressTimestamps;
    bool  _canceling;
    <PADClassifier> * _classifier;
    CIDVRGBCaptureUIConfig * _config;
    bool  _isWaitingToFinish;
    <CIDVRGBImageQualityAnalyzer> * _lightweightQuality;
    NSTimer * _livenessTimer;
    NSMutableArray * _luxValues;
    CIDVRGBCameraPreview * _preview;
    <PADFrameQualityMonitor> * _quality;
    NSObject<OS_dispatch_queue> * _queue;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
    PADFrame * _selfie;
    double  _selfieStart;
    unsigned long long  _sequence;
    long long  _state;
    unsigned long long  _stitchFramesToIgnore;
    long long  _taOptions;
    NSURL * _videoURL;
    id /* block */  completionHandler;
    <CIDVRGBCaptureSelfieControllerDelegate> * delegate;
    struct PADClassifierFrameOptions { 
        bool runTA; 
        bool runFAC; 
        bool runPRD; 
    }  frameOptions;
}

@property (nonatomic) long long analyticsState;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) <CIDVRGBCaptureSelfieControllerDelegate> *delegate;
@property (nonatomic) struct PADClassifierFrameOptions { bool x1; bool x2; bool x3; } frameOptions;
@property (nonatomic, retain) CIDVRGBCameraPreview *preview;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)_compressSelfie:(id)arg1 skipCompression:(bool)arg2;
- (void)_finishLiveness;
- (void)_invalidateLivenessTimer;
- (void)_performDebugAnalysisForFrame:(id)arg1;
- (void)_performImageQualityAnalysisForFrame:(id)arg1 ofType:(long long)arg2;
- (void)_performImageQualityAnalysisForFrame:(id)arg1 ofType:(long long)arg2 withOptions:(id)arg3;
- (void)_performLivenessAnalysisForFrame:(id)arg1;
- (void)_performVideoQualityAnalysisForFrame:(id)arg1 ofType:(long long)arg2;
- (void)_recordLuxLevel;
- (id)_reorientImage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_reorientRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContainerOfSize:(struct CGSize { double x1; double x2; })arg2 fromOrientation:(unsigned int)arg3;
- (void)_reorientSelfieFrame:(id)arg1;
- (id)_selfieBufferToImage:(id)arg1;
- (bool)_shouldPresentErrorAlertForError:(id)arg1;
- (void)_startLiveness;
- (void)_startLivenessTimer;
- (void)_stopRecordingLivenessVideo;
- (void)_updateRegionOfInterestForFrame:(id)arg1;
- (bool)_videoIsRequired;
- (id)_viewController;
- (long long)analyticsState;
- (void)beginIgnoreStitchCounter;
- (void)beginNewGesture;
- (void)bootstrap;
- (void)cancelWithCompletion:(id /* block */)arg1;
- (void)cancelWithError:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)captureSelfieUsingFlashMode:(long long)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)delegate;
- (void)didCaptureFrame:(id)arg1;
- (void)didCapturePhoto:(id)arg1 error:(id)arg2;
- (void)didCaptureVideoAtURL:(id)arg1 error:(id)arg2;
- (void)disableFrameOptions;
- (void)enableAccessibilityOptions;
- (void)enableFrameOptions;
- (void)fetchNewLivenessConfigWithCompletion:(id /* block */)arg1;
- (void)finishRecording;
- (struct PADClassifierFrameOptions { bool x1; bool x2; bool x3; })frameOptions;
- (void)gestureCompleted;
- (id)initWithConfig:(id)arg1;
- (bool)isLowDiskSpaceError:(id)arg1;
- (void)pauseLivenessGesture;
- (void)prepareToResumeLivenessGesture;
- (id)preview;
- (void)restartLiveness;
- (void)restartSelfieCapture;
- (void)resumeLivenessGesture;
- (void)setAnalyticsState:(long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrameOptions:(struct PADClassifierFrameOptions { bool x1; bool x2; bool x3; })arg1;
- (void)setPreview:(id)arg1;
- (void)setState:(long long)arg1;
- (void)skipLivenessGesture;
- (void)startLiveness;
- (long long)state;
- (void)submitSelfie;

@end
