
@interface SUUITonePurchaseController : NSObject <CNContactPickerDelegate> {
    SUUIClientContext * _clientContext;
    id /* block */  _completionBlock;
    CNContactPickerViewController * _contactPickerController;
    SUUIItem * _item;
    UIViewController * _parentViewController;
}

@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissContactPicker;
- (void)_finishContactPicker:(id)arg1 withContact:(id)arg2;
- (void)_finishWithTonePurchase:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_showContactPicker;
- (id)clientContext;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)dealloc;
- (id)initWithItem:(id)arg1;
- (id)parentViewController;
- (void)setClientContext:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)showPurchaseFlowWithCompletionBlock:(id /* block */)arg1;

@end
