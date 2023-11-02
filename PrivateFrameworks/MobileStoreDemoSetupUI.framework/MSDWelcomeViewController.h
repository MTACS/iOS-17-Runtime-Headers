
@interface MSDWelcomeViewController : OBSetupAssistantSpinnerController <OBSetupAssistantSupport> {
    unsigned long long  _activeNetworkInterface;
    id /* block */  _completionHandler;
    MSDSetupUIController * _controller;
    NSString * _currentSSID;
}

@property (nonatomic) unsigned long long activeNetworkInterface;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) MSDSetupUIController *controller;
@property (nonatomic, retain) NSString *currentSSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)needsToRun:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)_bothWifiAndCellularActive;
- (void)_checkIn;
- (void)_showCheckInErrorAlert;
- (void)_showNetworkInterfaceSelectionAlert;
- (void)_showNextView;
- (unsigned long long)activeNetworkInterface;
- (id /* block */)completionHandler;
- (id)controller;
- (id)currentSSID;
- (id)init;
- (void)setActiveNetworkInterface:(unsigned long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setController:(id)arg1;
- (void)setCurrentSSID:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
