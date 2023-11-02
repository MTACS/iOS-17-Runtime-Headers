
@protocol MTSyncStatusProvider <NSObject>

@required

+ (bool)deviceSupportsSyncing;

- (void)setSyncStatusProviderDelegate:(id <MTSyncStatusProviderDelegate>)arg1;
- (unsigned long long)syncStatus;
- (<MTSyncStatusProviderDelegate> *)syncStatusProviderDelegate;

@end
