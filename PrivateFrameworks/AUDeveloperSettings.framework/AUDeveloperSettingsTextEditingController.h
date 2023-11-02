
@interface AUDeveloperSettingsTextEditingController : PSListController <UITextFieldDelegate> {
    NSString * _identifier;
    bool  _keyboardShownOnce;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)getValue:(id)arg1;
- (id)init;
- (void)keyboardWillShow:(id)arg1;
- (void)saveEditedValue:(id)arg1 specifier:(id)arg2;
- (void)setBuildName:(id)arg1;
- (void)setTrainName:(id)arg1;
- (bool)shouldSelectResponderOnAppearance;
- (id)specifiers;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)textDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
