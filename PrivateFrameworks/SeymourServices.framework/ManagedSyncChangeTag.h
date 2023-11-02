
@interface ManagedSyncChangeTag : NSManagedObject

@property (nonatomic, copy) NSString *etag;
@property (nonatomic, copy) NSString *syncIdentifier;
@property (nonatomic, copy) NSString *zoneName;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
