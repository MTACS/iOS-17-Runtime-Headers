
@interface PGGraphHomeWorkNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (nonatomic, readonly) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphPersonNodeCollection *ownerNodes;
@property (nonatomic, readonly) PGGraphAddressNodeCollection *preciseAddressNodes;
@property (readonly) Class superclass;

+ (id)homeNodesInGraph:(id)arg1;
+ (Class)nodeClass;
+ (id)workNodesInGraph:(id)arg1;

- (id)addressNodes;
- (id)featureNodeCollection;
- (id)ownerNodes;
- (id)preciseAddressNodes;

@end
