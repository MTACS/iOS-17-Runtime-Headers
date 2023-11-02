
@interface BlacklistMO : NSManagedObject

@property (nonatomic, retain) NSSet *bss;
@property (nonatomic, retain) NSSet *network;
@property (nonatomic) short reason;
@property (nonatomic) short subReason;
@property (nonatomic, copy) NSDate *timestamp;

+ (id)entityName;
+ (id)fetchRequest;

@end
