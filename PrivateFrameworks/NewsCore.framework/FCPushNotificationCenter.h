
@interface FCPushNotificationCenter : NSObject <FCPushNotificationHandling> {
    FCCKPrivateDatabase * _privateDatabase;
    FCMapTable * _recordZoneObservers;
    bool  _syncingEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleRemoteNotification:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)prepareForUse;

@end
