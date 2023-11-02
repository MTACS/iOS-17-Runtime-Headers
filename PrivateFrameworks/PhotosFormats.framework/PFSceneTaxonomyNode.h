
@interface PFSceneTaxonomyNode : NSObject {
    void * _nodeRef;
    PFSceneTaxonomy * _taxonomy;
}

@property (readonly, copy) NSSet *children;
@property (readonly, copy) NSSet *detectors;
@property (readonly) double f0point5Threshold;
@property (readonly) double f1Threshold;
@property (readonly) double f2Threshold;
@property (readonly) double graphHighPrecisionThreshold;
@property (readonly) double graphHighRecallThreshold;
@property (readonly) double highPrecisionThreshold;
@property (readonly) double highRecallThreshold;
@property (getter=isIndexed, readonly) bool indexed;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long networkId;
@property (readonly, copy) NSSet *parents;
@property (readonly) double precision0point6Threshold;
@property (getter=isRoot, readonly) bool root;
@property (readonly) unsigned int sceneClassId;
@property (readonly) double searchThreshold;
@property (readonly) PFSceneTaxonomy *taxonomy;
@property (getter=searchThreshold, readonly) double threshold;

- (void).cxx_destruct;
- (id)children;
- (id)description;
- (id)detectors;
- (double)f0point5Threshold;
- (double)f1Threshold;
- (double)f2Threshold;
- (double)graphHighPrecisionThreshold;
- (double)graphHighRecallThreshold;
- (unsigned long long)hash;
- (double)highPrecisionThreshold;
- (double)highRecallThreshold;
- (id)initWithNodeRef:(void*)arg1 taxonomy:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNode:(id)arg1;
- (bool)isIndexed;
- (bool)isRoot;
- (id)localizedLabel;
- (id)localizedSynonyms;
- (id)name;
- (unsigned long long)networkId;
- (id)parents;
- (double)precision0point6Threshold;
- (unsigned int)sceneClassId;
- (double)searchThreshold;
- (id)taxonomy;
- (void)traverse:(long long)arg1 visitor:(id /* block */)arg2;

@end
