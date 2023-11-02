
@interface PGMeaningCriteriaMomentNodeCache : NSObject {
    BOOL  _happensAtFrequentLocation;
    BOOL  _happensPartiallyAtMyHome;
    BOOL  _happensPartiallyAtMyHomeOrWork;
    BOOL  _happensPartiallyAtMyWork;
    BOOL  _hasAddressNodes;
    PGGraphMeNodeCollection * _meNodeAsCollection;
    PGGraphMomentNode * _momentNode;
    PGGraphMomentNodeCollection * _momentNodeAsCollection;
    unsigned long long  _partsOfDay;
    NSSet * _personNodes;
    NSSet * _poiNodes;
    PGGraphAddressNodeCollection * _preciseAddressNodeCollection;
    NSSet * _preciseAddressNodes;
    NSSet * _preciseAreaNodes;
    PGGraphPublicEventCategoryNodeCollection * _publicEventCategoryNodes;
    NSSet * _roiNodes;
    NSArray * _sceneEdges;
    unsigned long long  _significantPartsOfDay;
    NSSet * _specialPOINodes;
}

@property (readonly) bool happensAtFrequentLocation;
@property (readonly) bool happensPartiallyAtMyHome;
@property (readonly) bool happensPartiallyAtMyHomeOrWork;
@property (readonly) bool happensPartiallyAtMyWork;
@property (readonly) bool hasAddressNodes;
@property (readonly) unsigned long long partsOfDay;
@property (readonly) NSSet *personNodes;
@property (readonly) NSSet *poiNodes;
@property (readonly) NSSet *preciseAddressNodes;
@property (readonly) NSSet *preciseAreaNodes;
@property (readonly) PGGraphPublicEventCategoryNodeCollection *publicEventCategoryNodes;
@property (readonly) NSSet *roiNodes;
@property (nonatomic, retain) NSArray *sceneEdges;
@property (readonly) unsigned long long significantPartsOfDay;
@property (readonly) NSSet *specialPOINodes;

- (void).cxx_destruct;
- (void)_computeHomeWork;
- (void)enumerateSceneEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (bool)happensAtFrequentLocation;
- (bool)happensPartiallyAtMyHome;
- (bool)happensPartiallyAtMyHomeOrWork;
- (bool)happensPartiallyAtMyWork;
- (bool)hasAddressNodes;
- (id)initWithMomentNode:(id)arg1;
- (unsigned long long)partsOfDay;
- (id)personNodes;
- (id)poiNodes;
- (id)preciseAddressNodeCollection;
- (id)preciseAddressNodes;
- (id)preciseAreaNodes;
- (id)publicEventCategoryNodes;
- (id)roiNodes;
- (id)sceneEdges;
- (void)setSceneEdges:(id)arg1;
- (unsigned long long)significantPartsOfDay;
- (id)specialPOINodes;

@end
