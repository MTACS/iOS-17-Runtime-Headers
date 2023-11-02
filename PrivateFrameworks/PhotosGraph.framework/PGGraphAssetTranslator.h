
@interface PGGraphAssetTranslator : PGGraphEntityTranslator

+ (id)entityClassName;

- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)highlightUpdateTypeByAssetProperty;
- (id)momentUpdateTypeByAssetProperty;

@end
