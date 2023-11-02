
@interface PPConfigStore : NSObject

+ (id)defaultStore;

- (unsigned long long)assetVersionWithError:(id*)arg1;
- (id)readableTrialTreatmentsMappingWithError:(id*)arg1;
- (id)variantNameWithError:(id*)arg1;

@end
