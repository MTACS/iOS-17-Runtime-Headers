
@interface AXUIVoiceOverBluetoothPairController : AXUISettingsSetupCapableListController <UITextFieldDelegate> {
    VOSBluetoothDevice * _device;
    bool  _dismissed;
    NSString * _promptFormat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelButtonClicked:(id)arg1;
- (void)dealloc;
- (void)deviceUpdated:(id)arg1;
- (void)doneButtonClicked:(id)arg1;
- (void)emptySetter:(id)arg1 specifier:(id)arg2;
- (id)init;
- (id)internalTableView;
- (void)keyboardWillShow:(id)arg1;
- (void)loadView;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)textDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updatePrompt:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
