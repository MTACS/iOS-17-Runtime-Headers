
@interface WiFiPasswordSharingSimulator : NSObject <SFPasswordSharingServiceDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _replyHandler;
    SFPasswordSharingService * _service;
}

- (void)dealloc;
- (id)init;
- (void)runWithSSID:(id)arg1 reply:(id /* block */)arg2;
- (void)service:(id)arg1 receivedNetworkInfo:(id)arg2;
- (bool)service:(id)arg1 shouldPromptForNetwork:(id)arg2;

@end
