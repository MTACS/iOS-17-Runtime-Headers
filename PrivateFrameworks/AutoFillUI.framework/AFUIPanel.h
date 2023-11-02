
@interface AFUIPanel : NSObject <UIPopoverPresentationControllerDelegate> {
    AFUIClientSession * _clientSession;
    <AFUIModalUIDelegate> * _delegate;
    AFUIExplicitAutoFillController * _explicitAutoFillController;
    AFUIAutoFillPopoverController * _popoverController;
}

@property (nonatomic, retain) AFUIClientSession *clientSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUIModalUIDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AFUIExplicitAutoFillController *explicitAutoFillController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AFUIAutoFillPopoverController *popoverController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_hide;
- (id)_presentingWindow;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)clientSession;
- (id)delegate;
- (void)displayForDocumentTraits:(id)arg1 documentState:(id)arg2 textOperationsHandler:(id /* block */)arg3;
- (void)documentStateChanged:(id)arg1;
- (id)explicitAutoFillController;
- (void)hide;
- (id)popoverController;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setClientSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExplicitAutoFillController:(id)arg1;
- (void)setPopoverController:(id)arg1;
- (void)transientHide;
- (void)transientUnhide;

@end
