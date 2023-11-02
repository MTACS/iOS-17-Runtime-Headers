
@interface PGGraphHolidayNode : PGGraphOptimizedNode <PGAssetCollectionFeature, PGGraphLocalizable> {
    unsigned int  _category;
    NSString * _name;
}

@property (nonatomic) unsigned long long category;
@property (nonatomic, readonly) PGGraphHolidayNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedName;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

+ (id)datesOfCelebration;
+ (id)filter;
+ (id)holidayNodeFilterWithCategory:(unsigned long long)arg1;
+ (id)holidayNodeFilterWithNames:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)category;
- (id)collection;
- (id)description;
- (unsigned short)domain;
- (void)enumerateCelebratingMomentNodesUsingBlock:(id /* block */)arg1;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2;
- (id)label;
- (id)localizedName;
- (id)name;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (void)setCategory:(unsigned long long)arg1;

@end
