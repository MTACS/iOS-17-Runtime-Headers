
@interface PGPhotosGraphProfile : CLSProfile {
    NSSet * _blockedTaxonomyNodeNames;
}

+ (id)_blockedNames;
+ (id)_blockedNamesToTraverse;
+ (id)_computeBlockedTaxonomyNodeNamesWithSceneTaxonomy:(id)arg1;
+ (id)classIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)partOfDayAfternoon;
+ (id)partOfDayEvening;
+ (id)partOfDayMorning;
+ (id)partOfDayNight;
+ (id)partOfDayNoon;
+ (id)poiActivity;
+ (id)poiAmusementPark;
+ (id)poiCulture;
+ (id)poiDiving;
+ (id)poiEntertainment;
+ (id)poiFitness;
+ (id)poiHiking;
+ (id)poiHospital;
+ (id)poiMuseum;
+ (id)poiNightlife;
+ (id)poiPark;
+ (id)poiPerformance;
+ (id)poiRestaurant;
+ (id)poiShopping;
+ (id)poiStadium;
+ (id)poiTravel;
+ (id)poiUnknown;
+ (id)profileDependenciesIdentifiers;
+ (id)roiBeach;
+ (id)roiMoutain;
+ (id)roiNature;
+ (id)roiUrban;
+ (id)roiWater;
+ (id)supportedMeaningClueKeys;

- (void).cxx_destruct;
- (void)_insertEventCluesForClueCollection:(id)arg1;
- (void)_insertPlacesForClueCollection:(id)arg1;
- (void)_insertSceneForClueCollection:(id)arg1;
- (id)initWithSceneTaxonomy:(id)arg1;
- (bool)isBlockedTaxonomyNodeWithName:(id)arg1;
- (void)processResultsSynchronouslyForInvestigation:(id)arg1 withProgressBlock:(id /* block */)arg2;

@end
