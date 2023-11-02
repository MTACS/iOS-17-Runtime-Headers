
@interface UNSUserNotificationServerSettingsConnectionListener : NSObject <NSXPCListenerDelegate, UNSNotificationSettingsServiceObserver, UNUserNotificationSettingsServerProtocol> {
    NSMutableArray * _connections;
    NSXPCListener * _listener;
    UNSNotificationSettingsService * _settingsService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentConnection;
- (void)_handleClientConnectionInterrupted:(id)arg1;
- (void)_handleClientConnectionInvalidated:(id)arg1;
- (void)authorizationWithOptions:(unsigned long long)arg1 forNotificationSourceIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)getAllNotificationSourcesWithCompletionHandler:(id /* block */)arg1;
- (void)getNotificationSource:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationSources:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationSystemSettingsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithNotificationSettingsService:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
- (void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
- (void)resetScheduledDeliverySetting;
- (void)resume;
- (void)setNotificationSystemSettings:(id)arg1;
- (void)settingsService:(id)arg1 didUpdateNotificationSourcesForBundleIdentifiers:(id)arg2;
- (void)settingsService:(id)arg1 didUpdateNotificationSystemSettings:(id)arg2;

@end
