
@interface DRSCKConfigMO : NSManagedObject

@property (nonatomic) short containerEnvironment;
@property (nonatomic) bool overridesDefault;
@property (nonatomic) short rapidEnvironment;

+ (id)fetchRequest;

@end
