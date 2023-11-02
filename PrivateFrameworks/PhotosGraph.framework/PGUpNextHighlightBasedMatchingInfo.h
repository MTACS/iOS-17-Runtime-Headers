
@interface PGUpNextHighlightBasedMatchingInfo : PGUpNextMomentCollectionBasedMatchingInfo <PGUpNextMatchingTarget> {
    PGGraphHighlightNodeCollection * _highlightNodeAsCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphHighlightNodeCollection *highlightNodeAsCollection;
@property (nonatomic, readonly) bool isTripMemory;
@property (nonatomic, readonly) PGGraphMeaningNodeCollection *meaningNodes;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) unsigned long long nodeIdentifier;
@property (nonatomic, readonly) PGGraphPersonNodeCollection *personNodes;
@property (nonatomic, readonly) NSDate *representativeDate;
@property (nonatomic, readonly) CLLocation *representativeLocation;
@property (nonatomic, readonly) PGGraphSceneNodeCollection *sceneNodes;
@property (readonly) Class superclass;

+ (id)matchingInfosWithHighlightNodes:(id)arg1;

- (void).cxx_destruct;
- (id)debugInfo;
- (id)highlightNodeAsCollection;
- (id)initWithHighlightNodeAsCollection:(id)arg1;
- (id)initWithHighlightNodeAsCollection:(id)arg1 momentNodes:(id)arg2;
- (unsigned long long)nodeIdentifier;

@end
