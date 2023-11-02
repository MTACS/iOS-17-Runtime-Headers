
@protocol HKMedicationsAssetInterface

@required

- (HKGenericMedicationSearchResult *)expandedGenericMedicationSearchResult:(HKGenericMedicationSearchResult *)arg1 error:(id*)arg2;
- (NSArray *)genericMedicationsFromTokens:(NSArray *)arg1 error:(id*)arg2;
- (HKFullMedicationSearchResult *)medicationFromNDCCode:(NSString *)arg1 error:(id*)arg2;

@end
