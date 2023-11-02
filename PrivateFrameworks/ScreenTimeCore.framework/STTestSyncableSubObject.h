
@interface STTestSyncableSubObject : NSManagedObject <STSyncableSubObject>

@property (nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) STTestSyncableObject *root;
@property (readonly) Class superclass;
@property (readonly) <STSerializableManagedObject> *syncableRootObject;

- (id)syncableRootObject;

@end
