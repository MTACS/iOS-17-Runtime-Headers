
@interface MTLModel : NSObject <MTLModel, NSCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)dictionaryValueFromArchivedExternalRepresentation:(id)arg1 version:(unsigned long long)arg2;
+ (id)encodingBehaviorsByPropertyKey;
+ (void)enumeratePropertiesUsingBlock:(id /* block */)arg1;
+ (void)generateAndCacheStorageBehaviors;
+ (unsigned long long)modelVersion;
+ (id)modelWithDictionary:(id)arg1 error:(id*)arg2;
+ (id)permanentPropertyKeys;
+ (id)propertyKeys;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)transitoryPropertyKeys;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3;
- (id)description;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeValueForKey:(id)arg1 fromModel:(id)arg2;
- (void)mergeValuesForKeysFromModel:(id)arg1;
- (bool)validate:(id*)arg1;

@end
