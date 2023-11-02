
@interface AXRDeviceActionsViewController : UITableViewController {
    AXRemoteDevice * _activeDevice;
    <AXRDeviceActionsViewControllerDelegate> * _delegate;
}

@property (nonatomic, retain) AXRemoteDevice *activeDevice;
@property (nonatomic) <AXRDeviceActionsViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_actionForIndexPath:(id)arg1;
- (bool)_canShowWhileLocked;
- (bool)_deviceSupportsHandGestures;
- (id)_footerForSection:(long long)arg1;
- (long long)_handGestureEventUsageForIndexPath:(id)arg1;
- (void)_handleIndexPathSelection:(id)arg1;
- (id)_imageForListItemAtIndexPath:(id)arg1;
- (bool)_indexPathSectionIsForHandGestures:(long long)arg1;
- (id)_leadingImageViewForListItemAtIndexPath:(id)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (long long)_numberOfSections;
- (id)_subtitleForListItemAtIndexPath:(id)arg1;
- (id)_supportedHandGestures;
- (id)_titleForListItemAtIndexPath:(id)arg1;
- (id)_titleForSection:(long long)arg1;
- (bool)accessibilityPerformEscape;
- (id)activeDevice;
- (id)delegate;
- (id)initWithRemoteDevice:(id)arg1 delegate:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setActiveDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
