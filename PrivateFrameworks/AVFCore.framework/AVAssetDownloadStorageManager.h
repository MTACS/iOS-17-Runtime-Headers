
@interface AVAssetDownloadStorageManager : NSObject

+ (id)sharedDownloadStorageManager;

- (void)setStorageManagementPolicy:(id)arg1 forURL:(id)arg2;
- (id)storageManagementPolicyForURL:(id)arg1;

@end
