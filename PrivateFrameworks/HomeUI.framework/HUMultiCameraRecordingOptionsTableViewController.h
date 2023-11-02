
@interface HUMultiCameraRecordingOptionsTableViewController : HUCameraRecordingOptionsTableViewController {
    NSMutableArray * _cameraSettingsModuleControllers;
    HMHome * _home;
    HUMultiCameraRecordingOptionsItemManager * _recordingOptionsItemManager;
}

@property (nonatomic, retain) NSMutableArray *cameraSettingsModuleControllers;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HUMultiCameraRecordingOptionsItemManager *recordingOptionsItemManager;

- (void).cxx_destruct;
- (id)cameraSettingsModuleControllers;
- (void)dismissTextViewController;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)itemModuleControllers;
- (id)recordingOptionsItemManager;
- (void)setCameraSettingsModuleControllers:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setRecordingOptionsItemManager:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
