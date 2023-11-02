
@protocol MKFPresenceEvent <MKFEvent, MKFPresenceEventPublicExtensions>

@required

- (NSNumber *)activation;
- (void)addUsersObject:(id <MKFUser>)arg1;
- (MKFPresenceEventDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSString *)presenceType;
- (void)removeUsersObject:(id <MKFUser>)arg1;
- (void)setActivation:(NSNumber *)arg1;
- (void)setPresenceType:(NSString *)arg1;
- (bool)synchronizeUsersRelationWith:(NSArray *)arg1;
- (NSArray *)users;

@end
