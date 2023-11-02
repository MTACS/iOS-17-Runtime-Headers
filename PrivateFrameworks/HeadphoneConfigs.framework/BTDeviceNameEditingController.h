
@interface BTDeviceNameEditingController : PSListController <UITextFieldDelegate> {
    BTSDevice * _currentDevice;
    NSString * _deviceName;
    bool  _keyboardShownOnce;
    NSString * _productName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool keyboardShownOnce;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)getDeviceName:(id)arg1;
- (id)init;
- (bool)keyboardShownOnce;
- (void)keyboardWillShow:(id)arg1;
- (void)saveEditedName:(id)arg1 specifier:(id)arg2;
- (void)setKeyboardShownOnce:(bool)arg1;
- (bool)shouldSelectResponderOnAppearance;
- (id)specifiers;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)textDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
