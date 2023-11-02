
@protocol DelayedPushDelegate <NSObject>

@required

- (void)loadFailed:(id)arg1 withError:(NSError *)arg2;
- (void)loadFinished:(id)arg1;
- (void)loadStarted:(id)arg1;

@optional

- (void)remoteUIDelegate:(id <PreferencesRemoteUIDelegateProtocol>)arg1 didCreatePage:(RUIPage *)arg2 forAccount:(ACAccount *)arg3 inObjectModel:(RUIObjectModel *)arg4;
- (void)remoteUIDelegate:(id <PreferencesRemoteUIDelegateProtocol>)arg1 didCreatePage:(RUIPage *)arg2 inObjectModel:(RUIObjectModel *)arg3;

@end
