
@interface PGGraphPerformerNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *performerIdentifiers;
@property (readonly) Class superclass;

+ (Class)nodeClass;

- (id)featureNodeCollection;
- (id)performerIdentifiers;

@end
