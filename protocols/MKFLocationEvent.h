
@protocol MKFLocationEvent <MKFEvent, MKFLocationEventPublicExtensions>

@required

- (void)addUserObject:(id <MKFUser>)arg1;
- (MKFLocationEventDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (CLRegion *)region;
- (void)removeUserObject:(id <MKFUser>)arg1;
- (void)setRegion:(CLRegion *)arg1;
- (void)setUser:(id <MKFUser>)arg1;
- (bool)synchronizeUserRelationWith:(NSArray *)arg1;
- (<MKFUser> *)user;

@end
