
@interface PAREvent : NSManagedObject

@property (nonatomic, copy) NSDate *timestamp;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
