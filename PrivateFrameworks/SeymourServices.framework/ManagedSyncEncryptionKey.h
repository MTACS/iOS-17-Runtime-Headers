
@interface ManagedSyncEncryptionKey : NSManagedObject

@property (nonatomic, copy) NSString *etag;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *key;
@property (nonatomic, copy) NSString *zoneName;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
