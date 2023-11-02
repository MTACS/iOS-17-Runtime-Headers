
@interface PHShareRelationshipChangeRequestHelper : PHRelationshipChangeRequestHelper {
    PHObject * _originalAsset;
    PHObject<PHShare> * _originalShare;
}

@property (nonatomic) PHObject *originalAsset;
@property (nonatomic) PHObject<PHShare> *originalShare;

- (void).cxx_destruct;
- (id)_mutableParticipantsObjectIDsAndUUIDs;
- (void)_prepareParticipantsHelperIfNeeded;
- (void)_prepareParticipantsWithFetchResult:(id)arg1;
- (void)addParticipants:(id)arg1 toChangeRequest:(id)arg2;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)originalAsset;
- (id)originalShare;
- (void)removeParticipants:(id)arg1 toChangeRequest:(id)arg2;
- (void)setOriginalAsset:(id)arg1;
- (void)setOriginalShare:(id)arg1;
- (void)setParticipants:(id)arg1 toChangeRequest:(id)arg2;

@end
