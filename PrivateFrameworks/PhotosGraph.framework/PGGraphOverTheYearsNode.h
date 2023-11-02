
@interface PGGraphOverTheYearsNode : PGGraphPropertylessNode <PGAssetCollectionFeature>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)filter;

- (id)collection;
- (unsigned short)domain;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (id)init;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;

@end
