
@interface HFSiriAssetDownloadNetworkManagerShim : NSObject {
    HFSiriAssetDownloadNetworkManager * _manager;
}

@property (nonatomic, retain) HFSiriAssetDownloadNetworkManager *manager;

+ (void)cleanup;
+ (id)sharedManager;

- (void).cxx_destruct;
- (unsigned long long)immediateStatusForIdentifier:(id)arg1;
- (id)init;
- (id)manager;
- (void)requestStatus:(id)arg1;
- (void)setManager:(id)arg1;
- (void)statusForIdentifier:(id)arg1 replyHandler:(id /* block */)arg2;

@end
