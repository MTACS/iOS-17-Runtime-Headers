
@interface _BMLocationLibraryNode : _BMLibraryNode

+ (id)HashedCoordinates;
+ (id)MicroLocation;
+ (id)MicroLocationVisit;
+ (id)Motion;
+ (id)PointOfInterest;
+ (id)Semantic;
+ (id)SignificantVisit;
+ (id)configurationForHashedCoordinates;
+ (id)configurationForMicroLocationVisit;
+ (id)configurationForMotion;
+ (id)configurationForSemantic;
+ (id)configurationForSignificantVisit;
+ (id)identifier;
+ (id)storeConfigurationForHashedCoordinates;
+ (id)storeConfigurationForMicroLocationVisit;
+ (id)storeConfigurationForMotion;
+ (id)storeConfigurationForSemantic;
+ (id)storeConfigurationForSignificantVisit;
+ (id)streamNames;
+ (id)streamWithName:(id)arg1;
+ (id)sublibraries;
+ (id)syncPolicyForHashedCoordinates;
+ (id)syncPolicyForMicroLocationVisit;
+ (id)syncPolicyForMotion;
+ (id)syncPolicyForSemantic;
+ (id)syncPolicyForSignificantVisit;
+ (id)validKeyPaths;

@end
