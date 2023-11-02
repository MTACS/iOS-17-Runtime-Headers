
@interface PGMomentFeatureSpecificationFactory : NSObject {
    CVNLPCLIPModel * _CLIPModel;
    NSObject<OS_os_log> * _loggingConnection;
    CLSSceneTaxonomyHierarchy * _sceneTaxonomy;
}

- (void).cxx_destruct;
- (id)_CLIPTrendsSpecificationsWithProgress:(id)arg1;
- (id)_beachROISpecification;
- (id)_excitementAudioSpecification;
- (id)_foodSpecification;
- (id)_mountainROISpecification;
- (id)_natureROISpecification;
- (id)_peopleSpecification;
- (id)_petPersonSpecification;
- (id)_petSpecification;
- (id)_socialGroupSpecification;
- (id)_trendsSpecifications;
- (id)_urbanROISpecification;
- (id)_waterROISpecification;
- (id)allSupportedFeatureTypes;
- (id)defaultPeopleAssetFilter;
- (id)initWithSceneTaxonomy:(id)arg1 loggingConnection:(id)arg2;
- (id)specificationsForFeatureType:(unsigned long long)arg1 progressReporter:(id)arg2;

@end
