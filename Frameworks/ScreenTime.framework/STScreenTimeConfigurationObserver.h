
@interface STScreenTimeConfigurationObserver : NSObject {
    STScreenTimeConfiguration * _configuration;
    int  _notificationToken;
    NSXPCConnection * _xpcConnection;
}

@property (retain) STScreenTimeConfiguration *configuration;
@property int notificationToken;
@property (readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_requestConfiguration;
- (void)_updateWithConfiguration:(id)arg1;
- (id)configuration;
- (void)dealloc;
- (id)initWithUpdateQueue:(id)arg1;
- (int)notificationToken;
- (void)setConfiguration:(id)arg1;
- (void)setNotificationToken:(int)arg1;
- (void)startObserving;
- (void)stopObserving;
- (id)xpcConnection;

@end
