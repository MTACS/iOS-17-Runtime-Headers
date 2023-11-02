
@interface CLSInvestigationHelper : NSObject {
    NSMutableDictionary * _maxTaxonomyNodeLevelBySceneIdentifierBySceneModelIdentifier;
    NSMutableDictionary * _parentTaxonomyNodesBySceneIdentifierBySceneModelIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _parentTaxonomyNodesLock;
    NSMutableDictionary * _taxonomyNodeBySceneIdentifierBySceneModelIdentifier;
    NSMutableDictionary * _taxonomyNodesLevelsAndWeightsBySceneIdentifierBySceneModelIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _taxonomyNodesLevelsAndWeightsLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _taxonomyNodesLock;
}

- (void).cxx_destruct;
- (unsigned long long)_maxLevelWithTaxonomyNode:(id)arg1;
- (void)enumerateTaxonomyNodesLevelsAndWeightsStartingWithNode:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)parentNodesOfTaxonomyNode:(id)arg1;
- (id)taxonomyNodeForSceneIdentifier:(unsigned int)arg1 sceneModel:(id)arg2;

@end
