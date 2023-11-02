
@interface PGGraphPerformerNode : PGGraphOptimizedNode <PGAssetCollectionFeature, PGGraphPortraitNamedEntity> {
    NSString * _name;
    NSString * _uuid;
}

@property (nonatomic, readonly) PGGraphPerformerNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) PPNamedEntity *pg_namedEntity;
@property (readonly) Class superclass;
@property (readonly) NSString *uuid;

+ (id)filter;

- (void).cxx_destruct;
- (id)collection;
- (id)description;
- (unsigned short)domain;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)label;
- (id)name;
- (id)pg_namedEntity;
- (id)propertyDictionary;
- (id)uuid;

@end
