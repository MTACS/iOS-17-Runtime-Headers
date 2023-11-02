
@interface PKProvisioningReaderModeViewController : UIViewController <PKContactlessCardIngesterDelegate, PKProvisioningFieldsUIRenderer> {
    PKContactlessCardIngester * _cardIngester;
    NSTimer * _cardNotFoundTimer;
    NSString * _cardSessionToken;
    long long  _context;
    <PKProvisioningReaderModeViewControllerDelegate> * _delegate;
    PKPaymentSetupFieldsModel * _fieldsModel;
    bool  _idleTimerDisabled;
    bool  _isWatch;
    PKPaymentSetupProduct * _product;
    PKReaderModeProvisioningView * _provisioningView;
    UIScrollView * _scrollView;
    unsigned long long  _state;
    unsigned long long  _stateOnRetry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_hideBackButton:(bool)arg1;
- (void)_invalidateCardNotFoundTimer;
- (void)_resetProvisioningState;
- (void)_setIdleTimerDisabled:(bool)arg1;
- (void)_setupCardIngester;
- (void)_startCardNotFoundTimer;
- (void)_startIngestion;
- (void)_startReadingCard;
- (void)_startTransferringCard;
- (void)_tearDownCardIngester;
- (void)_updateToUIState:(unsigned long long)arg1;
- (void)cardNotFoundTimerFired:(id)arg1;
- (void)contactlessCardIngester:(id)arg1 didFailToIngestCardWithError:(id)arg2 resetProvisioning:(bool)arg3 isRecoverable:(bool)arg4;
- (void)contactlessCardIngester:(id)arg1 didUpdateCardIngestionStatus:(unsigned long long)arg2;
- (void)didTransitionTo:(long long)arg1 loading:(bool)arg2;
- (void)didUpdateFieldModel;
- (id)initWithContext:(long long)arg1 product:(id)arg2 isWatch:(bool)arg3 fieldsModel:(id)arg4 delegate:(id)arg5;
- (void)loadView;
- (void)showReaderModeError:(id)arg1 isRecoverable:(bool)arg2;
- (void)showWithProvisioningError:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
