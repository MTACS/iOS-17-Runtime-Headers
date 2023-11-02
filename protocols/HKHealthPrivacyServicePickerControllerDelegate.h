
@protocol HKHealthPrivacyServicePickerControllerDelegate <NSObject>

@required

- (void)pickerControllerDidFinish:(id <HKHealthPrivacyServicePickerController>)arg1 error:(NSError *)arg2;

@optional

- (NSArray *)medicalRecordsForVerifiableClinicalRecord:(HKVerifiableClinicalRecord *)arg1;

@end
