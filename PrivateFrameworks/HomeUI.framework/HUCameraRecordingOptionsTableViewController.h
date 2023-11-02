
@interface HUCameraRecordingOptionsTableViewController : HUItemTableViewController <UITextViewDelegate> {
    HUCameraSettingsModuleController * _cameraSettingsModuleController;
    HUCameraRecordingOptionsItemManager * _detailsItemManager;
    unsigned long long  _displayStyle;
}

@property (nonatomic, retain) HUCameraSettingsModuleController *cameraSettingsModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) HUCameraRecordingOptionsItemManager *detailsItemManager;
@property (nonatomic) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cameraSettingsModuleController;
- (id)detailsItemManager;
- (void)dismissTextViewController;
- (unsigned long long)displayStyle;
- (id)initWithServiceLikeItem:(id)arg1;
- (id)itemModuleControllers;
- (void)setCameraSettingsModuleController:(id)arg1;
- (void)setDetailsItemManager:(id)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
