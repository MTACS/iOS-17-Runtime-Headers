
@interface ManagedConfiguration : NSManagedObject

@property (nonatomic, copy) NSData *data;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
