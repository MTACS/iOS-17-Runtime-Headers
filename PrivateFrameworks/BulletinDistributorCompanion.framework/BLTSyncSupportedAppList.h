
@interface BLTSyncSupportedAppList : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSObject<OS_dispatch_queue> * _appListQueue;
    NSMutableSet * _appListStore;
    <BLTSyncSupportedAppListDelegate> * _delegate;
    NSMutableDictionary * _installed;
    NSMutableSet * _removed;
    NSURL * _syncSupportedAppListStoreURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTSyncSupportedAppListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *installed;
@property (nonatomic, readonly) NSSet *removed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_handleAppListInstalled:(id)arg1 removed:(id)arg2;
- (id)_syncSupportedAppListStoreURL;
- (void)applicationIconDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)installed;
- (id)removed;
- (void)setDelegate:(id)arg1;
- (id)supportedBundleIDsFromRecords:(id)arg1 nonSyncSupportedBundleIDs:(id*)arg2;
- (void)updateStoreWithInstalled:(id)arg1 removed:(id)arg2;

@end
