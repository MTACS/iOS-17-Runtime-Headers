
@interface HUAddGuestViewController : HUItemTableOBWelcomeController <HUDetailsPresentationDelegateHost, HUPinCodeDetailsViewDelegate> {
    HUPinCodeDetailsViewController * _pinCodeDetailsController;
    <HUPresentationDelegate> * _presentationDelegate;
    bool  _requiresPresentingViewControllerDismissal;
    UIBarButtonItem * _saveButtonItem;
}

@property (nonatomic, retain) UIBarButtonItem *addButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUPinCodeDetailsViewController *pinCodeDetailsController;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic) bool requiresPresentingViewControllerDismissal;
@property (nonatomic, retain) UIBarButtonItem *saveButtonItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addButtonItem;
- (id)initWithPinCodeManager:(id)arg1 home:(id)arg2;
- (id)pinCodeDetailsController;
- (id)presentationDelegate;
- (bool)requiresPresentingViewControllerDismissal;
- (id)saveButtonItem;
- (void)saveButtonPressed:(id)arg1;
- (void)setAddButtonItem:(id)arg1;
- (void)setPinCodeDetailsController:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setRequiresPresentingViewControllerDismissal:(bool)arg1;
- (void)setSaveButtonItem:(id)arg1;
- (void)viewDidLoad;

@end
