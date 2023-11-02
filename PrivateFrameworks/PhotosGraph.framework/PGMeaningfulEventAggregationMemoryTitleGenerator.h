
@interface PGMeaningfulEventAggregationMemoryTitleGenerator : PGTitleGenerator {
    NSSet * _features;
    unsigned long long  _meaning;
    NSSet * _meaningfulEvents;
    double  _unreliableMeaningRatioThresholdForSpecificTitle;
}

@property (nonatomic, readonly) NSSet *features;
@property (nonatomic, readonly) unsigned long long meaning;
@property (nonatomic, readonly) NSSet *meaningfulEvents;
@property (nonatomic) double unreliableMeaningRatioThresholdForSpecificTitle;

+ (id)_momentNodesFromMeaningfulEvents:(id)arg1;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)_meaningLabelForTitle;
- (id)_subtitle;
- (id)features;
- (id)initWithMeaning:(unsigned long long)arg1 features:(id)arg2 meaningfulEvents:(id)arg3 titleGenerationContext:(id)arg4;
- (unsigned long long)meaning;
- (id)meaningfulEvents;
- (void)setUnreliableMeaningRatioThresholdForSpecificTitle:(double)arg1;
- (double)unreliableMeaningRatioThresholdForSpecificTitle;

@end
