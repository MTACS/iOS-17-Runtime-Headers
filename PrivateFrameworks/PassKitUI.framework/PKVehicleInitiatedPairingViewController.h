
@interface PKVehicleInitiatedPairingViewController : PRXCardContentViewController <PKLinkedApplicationObserver> {
    UIImageView * _artworkView;
    UILabel * _bodyLabel;
    NSURL * _launchURL;
    NSArray * _layoutConstraints;
    PKLinkedApplication * _linkedApplication;
    PRXAction * _placeholderAction;
    unsigned long long  _referralSource;
    PRXLabel * _subtitleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)vehicleInitiatedPairingViewControllerForConfiguration:(id)arg1 paymentService:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_configureLinkedApplicationForTerminal:(id)arg1;
- (void)_handleEnterCode;
- (void)_handleOpenApp;
- (void)_updateViewState;
- (id)initWithSupportedTerminal:(id)arg1 launchURL:(id)arg2 referralSource:(unsigned long long)arg3;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (void)loadView;
- (void)updateViewConstraints;

@end
