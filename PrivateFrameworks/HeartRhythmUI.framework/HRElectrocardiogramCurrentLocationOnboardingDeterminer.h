
@interface HRElectrocardiogramCurrentLocationOnboardingDeterminer : NSObject {
    HKAnalyticsEventSubmissionManager * _analyticsEventSubmissionManager;
    HKHealthStore * _healthStore;
    <HKRegulatoryDomainProvider> * _mobileCountryCodeManager;
}

- (void).cxx_destruct;
- (id)initWithHealthStore:(id)arg1;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForActiveWatch:(id /* block */)arg1;

@end
