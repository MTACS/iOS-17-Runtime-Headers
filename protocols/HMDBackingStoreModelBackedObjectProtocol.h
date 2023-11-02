
@protocol HMDBackingStoreModelBackedObjectProtocol <NSObject>

@required

- (NSArray *)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (NSArray *)modelBackedObjects;
- (Class)modelClass;
- (NSUUID *)modelIdentifier;
- (HMDBackingStoreModelObject *)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (NSUUID *)modelParentIdentifier;

@optional

- (id)initWithModelObject:(HMDBackingStoreModelObject *)arg1 parent:(id)arg2 error:(id*)arg3;
- (bool)isBackingStorageEqual:(id)arg1;

@end
