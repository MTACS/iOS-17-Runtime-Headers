
@interface WFContactPickerCoordinator : NSObject <CNContactPickerDelegate, CNContactViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    id /* block */  _completionHandler;
    WFAlertPresentationSource * _presentationSource;
    UIViewController * _presentingViewController;
    NSSet * _supportedPersonProperties;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFAlertPresentationSource *presentationSource;
@property (nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *supportedPersonProperties;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id /* block */)completionHandler;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)contactWithMatchingPropertyAndMultivalueIndex:(id)arg1;
- (void)dismissPersonViewController;
- (void)finishWithContact:(id)arg1;
- (void)presentContactPickerWithCompletionHandler:(id /* block */)arg1;
- (void)presentHandlePickerForContact:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentationSource;
- (id)presentingViewController;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setPresentationSource:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setSupportedPersonProperties:(id)arg1;
- (id)supportedContactProperties;
- (id)supportedPersonProperties;

@end
