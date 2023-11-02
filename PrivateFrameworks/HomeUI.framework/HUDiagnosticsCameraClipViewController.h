
@interface HUDiagnosticsCameraClipViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    HMCameraClip * _cameraClip;
    HMCameraProfile * _cameraProfile;
    UITableView * _eventTableView;
}

@property (nonatomic, retain) HMCameraClip *cameraClip;
@property (nonatomic, retain) HMCameraProfile *cameraProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITableView *eventTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cameraClip;
- (id)cameraProfile;
- (id)eventTableView;
- (id)initWithRecordingEvent:(id)arg1 cameraProfile:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCameraClip:(id)arg1;
- (void)setCameraProfile:(id)arg1;
- (void)setEventTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
