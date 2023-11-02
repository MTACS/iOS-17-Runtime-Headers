
@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate> {
    NSObject<PDFPasswordViewControllerDelegate> * _delegate;
    UIDocumentPasswordView * _uiDocPasswordView;
}

- (void).cxx_destruct;
- (void)clearPasswordField;
- (void)focusOnPasswordField;
- (id)initWithDelegate:(id)arg1;
- (void)presentInvalidPasswordAlertWithParentViewController:(id)arg1;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)viewDidLoad;

@end
