
@interface TRIPushServiceConnection : NSObject <APSConnectionDelegate, TRIPushServiceChannelSubscribing> {
    APSConnection * _connection;
    NSObject<OS_dispatch_queue> * _pushServiceQueue;
    NSObject<OS_dispatch_queue> * _subscriptionRequestQueue;
    <TRIPushServiceConnectionDelegate> * _triDelegate;
}

@property (nonatomic, readonly) APSConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *pushServiceQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *subscriptionRequestQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <TRIPushServiceConnectionDelegate> *triDelegate;

- (void).cxx_destruct;
- (id)_publicChannelForChannelId:(id)arg1;
- (void)_subscribeToChannel:(id)arg1;
- (unsigned long long)_subscribedChannelCount;
- (void)_unsubscribeFromChannel:(id)arg1;
- (id)connection;
- (void)connection:(id)arg1 channelSubscriptionsFailedWithFailures:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)pushServiceQueue;
- (void)subscribeToChannel:(id)arg1;
- (id)subscribedChannelIds;
- (id)subscriptionRequestQueue;
- (id)triDelegate;
- (void)unsubscribeFromChannel:(id)arg1;

@end
