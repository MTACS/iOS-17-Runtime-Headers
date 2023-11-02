
@protocol MKFPresenceBulletinCondition <MKFBulletinCondition, MKFPresenceBulletinConditionPublicExtensions>

@required

- (void)addUsersObject:(id <MKFUser>)arg1;
- (MKFPresenceBulletinConditionDatabaseID *)databaseID;
- (<MKFUser> *)findUsersRelationWithModelID:(NSUUID *)arg1;
- (<MKFHome> *)home;
- (<MKFUser> *)materializeOrCreateUsersRelationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (NSNumber *)presenceEventType;
- (NSNumber *)presenceEventUserType;
- (void)removeUsersObject:(id <MKFUser>)arg1;
- (void)setPresenceEventType:(NSNumber *)arg1;
- (void)setPresenceEventUserType:(NSNumber *)arg1;
- (NSArray *)users;

@end
