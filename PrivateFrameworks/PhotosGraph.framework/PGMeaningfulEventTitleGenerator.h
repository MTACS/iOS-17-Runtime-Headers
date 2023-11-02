
@interface PGMeaningfulEventTitleGenerator : PGDefaultCollectionTitleGenerator {
    PGGraphFeatureNodeCollection * _featureNodes;
    bool  _meaningIsReliable;
    NSString * _meaningLabel;
}

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)_meaningLabelForTitle;
- (id)_timeTitle;
- (id)_title;
- (id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(bool)arg3 titleGenerationContext:(id)arg4;
- (id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(bool)arg3 titleGenerationContext:(id)arg4 featureNodes:(id)arg5;

@end
