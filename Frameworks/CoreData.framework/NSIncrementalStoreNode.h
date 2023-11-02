
@interface NSIncrementalStoreNode : NSObject {
    NSManagedObjectID * _objectID;
    id  _propertyCache;
    void * _reserved1;
    unsigned long long  _versionNumber;
}

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) unsigned long long version;

+ (void)initialize;

- (id)_propertyCache;
- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (void)dealloc;
- (id)description;
- (id)initWithObjectID:(id)arg1 fromSQLRow:(id)arg2;
- (id)initWithObjectID:(id)arg1 withValues:(id)arg2 version:(unsigned long long)arg3;
- (const id*)knownKeyValuesPointer;
- (id)objectID;
- (void)updateWithValues:(id)arg1 version:(unsigned long long)arg2;
- (id)valueForPropertyDescription:(id)arg1;
- (unsigned long long)version;

@end
