
@interface HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspector : NSObject <HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting> {
    <HDHRAFibBurdenSevenDayAnalysisBreadcrumbManaging> * _breadcrumbManager;
    HDFeatureAvailabilityOnboardingEligibilityDeterminer * _onboardingEligibilityDeterminer;
}

- (void).cxx_destruct;
- (id)initWithOnboardingEligibilityDeterminer:(id)arg1 breadcrumbManager:(id)arg2;
- (id)pairedDevices;
- (bool)shouldAllowAnalysisWithFeatureStatus:(id)arg1;

@end
