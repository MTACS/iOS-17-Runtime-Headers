
@interface UNUserNotificationSettingsServiceConnection : NSObject <UNUserNotificationSettingsClientProtocol> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSXPCConnection * _connection;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callOutQueue;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_queue_addObserver:(id)arg1;
- (id)_queue_ensureConnection;
- (void)_queue_interruptedConnection;
- (void)_queue_invalidatedConnection;
- (void)_queue_removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allNotificationSources;
- (void)authorizationWithOptions:(unsigned long long)arg1 forNotificationSourceIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)callOutQueue;
- (id)connection;
- (id)init;
- (id)notificationSourceWithIdentifier:(id)arg1;
- (id)notificationSourcesWithIdentifiers:(id)arg1;
- (id)notificationSystemSettings;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
- (void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
- (void)resetScheduledDeliverySetting;
- (void)setCallOutQueue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setNotificationSystemSettings:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)updateNotificationSourcesWithBundleIdentifiers:(id)arg1;
- (void)updateNotificationSystemSettings:(id)arg1;

@end
