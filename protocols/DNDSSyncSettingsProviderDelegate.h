
@protocol DNDSSyncSettingsProviderDelegate <NSObject>

@required

- (void)syncSettingsProvider:(DNDSSyncSettingsProvider *)arg1 didReceiveUpdatedSyncSettings:(DNDSSyncSettings *)arg2;

@end
