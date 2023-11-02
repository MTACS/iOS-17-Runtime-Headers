
@protocol MKFUserAccessCode <MKFHomeAccessCode, MKFUserAccessCodePublicExtensions>

@required

- (MKFUserAccessCodeDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (<MKFUser> *)user;

@end
