
@interface NSAtomicStoreCacheNode : NSObject {
    unsigned long long  __versionNumber;
    NSManagedObjectID * _objectID;
    NSMutableDictionary * _propertyCache;
    void * _reserved1;
}

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) NSMutableDictionary *propertyCache;

+ (bool)accessInstanceVariablesDirectly;
+ (void)initialize;

- (void)_setVersionNumber:(unsigned int)arg1;
- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (void)dealloc;
- (id)init;
- (id)initWithObjectID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (const id*)knownKeyValuesPointer;
- (id)objectID;
- (id)propertyCache;
- (void)setPropertyCache:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end
