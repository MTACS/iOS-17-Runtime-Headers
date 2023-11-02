
@interface PGGraphHighlightTranslator : PGGraphEntityTranslator

+ (id)entityClassName;
+ (bool)includesRelationshipChanges;

- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)graphChangesForDeletedLocalIdentifiers:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)graphChangesForInsertedLocalIdentifiers:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)highlightUpdateAssetCountProperties;
- (id)highlightUpdateDateProperties;
- (id)highlightUpdateSearchProperties;
- (id)highlightUpdateTypeProperties;
- (id)momentUpdateTypeByHighlightProperty;

@end
