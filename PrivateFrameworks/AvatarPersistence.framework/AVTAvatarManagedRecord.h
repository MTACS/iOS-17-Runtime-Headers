
@interface AVTAvatarManagedRecord : NSManagedObject

@property (nonatomic, retain) NSData *avatarData;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSDate *orderDate;

@end
