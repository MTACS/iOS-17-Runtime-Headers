
@interface PGGraphPetNode : PGGraphOptimizedNode <PGAssetCollectionFeature> {
    NSString * _localIdentifier;
    NSString * _name;
    unsigned long long  _petSpecies;
}

@property (nonatomic, readonly) PGGraphPetNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long petSpecies;
@property (readonly) Class superclass;

+ (id)filter;
+ (id)momentOfPet;
+ (id)ownerOfPet;
+ (id)stringFromPetSpecies:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)collection;
- (id)description;
- (unsigned short)domain;
- (void)enumerateOwnerNodesUsingBlock:(id /* block */)arg1;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;
- (id)initWithLocalIdentifier:(id)arg1 petSpecies:(unsigned long long)arg2 name:(id)arg3;
- (id)label;
- (id)localIdentifier;
- (id)name;
- (id)ownerNodes;
- (unsigned long long)petSpecies;
- (id)propertyDictionary;

@end
