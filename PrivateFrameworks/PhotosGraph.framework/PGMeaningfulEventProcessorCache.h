
@interface PGMeaningfulEventProcessorCache : NSObject {
    MABinaryAdjacency * _addressNodesByMomentNode;
    MABinaryAdjacency * _dateNodesByMomentNode;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    MABinaryAdjacency * _mobilityNodesByMomentNode;
    PGGraphMomentNodeCollection * _momentNodes;
    MABinaryAdjacency * _partOfDayNodesByMomentNode;
    MABinaryAdjacency * _personNodesByMomentNode;
    MABinaryAdjacency * _poiNodesByMomentNode;
    MABinaryAdjacency * _preciseAddressNodesByMomentNode;
    MABinaryAdjacency * _publicEventCategoryNodesByMomentNode;
    MABinaryAdjacency * _reliableSceneNodesByMomentNode;
    MABinaryAdjacency * _roiNodesByMomentNode;
    MABinaryAdjacency * _sceneNodesByMomentNode;
    MABinaryAdjacency * _significantPartOfDayNodesByMomentNode;
    MABinaryAdjacency * _socialGroupNodesByMomentNode;
}

@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;

- (void).cxx_destruct;
- (id)addressNodesForMomentNodes:(id)arg1;
- (id)dateNodesForMomentNodes:(id)arg1;
- (id)initWithMomentNodes:(id)arg1;
- (id)mobilityNodesForMomentNodes:(id)arg1;
- (id)momentNodes;
- (unsigned long long)partsOfDayForMomentNodes:(id)arg1;
- (id)peopleNodesForMomentNodes:(id)arg1;
- (id)poiNodesWithNonzeroConfidenceForMomentNodes:(id)arg1;
- (id)preciseAddressNodesForMomentNodes:(id)arg1;
- (id)publicEventCategoryNodesForMomentNodes:(id)arg1;
- (id)reliableSceneNodesForMomentNodes:(id)arg1;
- (id)roiNodesWithNonzeroConfidenceForMomentNodes:(id)arg1;
- (id)sceneNodesForMomentNodes:(id)arg1;
- (unsigned long long)significantPartsOfDayForMomentNodes:(id)arg1;
- (id)socialGroupNodesForMomentNodes:(id)arg1;

@end
