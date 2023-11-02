
@interface EnergyWindowsTracker : NSManagedObject

@property (nonatomic, copy) NSString *gridID;
@property (nonatomic, copy) NSDate *lastAccessed;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
