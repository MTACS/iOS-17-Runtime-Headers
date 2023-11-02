
@interface ICCloudState : NSManagedObject

@property (nonatomic, retain) ICCloudSyncingObject *cloudSyncingObject;
@property (nonatomic) long long currentLocalVersion;
@property (nonatomic) bool inCloud;
@property (nonatomic) long long latestVersionSyncedToCloud;
@property (nonatomic, retain) NSDate *localVersionDate;

- (bool)isInCloud;

@end
