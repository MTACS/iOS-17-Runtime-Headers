
@interface FAHealthKitSoftLinking : NSObject <FAHealthKitSoftLinkingProtocol, HKMedicalIDEmergencyContactFlowDelegate, HKMedicalIDViewControllerDelegate> {
    HKMedicalIDEmergencyContactFlow * _contactFlow;
    FAFamilyCircle * _familyCircle;
    HKHealthStore * _healthStore;
    _HKMedicalIDData * _medicalIDData;
    HKMedicalIDStore * _medicalIDStore;
    HKMedicalIDViewController * _medicalIDViewController;
    UINavigationController * _navViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_pathToEmergencyRow;
- (void)emergencyContactFlow:(id)arg1 didSelectContact:(id)arg2;
- (void)emergencyContactFlowDidCancel:(id)arg1;
- (void)fetchLastModifiedDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchMedicalIDData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithFamilyCircle:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)presentMedicalIDViewController:(id)arg1 withFamily:(id)arg2 isEmergencyContactSetup:(bool)arg3;

@end
