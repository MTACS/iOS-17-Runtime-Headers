
@interface ManagedDirtySyncZone : NSManagedObject

@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSString *zoneName;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
