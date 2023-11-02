
@interface MPConcreteMediaItem : MPMediaItem <MPCacheableConcreteMediaEntity, NSCopying> {
    MPMediaLibrary * _library;
    unsigned long long  _persistentID;
    MPConcreteMediaEntityPropertiesCache * _propertiesCache;
    NSObject<OS_dispatch_queue> * _utilitySerialQueue;
}

@property (nonatomic, readonly, retain) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;

+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
+ (id)createUncachedConcreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 propertiesCache:(id)arg3;
- (id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(bool*)arg2;
- (id)_tokenBinaryIdentifierAsString;
- (id)cachedPropertyValues;
- (id)cachedValueForProperty:(id)arg1 isCached:(bool*)arg2;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)existsInLibrary;
- (void)incrementPlayCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
- (void)invalidateCachedProperties;
- (id)mediaLibrary;
- (unsigned long long)persistentID;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
