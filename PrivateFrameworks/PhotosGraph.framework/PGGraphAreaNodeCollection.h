
@interface PGGraphAreaNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection, PGGraphLocationOrAreaNodeCollection>

@property (nonatomic, readonly) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)areaNodesForNames:(id)arg1 inGraph:(id)arg2;
+ (Class)nodeClass;

- (id)addressNodes;
- (void)enumerateIdentifiersSortedByPopularityScoreWithBlock:(id /* block */)arg1;
- (id)featureNodeCollection;
- (id)nonBlockedAreaNodes;

@end
