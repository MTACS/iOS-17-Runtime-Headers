
@interface CLSTaxonomyBasedModel : NSObject {
    NSString * _identifier;
    PFSceneTaxonomy * _sceneTaxonomy;
    NSMutableDictionary * _signalNodeBySignalIdentifier;
    NSMutableDictionary * _signalNodeBySignalName;
}

@property (readonly) NSString *identifier;
@property (readonly) PFSceneTaxonomy *sceneTaxonomy;

- (void).cxx_destruct;
- (id)confidenceThresholdBySceneIdentifierForSceneNames:(id)arg1 withThresholdType:(unsigned long long)arg2;
- (id)identifier;
- (id)initWithSceneTaxonomy:(id)arg1;
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;
- (bool)nodeIsSupported:(id)arg1;
- (bool)nodeRefIsSupported:(void*)arg1;
- (id)sceneIdentifierBySceneNameForSceneNames:(id)arg1;
- (id)sceneIdentifiersForSceneNames:(id)arg1 includingChildScenes:(bool)arg2;
- (id)sceneIdentifiersFromSceneClassifications:(id)arg1 passingThresholdOfType:(unsigned long long)arg2;
- (id)sceneNamesFromSceneClassifications:(id)arg1 passingThresholdOfType:(unsigned long long)arg2;
- (id)sceneTaxonomy;
- (id)taxonomyNodeForName:(id)arg1;
- (id)taxonomyNodeForSceneIdentifier:(unsigned int)arg1;
- (void*)taxonomyNodeRefForName:(id)arg1;
- (void*)taxonomyNodeRefForSceneIdentifier:(unsigned int)arg1;

@end
