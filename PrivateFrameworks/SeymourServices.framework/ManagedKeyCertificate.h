
@interface ManagedKeyCertificate : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *remoteURL;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
