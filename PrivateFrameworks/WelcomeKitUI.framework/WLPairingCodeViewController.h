
@interface WLPairingCodeViewController : WLOnboardingViewController <OBSetupAssistantSupport> {
    OBLinkTrayButton * _appleInternalOptionsButton;
    id /* block */  _cancellationBlock;
    id /* block */  _getLocalImportOptionsHandler;
    id /* block */  _importLocalContentHandler;
    bool  _showCancelButton;
    NSString * _ssid;
    id /* block */  _stashDataLocallyHandler;
    id /* block */  _viewWillDisappearBlock;
    id /* block */  _viewWillDismissBlock;
    WLWelcomeController * _welcomeController;
    NSString * _wifiPSK;
}

@property (nonatomic, copy) id /* block */ cancellationBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ getLocalImportOptionsHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ importLocalContentHandler;
@property (nonatomic) bool showCancelButton;
@property (nonatomic, copy) id /* block */ stashDataLocallyHandler;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ viewWillDisappearBlock;
@property (nonatomic, copy) id /* block */ viewWillDismissBlock;

- (void).cxx_destruct;
- (void)_appleInternalOptionsTapped:(id)arg1;
- (void)_importLocalContent;
- (void)_setStashDataLocally:(bool)arg1;
- (void)cancel;
- (id /* block */)cancellationBlock;
- (id /* block */)getLocalImportOptionsHandler;
- (id /* block */)importLocalContentHandler;
- (id)initWithPairingCode:(id)arg1 wifiPSK:(id)arg2 ssid:(id)arg3 welcomeController:(id)arg4;
- (void)setCancellationBlock:(id /* block */)arg1;
- (void)setGetLocalImportOptionsHandler:(id /* block */)arg1;
- (void)setImportLocalContentHandler:(id /* block */)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (void)setStashDataLocallyHandler:(id /* block */)arg1;
- (void)setViewWillDisappearBlock:(id /* block */)arg1;
- (void)setViewWillDismissBlock:(id /* block */)arg1;
- (void)showActivityIndicatorView;
- (bool)showCancelButton;
- (id /* block */)stashDataLocallyHandler;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (id /* block */)viewWillDisappearBlock;
- (id /* block */)viewWillDismissBlock;

@end
