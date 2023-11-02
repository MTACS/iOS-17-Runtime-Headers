
@interface MRUMirroringViewController : CCUIMenuModuleViewController <MRUMirroringControllerDelegate> {
    MRUMirroringController * _controller;
    FBSDisplayMonitor * _displayMonitor;
    bool  _showMoreExpanded;
}

@property (nonatomic, retain) MRUMirroringController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBSDisplayMonitor *displayMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showMoreExpanded;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)controller;
- (id)displayMonitor;
- (bool)isConnectedToExternalDisplay;
- (id)leadingImageForMenuItem:(id)arg1;
- (void)mirroringController:(id)arg1 didChangeAvailableOutputDevices:(id)arg2;
- (void)mirroringController:(id)arg1 didChangeOutputDevice:(id)arg2;
- (void)mirroringController:(id)arg1 didUpdateBusyIdenifiers:(id)arg2;
- (void)selectOutputDevice:(id)arg1;
- (void)setController:(id)arg1;
- (void)setDisplayMonitor:(id)arg1;
- (void)setShowMoreExpanded:(bool)arg1;
- (bool)shouldBeginTransitionToExpandedContentModule;
- (bool)shouldExpandModuleOnTouch:(id)arg1;
- (bool)showMoreExpanded;
- (void)stopMirroringDismissOnComplete:(bool)arg1;
- (void)updateFooter;
- (void)updateItems;
- (void)updateState;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willTransitionToExpandedContentMode:(bool)arg1;

@end
