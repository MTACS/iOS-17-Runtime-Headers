
@interface HMCDAccessoryModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
