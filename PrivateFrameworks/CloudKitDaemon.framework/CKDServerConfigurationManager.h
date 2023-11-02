
@interface CKDServerConfigurationManager : NSObject <CKDSystemAvailabilityWatcher> {
    NSOperationQueue * _configurationQueue;
    NSMutableDictionary * _containerSpecificInfoOperations;
    NSOperationQueue * _containerSpecificInfoQueue;
    NSMutableDictionary * _containerSpecificInfos;
    CKDServerConfiguration * _globalConfiguration;
    NSMutableSet * _globalConfigurationOps;
    int  _iCloudEnvNotifToken;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _shouldDropAllConfigurations;
}

@property (nonatomic, readonly) NSOperationQueue *configurationQueue;
@property (nonatomic, readonly) NSMutableDictionary *containerSpecificInfoOperations;
@property (nonatomic, readonly) NSOperationQueue *containerSpecificInfoQueue;
@property (nonatomic, retain) NSMutableDictionary *containerSpecificInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKDServerConfiguration *globalConfiguration;
@property (nonatomic, readonly) NSMutableSet *globalConfigurationOps;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int iCloudEnvNotifToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property bool shouldDropAllConfigurations;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)_fetchContainerSpecificInfoForOperation:(id)arg1 requireUserIDs:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchGlobalConfigForOperation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_reallyDropAllConfigurations;
- (id)_uniqueStringForContainer:(id)arg1;
- (void)_writeOutiCloudAppSiteAssociationData:(id)arg1;
- (void)configurationForOperation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)configurationQueue;
- (void)containerServerInfoForOperation:(id)arg1 requireUserIDs:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)containerSpecificInfoOperations;
- (id)containerSpecificInfoQueue;
- (id)containerSpecificInfos;
- (void)dealloc;
- (void)expireConfigurationForContainer:(id)arg1;
- (void)expireGlobalConfiguration;
- (id)globalConfiguration;
- (id)globalConfigurationOps;
- (int)iCloudEnvNotifToken;
- (id)init;
- (id)lastKnownServerConfiguration;
- (id)notificationQueue;
- (id)propertyQueue;
- (void)setContainerSpecificInfos:(id)arg1;
- (void)setGlobalConfiguration:(id)arg1;
- (void)setShouldDropAllConfigurations:(bool)arg1;
- (bool)shouldDropAllConfigurations;
- (bool)systemAvailabilityChanged:(unsigned long long)arg1;
- (void)wipeAllConfigurations;

@end
