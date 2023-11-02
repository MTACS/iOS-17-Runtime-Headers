
@interface ManagedServerOperation : NSManagedObject

@property (nonatomic, copy) NSData *request;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
