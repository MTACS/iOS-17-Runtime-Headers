
@interface PTUIEditRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate, UITextFieldDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)cellStyleForRow:(id)arg1;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)numericKeypadDidUpdateValue:(id)arg1;
- (void)numericKeypadWillDismiss:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)textForValue:(id)arg1;
- (void)updateDisplayedValue;
- (id)valueForText:(id)arg1;

@end
