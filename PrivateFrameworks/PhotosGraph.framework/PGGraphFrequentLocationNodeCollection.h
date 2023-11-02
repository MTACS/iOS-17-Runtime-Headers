
@interface PGGraphFrequentLocationNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (nonatomic, readonly) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) PGGraphAddressNodeCollection *preciseAddressNodes;
@property (readonly) Class superclass;

+ (Class)nodeClass;

- (id)addressNodes;
- (void)enumerateNodesAsCollectionsSortedByUniversalEndDateWithOrderAscending:(bool)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateUniversalEndDatesUsingBlock:(id /* block */)arg1;
- (id)featureNodeCollection;
- (id)momentNodes;
- (id)preciseAddressNodes;

@end
