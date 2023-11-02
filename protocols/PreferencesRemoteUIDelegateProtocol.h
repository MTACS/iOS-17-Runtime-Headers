
@protocol PreferencesRemoteUIDelegateProtocol <NSObject>

@required

- (void)cancelRemoteUI;
- (void)cleanupLoader;
- (<DelayedPushDelegate> *)delegate;
- (id)initWithNavigationController:(UINavigationController *)arg1;
- (id)initWithNavigationController:(UINavigationController *)arg1 buyStorageFlow:(bool)arg2;
- (id)initWithNavigationController:(UINavigationController *)arg1 initialAction:(NSString *)arg2;
- (id)initWithNavigationController:(UINavigationController *)arg1 initialAction:(NSString *)arg2 account:(ACAccount *)arg3;
- (void)loadURL:(NSURL *)arg1 postBody:(NSData *)arg2;
- (void)loadURL:(NSURL *)arg1 postBody:(NSData *)arg2 additionalHeaders:(NSDictionary *)arg3;
- (void)popAndReloadFromRemoteUI:(bool)arg1 additionalHeaders:(NSDictionary *)arg2;
- (void)reloadTopControllerWithAdditionalHeaders:(NSDictionary *)arg1;
- (void)setDelegate:(id <DelayedPushDelegate>)arg1;

@end
