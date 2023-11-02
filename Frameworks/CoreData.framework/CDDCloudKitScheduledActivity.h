
@interface CDDCloudKitScheduledActivity : NSManagedObject

@property (nonatomic) unsigned long long activityType;
@property (nonatomic, retain) NSNumber *activityTypeNum;
@property (nonatomic, retain) NSUUID *activityUUID;
@property (nonatomic, retain) NSNumber *isUserRequestedBackupTask;
@property (nonatomic, retain) CDDCloudKitRegisteredClient *registeredClient;
@property (nonatomic, retain) NSDate *scheduledAt;

+ (id)entityName;

- (unsigned long long)activityType;
- (void)populateFromCriteria:(id)arg1;
- (void)setActivityType:(unsigned long long)arg1;
- (id)xpcActivityCriteria;

@end
