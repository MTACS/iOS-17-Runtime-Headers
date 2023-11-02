
@protocol HKMedicalIDViewControllerDelegate <NSObject>

@optional

- (void)medicalIDViewControllerDidAppear:(HKMedicalIDViewController *)arg1;
- (void)medicalIDViewControllerDidCancel:(HKMedicalIDViewController *)arg1;
- (void)medicalIDViewControllerDidDelete:(HKMedicalIDViewController *)arg1;
- (void)medicalIDViewControllerDidFinish:(HKMedicalIDViewController *)arg1;
- (void)medicalIDViewControllerDidSave:(HKMedicalIDViewController *)arg1;
- (void)medicalIDViewControllerDidUpdate:(HKMedicalIDViewController *)arg1;

@end
