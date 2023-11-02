
@interface MKFObjectDatabaseID : HMFObject {
    NSManagedObjectID * _objectID;
}

@property (readonly, copy) NSManagedObjectID *objectID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMKFObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectID;

@end
