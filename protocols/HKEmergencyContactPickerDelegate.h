
@protocol HKEmergencyContactPickerDelegate

@required

- (void)emergencyContactPicker:(HKEmergencyContactPicker *)arg1 didSelectContact:(CNContact *)arg2;
- (void)emergencyContactPicker:(HKEmergencyContactPicker *)arg1 didSelectContactProperty:(CNContactProperty *)arg2;

@end
