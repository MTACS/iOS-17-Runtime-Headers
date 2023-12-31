
@protocol EKEventAttendeePickerDelegate <NSObject>

@required

- (void)eventAttendeePicker:(EKEventAttendeePicker *)arg1 cacheValidationStatus:(unsigned long long)arg2 forAddress:(NSString *)arg3;
- (unsigned long long)eventAttendeePicker:(EKEventAttendeePicker *)arg1 getValidationStatusForAddress:(NSString *)arg2;

@end
