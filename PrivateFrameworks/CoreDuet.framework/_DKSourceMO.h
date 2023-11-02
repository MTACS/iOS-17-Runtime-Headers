
@interface _DKSourceMO : NSManagedObject

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *deviceID;
@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSString *intentID;
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic, retain) NSSet *product;
@property (nonatomic, copy) NSString *sourceID;
@property (nonatomic, copy) NSNumber *userID;

+ (id)fetchRequest;

@end
