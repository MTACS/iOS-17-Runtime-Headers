
@protocol HRRecordViewControllerFactory

@required

- (UIViewController *)makeDetailViewControllerForRecord:(HKMedicalRecord *)arg1 usingProfile:(HRProfile *)arg2;
- (UIViewController *)makeViewControllerForRecord:(HKMedicalRecord *)arg1 usingProfile:(HRProfile *)arg2;

@end
