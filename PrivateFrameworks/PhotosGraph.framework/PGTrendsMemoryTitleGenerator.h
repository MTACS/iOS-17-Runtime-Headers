
@interface PGTrendsMemoryTitleGenerator : PGTitleGenerator {
    PGGraphLocationCityNode * _cityNode;
    NSSet * _momentNodes;
    PGGraphPersonNode * _personNode;
    NSString * _sceneFeatureLabel;
    PGTimeTitleOptions * _timeTitleOptions;
    long long  _type;
}

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)initWithMomentNodes:(id)arg1 sceneFeatureLabel:(id)arg2 cityNode:(id)arg3 titleGenerationContext:(id)arg4 timeTitleOptions:(id)arg5;
- (id)initWithMomentNodes:(id)arg1 sceneFeatureLabel:(id)arg2 personNode:(id)arg3 titleGenerationContext:(id)arg4 timeTitleOptions:(id)arg5;
- (id)initWithMomentNodes:(id)arg1 sceneFeatureLabel:(id)arg2 titleGenerationContext:(id)arg3 timeTitleOptions:(id)arg4;

@end
