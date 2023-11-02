
@interface PGGraphBusinessNode : PGGraphOptimizedNode <PGAssetCollectionFeature, PGGraphPortraitNamedEntity> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinates;
    unsigned long long  _muid;
    NSString * _name;
    double  _radius;
    long long  _venueCapacity;
}

@property (nonatomic, readonly) NSSet *businessCategories;
@property (nonatomic, readonly) PGGraphBusinessNodeCollection *collection;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) PPNamedEntity *pg_namedEntity;
@property (nonatomic, readonly) NSSet *publicEventNodes;
@property (nonatomic, readonly) double radius;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long venueCapacity;

+ (id)categoryOfBusiness;
+ (id)filter;
+ (id)filterWithMuid:(unsigned long long)arg1;
+ (id)momentOfBusiness;
+ (id)publicEventOfBusiness;

- (void).cxx_destruct;
- (id)UUID;
- (id)associatedNodesForRemoval;
- (id)businessCategories;
- (id)collection;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinates;
- (id)description;
- (unsigned short)domain;
- (void)enumerateBusinessCategoryNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;
- (id)initWithMuid:(unsigned long long)arg1 name:(id)arg2 venueCapacity:(long long)arg3 coordinates:(struct CLLocationCoordinate2D { double x1; double x2; })arg4 radius:(double)arg5;
- (id)keywordDescription;
- (id)label;
- (unsigned long long)muid;
- (id)name;
- (id)pg_namedEntity;
- (id)propertyDictionary;
- (id)publicEventNodes;
- (double)radius;
- (long long)venueCapacity;

@end
