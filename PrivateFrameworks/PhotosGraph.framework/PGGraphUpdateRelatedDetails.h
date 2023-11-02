
@interface PGGraphUpdateRelatedDetails : NSObject {
    NSMutableSet * _accumulatedIdentifiersForMemoryNodesRelatedToDeletedMoments;
    NSMutableSet * _accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
    NSMutableSet * _accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
}

@property (nonatomic, retain) NSMutableSet *accumulatedIdentifiersForMemoryNodesRelatedToDeletedMoments;
@property (nonatomic, retain) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
@property (nonatomic, retain) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
@property (nonatomic, readonly) NSSet *identifiersForMemoriesRelatedToDeletedMoments;
@property (nonatomic, readonly) NSSet *identifiersForMomentRelatedToDeletedPersons;
@property (nonatomic, readonly) NSSet *identifiersForMomentRelatedToUpdatedPersons;

- (void).cxx_destruct;
- (void)_accumulateMomentIdentifiersInto:(id)arg1 forPersonNodes:(id)arg2;
- (id)_momentNodesFromPersonNodes:(id)arg1;
- (void)accumulateDetailsForDeletedMomentNodes:(id)arg1;
- (void)accumulateDetailsForDeletedPersonNodes:(id)arg1;
- (void)accumulateDetailsForUpdatedPersonNode:(id)arg1 personChange:(id)arg2;
- (id)accumulatedIdentifiersForMemoryNodesRelatedToDeletedMoments;
- (id)accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
- (id)accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
- (id)identifiersForMemoriesRelatedToDeletedMoments;
- (id)identifiersForMomentRelatedToDeletedPersons;
- (id)identifiersForMomentRelatedToUpdatedPersons;
- (id)init;
- (void)setAccumulatedIdentifiersForMemoryNodesRelatedToDeletedMoments:(id)arg1;
- (void)setAccumulatedIdentifiersForMomentNodesRelatedToDeletedPersons:(id)arg1;
- (void)setAccumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons:(id)arg1;

@end
