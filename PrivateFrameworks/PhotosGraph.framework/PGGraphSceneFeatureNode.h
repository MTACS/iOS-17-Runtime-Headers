
@interface PGGraphSceneFeatureNode : PGGraphPropertylessNode <PGAssetCollectionFeature> {
    NSString * _label;
}

@property (nonatomic, readonly) PGGraphSceneFeatureNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)filter;
+ (id)filterForSceneName:(id)arg1;
+ (id)filterForSceneNames:(id)arg1;
+ (id)momentOfSceneFeature;

- (void).cxx_destruct;
- (id)collection;
- (unsigned short)domain;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;

@end
