
@interface HRProfile : NSObject {
    HKClinicalAccountStore * _clinicalAccountStore;
    WDClinicalSampleAccountsLoader * _clinicalSampleAccountsLoader;
    WDClinicalSourcesDataProvider * _clinicalSourcesDataProvider;
    HKConceptStore * _conceptStore;
    HKDateCache * _dateCache;
    HKHealthRecordsStore * _healthRecordsStore;
    HKHealthStore * _healthStore;
    HRHealthRecordsMigrator * _migrator;
    WDClinicalOnboardingManager * _onboardingManager;
    HKUCUMUnitDisplayConverter * _ucumDisplayConverter;
    HKSampleTypeUpdateController * _updateController;
    UTCDateFormatter * _utcDateFormatter;
}

@property (nonatomic, readonly) HKClinicalAccountStore *clinicalAccountStore;
@property (nonatomic) WDClinicalSampleAccountsLoader *clinicalSampleAccountsLoader;
@property (nonatomic, readonly) WDClinicalSourcesDataProvider *clinicalSourcesDataProvider;
@property (nonatomic, readonly) HKConceptStore *conceptStore;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (nonatomic, readonly) HKHealthRecordsStore *healthRecordsStore;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) WDClinicalOnboardingManager *onboardingManager;
@property (nonatomic, readonly) HKUCUMUnitDisplayConverter *ucumDisplayConverter;
@property (nonatomic, readonly) HKSampleTypeUpdateController *updateController;
@property (nonatomic, readonly) HRWDUserActivityManager *userActivityManager;
@property (nonatomic, readonly) UTCDateFormatter *utcDateFormatter;

+ (id)userProfileWithProfileIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithHealthStore:(id)arg1;
- (id)clinicalAccountStore;
- (id)clinicalSampleAccountsLoader;
- (id)clinicalSourcesDataProvider;
- (id)conceptStore;
- (id)dateCache;
- (unsigned long long)hash;
- (id)healthRecordsStore;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 profileIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)onboardingManager;
- (void)setClinicalSampleAccountsLoader:(id)arg1;
- (id)ucumDisplayConverter;
- (id)updateController;
- (id)userActivityManager;
- (id)utcDateFormatter;

@end
