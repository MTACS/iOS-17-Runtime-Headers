
@interface AXSSMotionTrackingCameraManager : NSObject {
    NSMutableArray * __allCaptureDevices;
    AVCaptureDeviceDiscoverySession * __captureDeviceDiscoverySession;
    NSMutableArray * __compatibleCaptureDevices;
    bool  __monitoring;
    <AXSSMotionTrackingCameraManagerDelegate> * _delegate;
}

@property (nonatomic, retain) NSMutableArray *_allCaptureDevices;
@property (nonatomic, retain) AVCaptureDeviceDiscoverySession *_captureDeviceDiscoverySession;
@property (nonatomic, retain) NSMutableArray *_compatibleCaptureDevices;
@property (nonatomic) bool _monitoring;
@property (nonatomic, readonly, copy) NSArray *allCaptureDevices;
@property (nonatomic, readonly, copy) NSArray *compatibleCaptureDevices;
@property (nonatomic, readonly) AVCaptureDevice *defaultCaptureDevice;
@property (nonatomic) <AXSSMotionTrackingCameraManagerDelegate> *delegate;

+ (id)_sortedCaptureDevicesFromDevices:(id)arg1;

- (void).cxx_destruct;
- (id)_allCaptureDevices;
- (void)_allCaptureDevicesChanged:(id)arg1;
- (void)_captureDeviceConnected:(id)arg1;
- (void)_captureDeviceDisconnected:(id)arg1;
- (id)_captureDeviceDiscoverySession;
- (void)_captureDeviceUpdated;
- (id)_compatibleCaptureDevices;
- (bool)_monitoring;
- (void)_resetDiscoverySession;
- (void)_startDiscoverySession;
- (void)_stopDiscoverySession;
- (id)allCaptureDevices;
- (id)compatibleCaptureDevices;
- (void)dealloc;
- (id)defaultCaptureDevice;
- (id)delegate;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)set_allCaptureDevices:(id)arg1;
- (void)set_captureDeviceDiscoverySession:(id)arg1;
- (void)set_compatibleCaptureDevices:(id)arg1;
- (void)set_monitoring:(bool)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
