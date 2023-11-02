
@interface SUSUISoftwareUpdateSlowRollController : SUSUISoftwareUpdateController {
    NSObject<SUSUISoftwareUpdateSlowRollControllerDelegate> * _delegate;
    unsigned long long  _slowRollUpdateType;
}

@property (nonatomic) NSObject<SUSUISoftwareUpdateSlowRollControllerDelegate> *delegate;
@property (nonatomic) unsigned long long slowRollUpdateType;

- (void).cxx_destruct;
- (id)_alternateUpdateButtonSpecifierForState:(int)arg1;
- (id)_alternateUpdateGroupSpecifierForState:(int)arg1;
- (id)_automaticUpdateButtonSpecifierForState:(int)arg1;
- (id)_automaticUpdateGroupSpecifierForState:(int)arg1;
- (id)_betaUpdatesButtonSpecifierForState:(int)arg1;
- (id)alternateUpdateDescriptor;
- (id)analyticsDownloadAndInstallNowTappedString;
- (id)analyticsDownloadAndInstallTonightTappedString;
- (id)analyticsDownloadOnlyTappedString;
- (id)analyticsOpenStorageTappedString;
- (int)currentState;
- (id)delegate;
- (bool)hasAlternateUpdate;
- (id)installLaterTappedString;
- (id)installNowTappedString;
- (id)learnMoreTappedString;
- (void)manager:(id)arg1 downloadDidStart:(id)arg2;
- (void)manager:(id)arg1 downloadProgressChanged:(id)arg2 displayStyle:(int)arg3;
- (void)manager:(id)arg1 prepareToDownloadAndInstall:(id)arg2 withDownload:(id)arg3 andDownloadError:(id)arg4 didSuccessfullyStart:(bool)arg5 withError:(id)arg6 usingCompletionHandler:(id /* block */)arg7;
- (id)paneTitle;
- (void)setDelegate:(id)arg1;
- (void)setSlowRollUpdateType:(unsigned long long)arg1;
- (unsigned long long)slowRollUpdateType;
- (void)startDownloadAndInstallOnMainPane;
- (id)suError;
- (bool)supportsPullToRefresh;
- (id)updateDescriptor;
- (bool)updateReadyToDownload;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
