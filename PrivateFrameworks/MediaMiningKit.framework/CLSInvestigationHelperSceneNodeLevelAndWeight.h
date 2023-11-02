
@interface CLSInvestigationHelperSceneNodeLevelAndWeight : NSObject {
    unsigned long long  _level;
    PFSceneTaxonomyNode * _taxonomyNode;
    double  _weight;
}

@property (readonly) unsigned long long level;
@property (readonly) PFSceneTaxonomyNode *taxonomyNode;
@property (readonly) double weight;

- (void).cxx_destruct;
- (id)initWithTaxonomyNode:(id)arg1 level:(unsigned long long)arg2 andWeight:(double)arg3;
- (unsigned long long)level;
- (id)taxonomyNode;
- (double)weight;

@end
