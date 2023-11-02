
@interface PGPublicEventCriteriaFactory : NSObject {
    NSDictionary * _disambiguationCriteriaByEventCategory;
    PGGraph * _graph;
    NSDictionary * _highConfidenceCriteriaByEventCategory;
    NSDictionary * _prohibitedCriteriaByEventCategory;
    CLSSceneTaxonomyHierarchy * _sceneTaxonomy;
}

@property (nonatomic, readonly) NSDictionary *disambiguationCriteriaByEventCategory;
@property (nonatomic, readonly) NSDictionary *highConfidenceCriteriaByEventCategory;
@property (nonatomic, readonly) NSDictionary *prohibitedCriteriaByEventCategory;

+ (id)publicEventCriteriaByCategoryForGraph:(id)arg1 sceneTaxonomy:(id)arg2;

- (void).cxx_destruct;
- (id)_appleEventsCriteriaArray;
- (id)_artsAndMuseumsCriteriaArray;
- (id)_danceCriteriaArray;
- (id)_festivalsAndFairsCriteriaArray;
- (id)_meaningCriteriaByEventCategoryForMeaningIdentifierByEventCategories:(id)arg1 inferenceType:(unsigned long long)arg2;
- (id)_musicConcertsCriteriaArray;
- (id)_nightLifeCriteriaArray;
- (id)_publicEventCriteriaByCategory;
- (id)_sportsCriteriaArray;
- (id)_theaterCriteriaArray;
- (id)disambiguationCriteriaByEventCategory;
- (id)highConfidenceCriteriaByEventCategory;
- (id)initWithGraph:(id)arg1 sceneTaxonomy:(id)arg2;
- (id)prohibitedCriteriaByEventCategory;

@end
