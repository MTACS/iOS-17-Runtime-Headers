
@interface PKPhysicalCardReaderModeActivationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKNFCTagReaderSessionDelegate> {
    PKAccount * _account;
    PKAccountService * _accountService;
    PKAccountUser * _accountUser;
    PKPhysicalCardActivationAnimationView * _animationView;
    PKBusinessChatController * _businessChatController;
    bool  _deviceSupportsReaderMode;
    unsigned long long  _feature;
    bool  _invalidated;
    PKPaymentPass * _paymentPass;
    PKPhysicalCard * _physicalCard;
    PKNFCTagReaderSession * _readerSession;
    PKPaymentSessionHandle * _sessionHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_invalidate;
- (void)_presentActivationWithActivationCode:(id)arg1;
- (void)_startTagReaderSession;
- (void)_stopTagReaderSession;
- (void)dealloc;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithAccountService:(id)arg1 account:(id)arg2 accountUser:(id)arg3 paymentPass:(id)arg4 physicalCard:(id)arg5;
- (void)nfcTagReaderSession:(id)arg1 didDetectTags:(id)arg2;
- (void)nfcTagReaderSessionDidEndUnexpectedly:(id)arg1;
- (void)nfcTagReaderSessionDidTimeout:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
