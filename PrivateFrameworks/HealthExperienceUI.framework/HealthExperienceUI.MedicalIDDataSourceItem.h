
@interface HealthExperienceUI.MedicalIDDataSourceItem : NSObject <HKMedicalIDViewControllerDelegate> {
    void baseIdentifier;
    void currentMedicalIDDataResultCancellable;
    void currentMedicalIDDataResultPresented;
    void detailText;
    void healthStore;
    void medicalIDCache;
    void medicalIDViewController;
    void presentingViewController;
    void reuseIdentifier;
    void showDisclosureIndicator;
    void text;
    void uniqueIdentifier;
}

- (void).cxx_destruct;
- (id)init;
- (void)medicalIDUpdatedWithNotification:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;

@end
