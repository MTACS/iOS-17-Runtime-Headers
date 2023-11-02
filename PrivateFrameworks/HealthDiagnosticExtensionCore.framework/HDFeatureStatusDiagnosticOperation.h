
@interface HDFeatureStatusDiagnosticOperation : HDDiagnosticOperation

- (void)_reportFeatureStatusByFeature;
- (void)_reportFeatureStatusForFeature:(id)arg1 healthStore:(id)arg2;
- (void)_reportRegionAvailabilityByFeature;
- (void)_reportRegionAvailabilityForFeature:(id)arg1 healthStore:(id)arg2;
- (void)_reportRequirementSatisfactionOverridesByFeature;
- (id)reportFilename;
- (void)run;

@end
