
@interface CDPDManateeStateObserver : NSObject <CDPDAuthListener, CDPDCircleListener> {
    CDPBroadcaster * _broadcaster;
}

@property (nonatomic, readonly) CDPBroadcaster *broadcaster;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkManateeStatusAndSendAvailabilityNotificationForContext:(id)arg1;
- (id)_proxyForContext:(id)arg1;
- (void)_reportPrimaryAccountManateeAvailability:(bool)arg1;
- (void)_sendNotification:(const char *)arg1 withUserInfo:(id)arg2;
- (id)broadcaster;
- (void)circleStatusChangedForAccountContext:(id)arg1;
- (void)circleViewStatusChangedForAccountContext:(id)arg1;
- (id)init;
- (id)initWithBroadcaster:(id)arg1;
- (void)securityLevelChangedForAccountContext:(id)arg1;

@end
