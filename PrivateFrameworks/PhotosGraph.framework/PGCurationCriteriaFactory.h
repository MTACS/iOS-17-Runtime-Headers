
@interface PGCurationCriteriaFactory : NSObject {
    NSMutableDictionary * _holidayServiceByLocale;
    CLSSceneTaxonomyHierarchy * _sceneTaxonomy;
}

- (void).cxx_destruct;
- (id)_anniversaryCriteriaWithPersonLocalIdentifier:(id)arg1 client:(unsigned long long)arg2;
- (id)_beachingCriteriaWithClient:(unsigned long long)arg1;
- (id)_birthdayCriteriaWithPersonLocalIdentifiers:(id)arg1 client:(unsigned long long)arg2;
- (id)_breakfastCriteriaWithClient:(unsigned long long)arg1;
- (id)_climbingCriteriaWithClient:(unsigned long long)arg1;
- (id)_compulsoryRequiredTraitsFromBaseSceneNames:(id)arg1 leafSceneNames:(id)arg2;
- (id)_concertCriteriaWithClient:(unsigned long long)arg1;
- (id)_dinnerCriteriaWithClient:(unsigned long long)arg1;
- (id)_divingCriteriaWithClient:(unsigned long long)arg1;
- (id)_entertainmentCriteriaWithClient:(unsigned long long)arg1;
- (id)_festivalCriteriaWithClient:(unsigned long long)arg1;
- (id)_hikingCriteriaWithClient:(unsigned long long)arg1;
- (id)_holidayEventCriteriaWithGraph:(id)arg1 featureNodes:(id)arg2 client:(unsigned long long)arg3;
- (id)_longTripCriteriaWithClient:(unsigned long long)arg1;
- (id)_lunchCriteriaWithClient:(unsigned long long)arg1;
- (id)_memoriesRestaurantScenesTrait;
- (id)_museumCriteriaWithClient:(unsigned long long)arg1;
- (id)_nightOutCriteriaWithClient:(unsigned long long)arg1;
- (id)_performanceCriteriaWithClient:(unsigned long long)arg1;
- (id)_sceneNamesFromBaseSceneNames:(id)arg1 leafSceneNames:(id)arg2;
- (id)_searchFallCriteria;
- (id)_searchRestaurantCompulsoryScenesTrait;
- (id)_searchRestaurantScenesTrait;
- (id)_searchSpringCriteria;
- (id)_searchSummerCriteria;
- (id)_searchWinterCriteria;
- (id)_shortTripCriteriaWithClient:(unsigned long long)arg1;
- (id)_sportEventCriteriaWithClient:(unsigned long long)arg1;
- (id)_tripScenesTrait;
- (id)_weddingCriteriaWithClient:(unsigned long long)arg1;
- (id)_winterSportCriteriaWithClient:(unsigned long long)arg1;
- (id)curationCriteriaWithCollection:(id)arg1 meaningLabel:(id)arg2 inGraph:(id)arg3 client:(unsigned long long)arg4;
- (id)curationCriteriaWithMeaningLabel:(id)arg1 featureNodes:(id)arg2 inGraph:(id)arg3 client:(unsigned long long)arg4;
- (id)curationCriteriaWithSeasonName:(id)arg1 client:(unsigned long long)arg2;
- (id)foodieCurationCriteriaWithClient:(unsigned long long)arg1;
- (id)foodieCurationCriteriaWithPersonLocalIdentifier:(id)arg1 client:(unsigned long long)arg2;
- (id)holidayServiceWithGraph:(id)arg1;
- (id)init;
- (id)petCurationCriteriaWithCollection:(id)arg1 client:(unsigned long long)arg2 curationContext:(id)arg3;
- (id)tripCurationCriteriaWithCollection:(id)arg1 client:(unsigned long long)arg2;

@end
