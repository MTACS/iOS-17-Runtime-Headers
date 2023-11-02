
@interface AVCaptureDeviceRotationCoordinator : NSObject <AVCaptureRotationHelperLayerDelegate> {
    FBSOrientationObserver * _activeInterfaceOrientationObserver;
    AVWeakReference * _coordinatorWeakReference;
    int  _deviceOrientationNotificationToken;
    long long  _devicePosition;
    AVWeakReference * _deviceWeakReference;
    bool  _isInitialVideoRotationAngleForHorizonLevelCaptureSet;
    bool  _isInitialVideoRotationAngleForHorizonLevelPreviewSet;
    bool  _monitorDeviceOrientation;
    bool  _monitorSystemReferenceAngle;
    unsigned long long  _previewLayerSystemReferenceAngleMode;
    AVWeakReference * _previewLayerWeakReference;
    AVCaptureRotationHelperLayer * _rotationHelperLayer;
    double  _videoRotationAngleForHorizonLevelCapture;
    double  _videoRotationAngleForHorizonLevelPreview;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVCaptureDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALayer *previewLayer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double videoRotationAngleForHorizonLevelCapture;
@property (nonatomic, readonly) double videoRotationAngleForHorizonLevelPreview;

+ (void)initialize;

- (void)_calculateVideoRotationAngleForHorizonLevelCaptureWithDeviceOrientation:(long long)arg1;
- (void)_calculateVideoRotationAngleForHorizonLevelPreviewWithSystemReferenceAngle:(double)arg1;
- (long long)_currentDeviceOrientation;
- (void)_handleActiveInterfaceOrientationUpdate:(id)arg1;
- (void)_handleSystemReferenceAngleDidChangeNotification:(id)arg1;
- (bool)_isExternalDeviceType:(id)arg1;
- (double)_systemReferenceAngleForDeviceOrientation:(long long)arg1;
- (void)_updateVideoRotationAngleForHorizonLevelCapture;
- (void)_updateVideoRotationAngleForHorizonLevelPreview;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)device;
- (void)handleVideoPreviewLayerDidBecomeVisibleNotification:(id)arg1;
- (id)initWithDevice:(id)arg1 previewLayer:(id)arg2;
- (void)layer:(id)arg1 didBecomeVisible:(bool)arg2;
- (id)previewLayer;
- (double)videoRotationAngleForHorizonLevelCapture;
- (double)videoRotationAngleForHorizonLevelPreview;

@end
