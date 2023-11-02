
@interface DeviceDiscoveryUI._DDDevicePickerViewController_iOS : UIViewController {
    void airDropClient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  browseDescriptor;
    void deviceBrowser;
    void endpointsSubject;
    void parameters;
}

- (void).cxx_destruct;
- (void)didEnterBackgroundWithNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willEnterForegroundWithNotification:(id)arg1;

@end
