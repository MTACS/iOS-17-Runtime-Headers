
@interface ATXNotificationDigestRankerServer : NSObject <ATXNotificationDigestRankerInterface, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)appsSortedByNotificationsReceivedInPreviousNumDays:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)generateDigestForAppGroupedNotificationStacks:(id)arg1 maxGlobalMarqueeGroups:(unsigned long long)arg2 maxAppMarqueeGroups:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)generateDigestForNotificationStacks:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)arg1;

@end
