
@interface HUDiagnosticsCameraClipSignificantEventsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    HMCameraClip * _cameraClip;
    UITableView * _eventTableView;
}

@property (nonatomic, retain) HMCameraClip *cameraClip;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITableView *eventTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cameraClip;
- (id)eventTableView;
- (id)initWithCameraClip:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCameraClip:(id)arg1;
- (void)setEventTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
