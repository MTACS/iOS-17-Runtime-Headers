
@interface PGCurationSceneTrait : PGCurationTrait {
    CLSSceneConfidenceThresholdHelper * _helper;
    NSSet * _sceneNames;
    unsigned long long  _targetNumberOfMatches;
}

@property (readonly) NSSet *sceneNames;
@property (nonatomic) unsigned long long targetNumberOfMatches;

- (void).cxx_destruct;
- (id)confidenceThresholdBySceneIdentifierWithCurationModel:(id)arg1;
- (id)initWithSceneNames:(id)arg1;
- (bool)isActive;
- (id)sceneNames;
- (void)setTargetNumberOfMatches:(unsigned long long)arg1;
- (unsigned long long)targetNumberOfMatches;

@end
