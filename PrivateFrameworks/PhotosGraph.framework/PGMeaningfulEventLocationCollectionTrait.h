
@interface PGMeaningfulEventLocationCollectionTrait : PGMeaningfulEventCollectionTrait {
    bool  _skipNegativeRequirementForMissingLocation;
    bool  _useStrictNegativeNodesMatching;
}

@property (nonatomic) bool skipNegativeRequirementForMissingLocation;
@property (nonatomic) bool useStrictNegativeNodesMatching;

- (id)initWithNodes:(id)arg1 negativeNodes:(id)arg2;
- (void)setSkipNegativeRequirementForMissingLocation:(bool)arg1;
- (void)setUseStrictNegativeNodesMatching:(bool)arg1;
- (bool)skipNegativeRequirementForMissingLocation;
- (bool)useStrictNegativeNodesMatching;

@end
