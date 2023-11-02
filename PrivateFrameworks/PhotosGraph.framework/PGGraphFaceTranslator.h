
@interface PGGraphFaceTranslator : PGGraphEntityTranslator

+ (id)entityClassName;
+ (bool)includesRelationshipChanges;

- (id)_momentChangesForFaceLocalIdentifiers:(id)arg1;
- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)graphChangesForDeletedLocalIdentifiers:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)graphChangesForInsertedLocalIdentifiers:(id)arg1 progressBlock:(id /* block */)arg2;

@end
