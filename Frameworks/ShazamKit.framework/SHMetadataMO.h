
@interface SHMetadataMO : NSManagedObject

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) SHGroupMO *group;
@property (nonatomic, retain) SHTrackMO *track;

+ (id)fetchRequest;

@end
