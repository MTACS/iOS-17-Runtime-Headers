
@interface ICRemoteDocCamViewController : UIViewController {
    <ICRemoteDocCamViewControllerDelegate> * _delegate;
    ICDocCamImageCache * _imageCache;
    SidecarRequest * _sidecarRequest;
    SidecarService * _sidecarService;
}

@property (nonatomic) <ICRemoteDocCamViewControllerDelegate> *delegate;
@property (nonatomic, retain) ICDocCamImageCache *imageCache;
@property (nonatomic, retain) SidecarRequest *sidecarRequest;
@property (nonatomic, retain) SidecarService *sidecarService;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)cancelSidecarRequest;
- (id)delegate;
- (id)imageCache;
- (id)initWithImageCache:(id)arg1;
- (id)makeAlertControllerForError:(id)arg1;
- (id)makeDevicesAlertController;
- (id)makeNoDevicesAlertController;
- (id)makeProgressAlertControllerForDevice:(id)arg1;
- (void)makeSidecarRequestToDevice:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progressAlertMessageForDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setSidecarRequest:(id)arg1;
- (void)setSidecarService:(id)arg1;
- (id)sidecarRequest;
- (void)sidecarRequestDidFinish;
- (id)sidecarService;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
