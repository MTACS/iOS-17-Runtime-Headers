
@interface MTCompanionSyncStatusProvider : NSObject <MTPairedDeviceObserver, MTSyncStatusProvider> {
    <MTSyncStatusProviderDelegate> * _syncStatusProviderDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <MTSyncStatusProviderDelegate> *syncStatusProviderDelegate;

+ (bool)deviceSupportsSyncing;

- (void).cxx_destruct;
- (void)activePairedDeviceDidChange;
- (id)init;
- (void)setSyncStatusProviderDelegate:(id)arg1;
- (unsigned long long)syncStatus;
- (id)syncStatusProviderDelegate;

@end
