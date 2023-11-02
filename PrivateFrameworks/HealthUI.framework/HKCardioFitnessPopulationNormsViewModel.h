
@interface HKCardioFitnessPopulationNormsViewModel : HKPopulationNormsAbstractViewModel

- (id)ageBucketsTitle;
- (id)associatedSampleType;
- (id)chartTitle;
- (id)classificationIdentifierForIndex:(unsigned long long)arg1;
- (id)classificationIndexForSampleValue:(double)arg1 age:(long long)arg2 sex:(long long)arg3;
- (id)currentDataForBiologicalSex;
- (id)footerText;
- (id)hk_UIAutomationIdentifier;
- (id)levelsTitle;
- (id)localizedClassificationDescriptionForIndex:(unsigned long long)arg1;
- (id)localizedClassificationNameForIndex:(unsigned long long)arg1;
- (id)localizedClassificationTitleForIndex:(unsigned long long)arg1;
- (double)maximumSampleValueQuantity;
- (unsigned long long)maximumUserAgeBucketIndex;
- (double)minimumSampleValueQuantity;
- (unsigned long long)numberOfClassifications;
- (id)quantityUnitTitle;
- (id)seriesHighlightedColor;
- (id)seriesHighlightedSegmentColor;
- (bool)shouldShowClassificationTitle;
- (id)viewTitle;

@end
