
@interface ATXDigestSetupFlowClient : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    ATXNotificationDigestRankerClient * _xpcClient;
}

- (void).cxx_destruct;
- (void)_helperAppsSortedByNotificationsReceivedInPreviousNumDays:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)appsSortedByNotificationsReceivedInPreviousNumDays:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)appsSortedByNotificationsReceivedInPreviousNumDaysRaw:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)sortDigestResponseWithNoNotificationVolume:(id)arg1;

@end
