
@interface _DKSyncPeerMO : NSManagedObject

@property (nonatomic, copy) NSString *cloudID;
@property (nonatomic, copy) NSString *deviceID;
@property (nonatomic, copy) NSDate *lastSeenDate;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *rapportID;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, copy) NSString *version;

+ (id)fetchRequest;

@end
