
@interface PGGraphSeasonNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (nonatomic, readonly) PGGraphDateNodeCollection *dateNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *names;
@property (readonly) Class superclass;

+ (Class)nodeClass;
+ (id)seasonNodesForSeasonName:(id)arg1 inGraph:(id)arg2;

- (id)dateNodes;
- (void)enumerateNamesUsingBlock:(id /* block */)arg1;
- (id)featureNodeCollection;
- (id)names;

@end
