
@interface _TtCC19FindMyDaemonSupport11APNSManagerP33_69672C9E20C2D053F65B88CE8A65B96022PushDelegateTrampoline : NSObject <APSConnectionDelegate> {
    void target;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 channelSubscriptionsFailedWithFailures:(id)arg2;
- (void)connection:(id)arg1 didChangeConnectedStatus:(bool)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forInfo:(id)arg3;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceiveURLToken:(id)arg2 forInfo:(id)arg3;
- (void)connection:(id)arg1 didReceiveURLTokenError:(id)arg2 forInfo:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (void)dealloc;
- (id)init;

@end
