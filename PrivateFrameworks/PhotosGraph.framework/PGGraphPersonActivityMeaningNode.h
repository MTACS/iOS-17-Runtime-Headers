
@interface PGGraphPersonActivityMeaningNode : PGGraphOptimizedNode <PGAssetCollectionFeature> {
    NSString * _label;
    NSString * _personLocalIdentifier;
}

@property (nonatomic, readonly) PGGraphPersonActivityMeaningNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personLocalIdentifier;
@property (readonly) Class superclass;

+ (id)filter;
+ (id)filterWithActivityLabels:(id)arg1;
+ (id)filterWithPersonLocalIdentifiers:(id)arg1 label:(id)arg2;
+ (id)momentOfPersonActivity;
+ (id)personOfPersonActivity;

- (void).cxx_destruct;
- (id)collection;
- (unsigned short)domain;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithPersonLocalIdentifier:(id)arg1 activity:(id)arg2;
- (id)label;
- (id)personLocalIdentifier;
- (id)propertyDictionary;

@end
