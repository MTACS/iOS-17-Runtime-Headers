
@interface PGGraphFrequentLocationNode : PGGraphOptimizedNode <PGAssetCollectionFeature> {
    NSDateInterval * _universalDateInterval;
}

@property (readonly) PGGraphAddressNode *addressNode;
@property (nonatomic, readonly) PGGraphFrequentLocationNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSDateInterval *universalDateInterval;
@property (readonly) NSDate *universalEndDate;
@property (readonly) NSDate *universalStartDate;

+ (id)addressOfFrequentLocation;
+ (id)filter;
+ (id)momentOfFrequentLocation;

- (void).cxx_destruct;
- (id)addressNode;
- (id)collection;
- (id)description;
- (unsigned short)domain;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithUniversalDateInterval:(id)arg1;
- (id)label;
- (id)name;
- (unsigned long long)numberOfMomentNodes;
- (id)propertyDictionary;
- (id)universalDateInterval;
- (id)universalEndDate;
- (id)universalStartDate;

@end
