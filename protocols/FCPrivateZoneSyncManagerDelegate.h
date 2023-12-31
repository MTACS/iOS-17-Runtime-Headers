
@protocol FCPrivateZoneSyncManagerDelegate <NSObject>

@required

- (void)zoneSyncManager:(FCPrivateZoneSyncManager *)arg1 stateDidChange:(NTPBPrivateZoneSyncState *)arg2;
- (void)zoneSyncManagerNotifyObservers:(FCPrivateZoneSyncManager *)arg1;

@end
