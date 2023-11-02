
@interface HKMedicationDoseEventType : HKSampleType <_HKStatisticsSampleTypeConfigurationProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allTypes;
+ (id)medicationDoseEventType;

- (long long)aggregationStyleForStatistics;
- (id)canonicalUnitForStatistics;
- (bool)supportsStatisticOptions:(unsigned long long)arg1;
- (id)underlyingSampleType;
- (void)validateUnitForStatistic:(id)arg1;

@end
