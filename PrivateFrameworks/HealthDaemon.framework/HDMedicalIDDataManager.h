
@interface HDMedicalIDDataManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver> {
    HDProfile * _profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_badgeHealthAppForEmergencyContactConsolidationWithCompletion:(id /* block */)arg1;
- (void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (bool)deleteMedicalIDDataWithError:(id*)arg1;
- (id)fetchMedicalIDDataIfSetUpOrCreateDefaultWithError:(id*)arg1;
- (id)fetchMedicalIDIfSetUpWithError:(id*)arg1;
- (id)fetchMedicalIDWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1;
- (id)medicalIDClinicalContactsWithError:(id*)arg1;
- (id)medicalIDEmergencyContactsWithError:(id*)arg1;
- (long long)medicalIDSetupStatusWithError:(id*)arg1;
- (bool)obliterateMedicalIDDataWithReason:(id)arg1 error:(id*)arg2;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(id /* block */)arg2;
- (void)setProfile:(id)arg1;
- (id)unitTest_medicalIDData;
- (bool)unitTest_persistMedicalIDData:(id)arg1;
- (bool)updateMedicalIDWithLocalData:(id)arg1 error:(id*)arg2;
- (bool)updateMedicalIDWithSyncedData:(id)arg1 provenance:(id)arg2 error:(id*)arg3;

@end
