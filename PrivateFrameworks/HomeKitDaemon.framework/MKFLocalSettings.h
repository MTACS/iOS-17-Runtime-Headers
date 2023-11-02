
@interface MKFLocalSettings : NSManagedObject

@property (nonatomic) bool accessAllowedWhenLocked;

+ (id)fetchRequest;

@end
