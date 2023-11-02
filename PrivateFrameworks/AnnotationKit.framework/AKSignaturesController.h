
@interface AKSignaturesController : NSObject <AKSignatureCreationControllerDelegate, AKSignaturesViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    AKController * _controller;
    <AKSignaturesControllerDelegate> * _delegate;
    AKSignaturesPresentationContext * _presentationContext;
    AKSignaturesViewController_iOS * _signaturesAlertViewController;
    AKSignatureCreationViewController_iOS * _signaturesCreationViewController;
    AKSignaturesViewController_iOS * _signaturesSheetViewController;
}

@property (nonatomic) AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKSignaturesControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AKSignaturesPresentationContext *presentationContext;
@property (nonatomic, retain) AKSignaturesViewController_iOS *signaturesAlertViewController;
@property (nonatomic, retain) AKSignatureCreationViewController_iOS *signaturesCreationViewController;
@property (nonatomic, retain) AKSignaturesViewController_iOS *signaturesSheetViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continueToCreateSignature;
- (void)_continueToManageSignatures;
- (void)_notifyDidSelectSignature;
- (id)controller;
- (id)delegate;
- (id)initWithController:(id)arg1;
- (void)presentSignaturesViewController;
- (id)presentationContext;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentationContext:(id)arg1;
- (void)setSignaturesAlertViewController:(id)arg1;
- (void)setSignaturesCreationViewController:(id)arg1;
- (void)setSignaturesSheetViewController:(id)arg1;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (void)signatureCreationControllerDidDismiss:(id)arg1;
- (id)signaturesAlertViewController;
- (id)signaturesCreationViewController;
- (id)signaturesSheetViewController;
- (void)signaturesViewControllerContinueToCreateSignature:(id)arg1;
- (void)signaturesViewControllerDidCancel:(id)arg1;
- (void)signaturesViewControllerDidSelectSignature:(id)arg1;

@end
