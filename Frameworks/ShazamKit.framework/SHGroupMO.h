
@interface SHGroupMO : NSManagedObject

@property (nonatomic, retain) SHMetadataMO *metadata;
@property (nonatomic, copy) NSString *syncID;
@property (nonatomic, retain) NSSet *tracks;

+ (id)fetchRequest;

@end
