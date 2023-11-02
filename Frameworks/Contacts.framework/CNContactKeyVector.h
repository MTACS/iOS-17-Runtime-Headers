
@interface CNContactKeyVector : NSObject <CNKeyDescriptor_Private, NSMutableCopying> {
    long long  _bitBuckets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)freezeIfClassIsImmutable:(id)arg1;
+ (id)keyVector;
+ (id)keyVectorWithAllKeys;
+ (id)keyVectorWithKey:(id)arg1;
+ (id)keyVectorWithKeys:(id)arg1;
+ (bool)supportsSecureCoding;

- (long long*)_bitBuckets;
- (void)_checkStorageSize;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)arg1;
- (id)_cn_ignorableKeys;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (bool)containsAllKeys;
- (bool)containsKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumeratePropertiesUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithAllKeys;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeys:(id)arg1;
- (bool)intersectsKeyVector:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToKeyVector:(id)arg1;
- (bool)isSubsetOfKeyVector:(id)arg1;
- (id)keyVectorByAddingKey:(id)arg1;
- (id)keyVectorByAddingKeys:(id)arg1;
- (id)keyVectorByAddingKeysFromKeyVector:(id)arg1;
- (id)keyVectorByRemovingKeys:(id)arg1;
- (id)keyVectorByRemovingKeysFromKeyVector:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
