
@interface HUPinCodeEditorViewController : UIViewController <HUPresentationDelegateHost, UITextFieldDelegate> {
    long long  _codeLengthMax;
    long long  _codeLengthMin;
    NSString * _editedPinCode;
    UILabel * _footerLabel;
    HMHome * _home;
    UILabel * _instructionHeader;
    id /* block */  _newPINCodeCompletionBlock;
    HFPinCodeManager * _pinCodeManager;
    <HUPresentationDelegate> * _presentationDelegate;
    UIBarButtonItem * _saveButtonItem;
    HFItem * _sourceItem;
    UITextField * _textField;
    id /* block */  _updatedPINCodeCompletionBlock;
}

@property (nonatomic) long long codeLengthMax;
@property (nonatomic) long long codeLengthMin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *editedPinCode;
@property (nonatomic, retain) UILabel *footerLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMHome *home;
@property (nonatomic, retain) UILabel *instructionHeader;
@property (nonatomic, copy) id /* block */ newPINCodeCompletionBlock;
@property (nonatomic, retain) HFPinCodeManager *pinCodeManager;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic, retain) UIBarButtonItem *saveButtonItem;
@property (nonatomic, retain) HFItem *sourceItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textField;
@property (nonatomic, copy) id /* block */ updatedPINCodeCompletionBlock;

- (void).cxx_destruct;
- (void)_commonInitWithManager:(id)arg1 home:(id)arg2 initialPinCodeValue:(id)arg3;
- (void)_hideSpinner;
- (void)_showSpinner;
- (void)_updateHeaderAndFooter;
- (void)cancelButtonPressed:(id)arg1;
- (id)checkForPINCodeValueValidationErrors;
- (long long)codeLengthMax;
- (long long)codeLengthMin;
- (id)commitPinCodeChange;
- (id)editedPinCode;
- (id)footerLabel;
- (id)home;
- (id)initForCreatingNewPinCodeWithManager:(id)arg1 initialPinCodeValue:(id)arg2 home:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)initForEditingPinCodeWithItem:(id)arg1 pinCodeManager:(id)arg2 pinCodeValue:(id)arg3 home:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)instructionHeader;
- (id /* block */)newPINCodeCompletionBlock;
- (id)pinCodeManager;
- (id)presentationDelegate;
- (id)saveButtonItem;
- (void)saveButtonPressed:(id)arg1;
- (void)setCodeLengthMax:(long long)arg1;
- (void)setCodeLengthMin:(long long)arg1;
- (void)setEditedPinCode:(id)arg1;
- (void)setFooterLabel:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setInstructionHeader:(id)arg1;
- (void)setNewPINCodeCompletionBlock:(id /* block */)arg1;
- (void)setPinCodeManager:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setSaveButtonItem:(id)arg1;
- (void)setSourceItem:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setUpdatedPINCodeCompletionBlock:(id /* block */)arg1;
- (id)sourceItem;
- (id)textField;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (id /* block */)updatedPINCodeCompletionBlock;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
