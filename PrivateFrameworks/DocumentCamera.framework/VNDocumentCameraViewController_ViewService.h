
@interface VNDocumentCameraViewController_ViewService : VNDocumentCameraViewController <BKSAccelerometerDelegate, DCDocumentCameraPublicViewController> {
    BKSAccelerometer * _accelerometer;
    DCDocumentCameraViewServiceSession * _viewServiceSession;
}

@property (nonatomic, retain) BKSAccelerometer *accelerometer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=remoteViewController, nonatomic, readonly) DCDocumentCameraRemoteViewController *remoteViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) DCDocumentCameraViewServiceSession *viewServiceSession;
@property (getter=viewServiceViewController, nonatomic, readonly) <DCDocumentCameraViewServiceViewController> *viewServiceViewController;

- (void).cxx_destruct;
- (id)accelerometer;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;
- (id)castedChildViewController;
- (void)dealloc;
- (void)didCancel;
- (void)didFailWithError:(id)arg1;
- (void)didFinishWithDocumentInfoCollection:(id)arg1;
- (void)dismiss;
- (id)init;
- (id)remoteViewController;
- (void)removeSaveActionBlockerForFiles;
- (void)setAccelerometer:(id)arg1;
- (void)setViewServiceSession:(id)arg1;
- (void)viewDidLoad;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (id)viewServiceSession;
- (id)viewServiceViewController;

@end
