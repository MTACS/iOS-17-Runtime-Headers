
@interface PGGraphHomeWorkNode : PGGraphOptimizedNode <PGAssetCollectionFeature, PGGraphLocalizable> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _centroidCoordinate;
    NSString * _label;
    NSString * _uuid;
}

@property (nonatomic, readonly) PGGraphHomeWorkNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedName;
@property (readonly) Class superclass;

+ (id)addressOfHomeWork;
+ (id)filter;
+ (id)homeFilter;
+ (id)ownerOfHomeWork;
+ (id)workFilter;

- (void).cxx_destruct;
- (id)collection;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (unsigned short)domain;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLabel:(id)arg1 uuid:(id)arg2;
- (bool)isHome;
- (id)label;
- (id)localizedName;
- (id)propertyDictionary;

@end
