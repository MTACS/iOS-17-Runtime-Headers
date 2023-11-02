
@interface PGGraphPortraitDonationEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {
    NSCountedSet * _addressNodes;
    NSCountedSet * _businessNodes;
    NSMutableDictionary * _datesByAddressNode;
    NSCountedSet * _meaningNodes;
    NSCountedSet * _performerNodes;
    NSCountedSet * _poiNodes;
    NSCountedSet * _publicEventNodes;
    NSCountedSet * _roiNodes;
}

@property (nonatomic, readonly) NSCountedSet *addressNodes;
@property (nonatomic, readonly) NSCountedSet *businessNodes;
@property (nonatomic, readonly) NSMutableDictionary *datesByAddressNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSCountedSet *meaningNodes;
@property (nonatomic, readonly) NSCountedSet *performerNodes;
@property (nonatomic, readonly) NSCountedSet *poiNodes;
@property (nonatomic, readonly) NSCountedSet *publicEventNodes;
@property (nonatomic, readonly) NSCountedSet *roiNodes;
@property (readonly) Class superclass;

+ (id)graphDonationBundleId;

- (void).cxx_destruct;
- (void)_accumulateKnowledgeNodesFromMomentNodes:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)_donateKnowledge:(id)arg1 donationDate:(id)arg2 loggingConnection:(id)arg3;
- (void)_donateKnowledgeWithManager:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)_knowledgeToDonateFromAccumulatedNodesWithProgressBlock:(id /* block */)arg1;
- (id)_locationNamedEntitiesFromAddressNodes:(id)arg1 dates:(id)arg2 currentProgress:(double*)arg3 progressFraction:(double)arg4 progressBlock:(id /* block */)arg5;
- (id)_namedEntitiesFromNamedEntityNodes:(id)arg1 currentProgress:(double*)arg2 progressFraction:(double)arg3 progressBlock:(id /* block */)arg4;
- (void)_prepareForKnowledgeDonation;
- (bool)_shouldProcessGraphUpdate:(id)arg1;
- (id)_topicsFromTopicNodes:(id)arg1 currentProgress:(double*)arg2 progressFraction:(double)arg3 progressBlock:(id /* block */)arg4;
- (id)addressNodes;
- (id)businessNodes;
- (id)datesByAddressNode;
- (void)enrichDataModelWithManager:(id)arg1 curationContext:(id)arg2 graphUpdateInventory:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)meaningNodes;
- (id)performerNodes;
- (id)poiNodes;
- (id)publicEventNodes;
- (id)roiNodes;

@end
