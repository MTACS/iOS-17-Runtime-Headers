
@interface PGUpNextMomentCollectionBasedMatchingInfo : NSObject <PGUpNextMatchingInfo> {
    bool  _isTripMemory;
    bool  _isTripMemoryIsResolved;
    PGGraphMeaningNodeCollection * _meaningNodes;
    PGGraphMomentNodeCollection * _momentNodes;
    PGGraphPersonNodeCollection * _personNodes;
    NSDate * _representativeDate;
    bool  _representativeDateIsResolved;
    CLLocation * _representativeLocation;
    bool  _representativeLocationIsResolved;
    PGGraphSceneNodeCollection * _sceneNodes;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTripMemory;
@property (nonatomic, readonly) PGGraphMeaningNodeCollection *meaningNodes;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) PGGraphPersonNodeCollection *personNodes;
@property (nonatomic, readonly) NSDate *representativeDate;
@property (nonatomic, readonly) CLLocation *representativeLocation;
@property (nonatomic, readonly) PGGraphSceneNodeCollection *sceneNodes;
@property (readonly) Class superclass;

+ (id)representativeDateForMomentNodes:(id)arg1;
+ (id)representativeDateForMomentNodesUniversalDateInterval:(id)arg1;
+ (id)representativeLocationForLocations:(id)arg1;
+ (id)representativeLocationForMomentNodes:(id)arg1;
+ (id)representativeMeaningNodesForEligibleMeaningNodesByMomentNode:(id)arg1;
+ (id)representativeMeaningNodesForMomentNodes:(id)arg1;
+ (id)representativePersonNodesForMomentNodes:(id)arg1;
+ (id)representativePersonNodesForPersonNodesByMomentNode:(id)arg1;
+ (id)representativeSceneNodesForMomentNodes:(id)arg1;
+ (id)representativeSceneNodesForSceneNodesByMomentNode:(id)arg1;

- (void).cxx_destruct;
- (bool)_implIsTripMemory;
- (id)debugInfo;
- (id)initWithMomentNodes:(id)arg1;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 sceneNodes:(id)arg3 meaningNodes:(id)arg4 isTripMemory:(bool)arg5 representativeLocation:(id)arg6 representativeDate:(id)arg7;
- (bool)isTripMemory;
- (id)meaningNodes;
- (id)memoryFeatureNodes;
- (id)momentNodes;
- (id)personNodes;
- (id)representativeDate;
- (id)representativeLocation;
- (id)sceneNodes;

@end
