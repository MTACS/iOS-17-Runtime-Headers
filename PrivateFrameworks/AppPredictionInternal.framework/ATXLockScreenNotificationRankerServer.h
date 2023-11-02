
@interface ATXLockScreenNotificationRankerServer : NSObject <ATXLockScreenNotificationRankerProtocol, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)rankNewNotificationIntoNotificationArrays:(id)arg1 newNotification:(id)arg2 notificationArrayIndex:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)rankNotificationArrays:(id)arg1 reply:(id /* block */)arg2;

@end
