
@interface HRUIAnalyticsManager : NSObject {
    long long  _currentAtrialFibrillationOnboardingStep;
    long long  _currentElectrocardiogramOnboardingStep;
    NSString * _productType;
}

@property (nonatomic) long long currentAtrialFibrillationOnboardingStep;
@property (nonatomic) long long currentElectrocardiogramOnboardingStep;
@property (nonatomic, retain) NSString *productType;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_pdfSharedStringFromProvenance:(unsigned long long)arg1;
- (void)_sendAnalyticsEvent:(id)arg1 withPayload:(id)arg2;
- (id)_stringAlgorithmVersionFromOnboardingVersion:(id)arg1;
- (id)_stringFromHRUIAtrialFibrillationDetectionOnboardingStep:(long long)arg1;
- (id)_stringFromHRUIElectrocardiogramOnboardingStep:(long long)arg1;
- (id)_stringFromOnboardingType:(long long)arg1;
- (id)_stringFromOnboardingVersion:(id)arg1;
- (id)_stringFromProvenance:(long long)arg1;
- (long long)currentAtrialFibrillationOnboardingStep;
- (long long)currentElectrocardiogramOnboardingStep;
- (id)init;
- (id)productType;
- (void)setCurrentAtrialFibrillationOnboardingStep:(long long)arg1;
- (void)setCurrentElectrocardiogramOnboardingStep:(long long)arg1;
- (void)setProductType:(id)arg1;
- (void)trackAtrialFibrillationDetectionOnboardingStep:(long long)arg1 forOnboardingVersion:(long long)arg2 countryCode:(id)arg3 provenance:(long long)arg4;
- (void)trackElectrocardiogramDataTypeViewed;
- (void)trackElectrocardiogramOnboardingStep:(long long)arg1 forOnboardingType:(long long)arg2 onboardingVersion:(id)arg3 countryCode:(id)arg4 provenance:(long long)arg5;
- (void)trackElectrocardiogramPDFShared;
- (void)trackElectrocardiogramPDFSharedFrom:(unsigned long long)arg1;
- (void)trackElectrocardiogramPDFViewed;

@end
