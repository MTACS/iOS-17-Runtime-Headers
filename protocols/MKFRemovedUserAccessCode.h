
@protocol MKFRemovedUserAccessCode <MKFHomeAccessCode, MKFRemovedUserAccessCodePublicExtensions>

@required

- (MKFRemovedUserAccessCodeDatabaseID *)databaseID;
- (NSDate *)dateRemoved;
- (NSUUID *)hh2ModelID;
- (<MKFHome> *)home;
- (void)setDateRemoved:(NSDate *)arg1;
- (void)setHh2ModelID:(NSUUID *)arg1;
- (void)setUserID:(NSString *)arg1;
- (void)setUserModelID:(NSUUID *)arg1;
- (void)setUserName:(NSString *)arg1;
- (NSString *)userID;
- (NSUUID *)userModelID;
- (NSString *)userName;

@end
