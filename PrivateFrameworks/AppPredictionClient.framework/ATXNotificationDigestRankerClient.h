
@interface ATXNotificationDigestRankerClient : NSObject <ATXNotificationDigestRankerInterface> {
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appsSortedByNotificationsReceivedInPreviousNumDays:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (void)generateDigestForAppGroupedNotificationStacks:(id)arg1 maxGlobalMarqueeGroups:(unsigned long long)arg2 maxAppMarqueeGroups:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)generateDigestForNotificationStacks:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)arg1;

@end
