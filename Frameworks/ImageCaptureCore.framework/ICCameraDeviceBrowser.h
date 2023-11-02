
@interface ICCameraDeviceBrowser : NSObject {
    NSMutableArray * _browsers;
    NSMutableArray * _devices;
    MSCameraDeviceManager * _msDevManager;
    long long  _numberOfBrowsingBrowsers;
    PTPCameraDeviceManager * _ptpDevManager;
    PXCameraDeviceManager * _pxDevManager;
    NSMutableArray * _suspendedBrowsers;
    NSObject<OS_dispatch_source> * _suspensionTimer;
    NSObject<OS_dispatch_queue> * _suspensionTimerQueue;
}

@property (readonly) NSMutableArray *browsers;
@property (readonly) NSMutableArray *devices;

+ (id)defaultBrowser;
+ (bool)exists;

- (void)addBrowser:(id)arg1;
- (id)browsers;
- (void)dealloc;
- (id)deviceWithDelegate:(id)arg1;
- (id)devices;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (id)init;
- (void)notifySuspension:(unsigned long long)arg1;
- (void)removeBrowser:(id)arg1;
- (void)runSuspensionTimer:(bool)arg1;
- (void)start:(id)arg1;
- (bool)startMSCameraBrowser;
- (bool)startPTPCameraBrowser;
- (bool)startPXCameraBrowser;
- (void)stop:(id)arg1;

@end
