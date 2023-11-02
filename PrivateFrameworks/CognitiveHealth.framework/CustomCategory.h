
@interface CustomCategory : NSManagedObject

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *category;

+ (id)fetchRequest;

@end
