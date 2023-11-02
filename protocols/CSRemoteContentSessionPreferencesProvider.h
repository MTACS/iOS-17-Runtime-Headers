
@protocol CSRemoteContentSessionPreferencesProvider <NSObject>

@required

- (SBSRemoteContentPreferences *)preferencesForRemoteContentSession:(CSRemoteContentSession *)arg1;
- (void)remoteContentSession:(CSRemoteContentSession *)arg1 didUpdateWithPreferences:(SBSRemoteContentPreferences *)arg2;

@end
