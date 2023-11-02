
@interface NEConfigurationManager : NSObject {
    NSData * _SCPreferencesSignature;
    NSMutableDictionary * _appGroupMap;
    bool  _appGroupsChanged;
    id /* block */  _changedHandler;
    int  _changedNotifyToken;
    NSObject<OS_dispatch_queue> * _changedQueue;
    long long  _configurationChangeSource;
    NSDictionary * _currentIndex;
    NSKeyedUnarchiver * _decoder;
    NSString * _description;
    long long  _generation;
    bool  _hasReadPermission;
    bool  _hasVPNAPIEntitlement;
    NEHelper * _helper;
    bool  _isNEHelper;
    bool  _isSyncedOnQueue;
    bool  _isSynchronous;
    bool  _isVPNPrivateAPI;
    bool  _isVPNPublicAPI;
    NSMutableDictionary * _loadedConfigurations;
    NSMutableDictionary * _loadedIndex;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _outerQueue;
    NSString * _pluginType;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _userUUID;
}

@property (nonatomic) bool appGroupsChanged;
@property long long configurationChangeSource;
@property bool hasVPNAPIEntitlement;
@property (copy) id /* block */ incomingMessageHandler;
@property (readonly) NSString *pluginType;
@property (readonly) NSUUID *userUUID;

+ (id)networkPrivacyConfigurationName;
+ (id)sharedManager;
+ (id)sharedManagerForAllUsers;

- (void).cxx_destruct;
- (void)addGroups:(id)arg1 forApp:(id)arg2;
- (bool)appGroupsChanged;
- (long long)configurationChangeSource;
- (id)copyAppGroupMapDidChange:(bool*)arg1;
- (id)copyCurrentIndexWithConfigurationIDsExpunged:(id)arg1;
- (void)copyIdentities:(id)arg1 fromDomain:(long long)arg2 withCompletionQueue:(id)arg3 handler:(id /* block */)arg4;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)fetchClientListenerWithBundleID:(id)arg1 completionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)fetchUpgradeInfoForPluginType:(id)arg1 completionQueue:(id)arg2 handler:(id /* block */)arg3;
- (id)getCurrentUserUUIDForConfigurationID:(id)arg1 fromIndex:(id)arg2;
- (void)handleApplicationsRemoved:(id)arg1 completionQueue:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)handleFileRemovedWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasVPNAPIEntitlement;
- (id /* block */)incomingMessageHandler;
- (id)init;
- (id)initForAllUsers;
- (id)initSynchronous;
- (id)initWithPluginType:(id)arg1;
- (void)loadConfigurationAndUserWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)loadConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)loadConfigurations:(id)arg1 withFilter:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)loadConfigurationsWithCompletionQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)loadIndexWithFilter:(id)arg1 completionQueue:(id)arg2 handler:(id /* block */)arg3;
- (id)pluginType;
- (void)postGeneration;
- (void)removeConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)removeConfigurationFromDisk:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)repopulateNetworkPrivacyConfigurationResetAll:(bool)arg1;
- (void)saveConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)saveConfigurationToDisk:(id)arg1 currentSignature:(id)arg2 userUUID:(id)arg3 isUpgrade:(bool)arg4 completionQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)setAppGroupsChanged:(bool)arg1;
- (void)setChangedQueue:(id)arg1 andHandler:(id /* block */)arg2;
- (void)setConfigurationChangeSource:(long long)arg1;
- (void)setHasVPNAPIEntitlement:(bool)arg1;
- (void)setIncomingMessageHandler:(id /* block */)arg1;
- (void)showLocalNetworkAlertForApp:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)showLocalNetworkAlertForApp:(id)arg1 withCompletionQueue:(id)arg2 query:(id)arg3 hasEntitlement:(bool)arg4 handler:(id /* block */)arg5;
- (void)syncConfigurationsWithSC:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)triggerLocalAuthenticationForConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(id /* block */)arg3;
- (id)userUUID;

@end
