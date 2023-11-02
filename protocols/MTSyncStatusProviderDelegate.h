
@protocol MTSyncStatusProviderDelegate <NSObject>

@required

- (void)syncStatusProvider:(id <MTSyncStatusProvider>)arg1 didChangeSyncStatus:(unsigned long long)arg2;

@end
