
@interface HUPersonalPINCodeViewController : HUItemTableViewController <HUPresentationDelegateHost, UIResponderStandardEditActions> {
    <HUPersonalPINCodeViewControllerDelegate> * _delegate;
    HUPersonalPINCodeItemManager * _personalPINCodeItemManager;
    HFPinCodeManager * _pinCodeManager;
    <HUPresentationDelegate> * _presentationDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUPersonalPINCodeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HUPersonalPINCodeItemManager *personalPINCodeItemManager;
@property (nonatomic, readonly) HFPinCodeManager *pinCodeManager;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_hideSpinner;
- (void)_shareCode;
- (void)_showSpinner;
- (bool)canBecomeFirstResponder;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)copy:(id)arg1;
- (id)currentPinCodeValue;
- (id)delegate;
- (id)initWithItem:(id)arg1 pinCodeManager:(id)arg2 home:(id)arg3;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)openPINCodeEditor;
- (id)personalPINCodeItemManager;
- (id)pinCodeManager;
- (id)presentationDelegate;
- (void)setDelegate:(id)arg1;
- (void)setPersonalPINCodeItemManager:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (bool)shouldManageTextFieldForItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
