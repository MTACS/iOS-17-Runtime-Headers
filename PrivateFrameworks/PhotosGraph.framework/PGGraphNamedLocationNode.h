
@interface PGGraphNamedLocationNode : PGGraphLocationNode <MAUniquelyIdentifiableNode> {
    NSString * _name;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (id)filterBySettingNameNotEmptyPropertyOnFilter:(id)arg1;
+ (id)filterWithName:(id)arg1;
+ (id)filterWithUUID:(id)arg1;
+ (void)setName:(id)arg1 onLocationNodeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;
+ (void)setUUID:(id)arg1 onLocationNodeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (unsigned short)domain;
- (id)featureIdentifier;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)name;
- (id)propertyDictionary;
- (id)uniquelyIdentifyingFilter;

@end
