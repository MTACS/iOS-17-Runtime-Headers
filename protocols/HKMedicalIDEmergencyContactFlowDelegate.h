
@protocol HKMedicalIDEmergencyContactFlowDelegate

@required

- (void)emergencyContactFlow:(HKMedicalIDEmergencyContactFlow *)arg1 didSelectContact:(_HKEmergencyContact *)arg2;
- (void)emergencyContactFlowDidCancel:(HKMedicalIDEmergencyContactFlow *)arg1;

@end
