
@interface PGGraphPersonTranslator : PGGraphEntityTranslator

+ (id)entityClassName;

- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)graphChangesForDeletedLocalIdentifiers:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)personNodePropertyKeysFromPHPersonPropertyKeys:(id)arg1;
- (id)personTypeProperties;
- (id)stateUpdateProperties;
- (id)verifiedTypeProperties;

@end
