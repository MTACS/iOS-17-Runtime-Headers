
@interface HMBCloudDatabaseStateModel : HMBCloudStateModel {
    CKDatabase * _database;
    NAFuture * _queuedCloudPullFuture;
}

@property (nonatomic, retain) HMBCloudID *cloudID;
@property (nonatomic) CKDatabase *database;
@property (nonatomic, retain) NSDate *lastAdministrativeFetch;
@property (retain) NAFuture *queuedCloudPullFuture;
@property (nonatomic, copy) NSSet *subscriptions;
@property (nonatomic, retain) NSData *subscriptionsData;

+ (id)hmbProperties;

- (void).cxx_destruct;
- (id)database;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;
- (id)queuedCloudPullFuture;
- (void)setDatabase:(id)arg1;
- (void)setQueuedCloudPullFuture:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id)subscriptions;

@end
