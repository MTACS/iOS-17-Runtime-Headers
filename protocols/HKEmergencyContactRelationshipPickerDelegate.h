
@protocol HKEmergencyContactRelationshipPickerDelegate

@required

- (void)emergencyContactRelationshipPicker:(HKEmergencyContactRelationshipPicker *)arg1 didChooseRelationshipNamed:(NSString *)arg2;
- (void)emergencyContactRelationshipPickerDidCancel:(HKEmergencyContactRelationshipPicker *)arg1;

@end
