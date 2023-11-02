
@interface HMDCompositeSettingsZoneManager : NSObject <HMDDatabaseDelegate, HMFLogging> {
    HMBCloudZone * _cloudZone;
    NAFuture * _configurationFuture;
    bool  _createZoneIfNotExist;
    <HMDDatabase> * _database;
    HMBLocalZone * _localZone;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSString * _zoneName;
}

@property (retain) HMBCloudZone *cloudZone;
@property (readonly) NAFuture *configurationFuture;
@property (getter=isConfigured, readonly) bool configured;
@property (readonly) bool createZoneIfNotExist;
@property (readonly) <HMDDatabase> *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMBLocalZone *localZone;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *zoneName;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)cloudZone;
- (id)configurationFuture;
- (bool)createZoneIfNotExist;
- (id)database;
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(bool)arg3;
- (void)database:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(bool)arg3;
- (id)database:(id)arg1 willRemoveZoneWithName:(id)arg2 isPrivate:(bool)arg3;
- (id)initWithDatabase:(id)arg1 workQueue:(id)arg2 zoneName:(id)arg3 createZoneIfNotExists:(bool)arg4;
- (bool)isConfigured;
- (id)localZone;
- (id)logIdentifier;
- (void)remove;
- (void)setCloudZone:(id)arg1;
- (void)setLocalZone:(id)arg1;
- (id)workQueue;
- (id)zoneName;

@end
