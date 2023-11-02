
@interface PGDejunkerDeduper_CLSCurationItem : PGDejunkerDeduper {
    NSDictionary * _averageFaceQualityByItemIdentifier;
    NSDictionary * _peopleScenesByItemIdentifier;
    NSDictionary * _personLocalIdentifiersByItemIdentifier;
    NSSet * _verifiedPersonLocalIdentifiers;
}

@property (nonatomic, retain) NSSet *verifiedPersonLocalIdentifiers;

- (void).cxx_destruct;
- (void)_buildCachesWithItems:(id)arg1 options:(id)arg2;
- (id)bestItemInItems:(id)arg1 options:(id)arg2;
- (id)bestItemsInItems:(id)arg1 options:(id)arg2;
- (id)debugPersonStringForItem:(id)arg1;
- (id)dejunkedDedupedItemIdentifiersWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3;
- (id)dejunkedDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1;
- (id)featureWithItem:(id)arg1;
- (bool)isJunkForItem:(id)arg1;
- (bool)item:(id)arg1 isStrongRequiredWithOptions:(id)arg2;
- (bool)item:(id)arg1 isWeaklyRequiredWithOptions:(id)arg2;
- (id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2;
- (id)requiredItemsInItems:(id)arg1 options:(id)arg2 containStronglyRequiredItems:(bool*)arg3;
- (void)setVerifiedPersonLocalIdentifiers:(id)arg1;
- (id)verifiedPersonLocalIdentifiers;

@end
