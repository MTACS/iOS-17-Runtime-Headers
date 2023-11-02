
@interface RoomPlan.RoomCaptureView : UIView {
    void $__lazy_storage_$_frameProcessor;
    void $__lazy_storage_$_settingsManager;
    void arCameraParameters;
    void arCameraQueue;
    void captureSession;
    void coachingOverlayView;
    void completeTransitionTime;
    void currentARFrame;
    void delegate;
    void deltaTimeArray;
    void gradientLayer;
    void isEncoding;
    void isEndingCaptureSession;
    void isModelEnabled;
    void logPerimeterDirectoryPath;
    void roomBuilder;
    void roomCaptureARView;
    void roomCaptureARViewCamera;
    void roomCaptureSessionObserver;
    void sceneObserver;
    void sceneShaderRenderer;
    void viewOrientation;
    void viewportSize;
    void voiceOverManager;
    void worldSpaceManager;
}

@property (nonatomic, retain) id ibDelegate;
@property (nonatomic, readonly) NSArray *subviews;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)ibDelegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setIbDelegate:(id)arg1;
- (id)subviews;
- (void)traitCollectionDidChange:(id)arg1;

@end
