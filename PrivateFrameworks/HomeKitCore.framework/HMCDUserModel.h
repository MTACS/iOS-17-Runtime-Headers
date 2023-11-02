
@interface HMCDUserModel : NSManagedObject

@property (nonatomic, copy) NSString *handle;
@property (nonatomic, copy) NSUUID *modelID;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
