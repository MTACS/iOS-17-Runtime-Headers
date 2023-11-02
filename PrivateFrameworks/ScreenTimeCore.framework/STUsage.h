
@interface STUsage : NSManagedObject

@property (nonatomic, retain) NSSet *blocks;
@property (nonatomic, retain) STCoreDevice *device;
@property (nonatomic, retain) NSDate *lastEventDate;
@property (nonatomic, retain) NSDate *lastUpdatedDate;
@property (nonatomic, retain) STCoreUser *user;

+ (id)fetchRequestMatchingUser:(id)arg1 device:(id)arg2;

@end
