
@interface HUSetupCodeField : UIView <UITextFieldDelegate> {
    HUSetupCodeFieldItem * _activeItem;
    UIStackView * _codeFieldItemsView;
    <HUSetupCodeFieldDelegate> * _delegate;
    UITextField * _hiddenInputField;
    double  _itemSpacing;
    NSArray * _items;
}

@property (nonatomic) HUSetupCodeFieldItem *activeItem;
@property (nonatomic, retain) UIStackView *codeFieldItemsView;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUSetupCodeFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextField *hiddenInputField;
@property (nonatomic) double itemSpacing;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *setupCode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateLast;
- (void)_activateNext;
- (void)_setupCodeFieldItems;
- (void)_updateInterfaceForCurrentTraitCollection;
- (id)activeItem;
- (void)clear;
- (id)codeFieldItemsView;
- (id)delegate;
- (void)fieldTapped:(id)arg1;
- (id)hiddenInputField;
- (void)hideKeypad;
- (id)init;
- (id)initWithCodeDigits:(unsigned long long)arg1;
- (bool)isComplete;
- (double)itemSpacing;
- (id)items;
- (void)setActiveItem:(id)arg1;
- (void)setCodeFieldItemsView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHiddenInputField:(id)arg1;
- (void)setItemSpacing:(double)arg1;
- (id)setupCode;
- (void)showKeypad;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
