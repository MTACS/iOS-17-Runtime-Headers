
@interface MTSessionManagerExportedObject : NSObject <MTSessionClient> {
    NSNotificationCenter * _notificationCenter;
    MTSessionManager * _sessionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) MTSessionManager *sessionManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didReceiveSessionServerReadyNotification:(id)arg1;
- (void)alarmSessionEndedForId:(id)arg1;
- (void)dealloc;
- (id)initWithSessionManager:(id)arg1;
- (id)notificationCenter;
- (id)sessionManager;
- (void)timerSessionEndedForId:(id)arg1;

@end
