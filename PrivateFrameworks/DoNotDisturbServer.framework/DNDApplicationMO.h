
@interface DNDApplicationMO : NSManagedObject

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NSSet *settings;
@property (nonatomic, copy) NSString *teamIdentifier;

+ (id)fetchRequest;

@end
