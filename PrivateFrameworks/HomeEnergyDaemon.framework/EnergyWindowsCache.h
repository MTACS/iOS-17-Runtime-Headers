
@interface EnergyWindowsCache : NSManagedObject

@property (nonatomic, copy) NSData *energyWindows;
@property (nonatomic, copy) NSString *gridID;
@property (nonatomic, copy) NSDate *insertTime;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
