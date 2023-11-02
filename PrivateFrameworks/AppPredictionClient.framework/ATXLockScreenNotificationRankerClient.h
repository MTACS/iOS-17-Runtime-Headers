
@interface ATXLockScreenNotificationRankerClient : NSObject <ATXLockScreenNotificationRankerProtocol> {
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)rankNewNotificationIntoNotificationArrays:(id)arg1 newNotification:(id)arg2 notificationArrayIndex:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)rankNotificationArrays:(id)arg1 reply:(id /* block */)arg2;

@end
