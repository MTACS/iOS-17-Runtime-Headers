
@interface SKAPushManager : NSObject <APSConnectionDelegate, SKAPushManaging, SKASystemMonitorListener> {
    APSConnection * _connection;
    <SKAPushManagingDelegate> * _delegate;
    FTMessageDelivery * _messageDelivery;
    NSObject<OS_dispatch_queue> * _queue;
    SKASystemMonitor * _systemMonitor;
    bool  _trafficModeEnabled;
}

@property (nonatomic, retain) APSConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKAPushManagingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FTMessageDelivery *messageDelivery;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKASystemMonitor *systemMonitor;
@property (nonatomic) bool trafficModeEnabled;

+ (id)logger;

- (void).cxx_destruct;
- (void)_initializeAPSConnection;
- (id)_pushEnvironment;
- (bool)_sharedChannelsIsDisabledByServer;
- (void)_subscribeToChannels:(id)arg1 forTopic:(id)arg2;
- (void)_subscribedChannelsForTopic:(id)arg1 WithCompletion:(id /* block */)arg2;
- (void)_switchFilterToEnabledForTopic:(id)arg1;
- (void)_switchFilterToNonwakingForTopic:(id)arg1;
- (void)_unsubscribeFromChannels:(id)arg1 forTopic:(id)arg2;
- (id)connection;
- (void)connection:(id)arg1 channelSubscriptionsFailedWithFailures:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)createChannelWithProtoData:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)disableActivityTracking;
- (void)enableActivityTracking;
- (id)initWithQueue:(id)arg1 systemMonitor:(id)arg2 inTrafficMode:(bool)arg3;
- (id)messageDelivery;
- (void)publishStatus:(id)arg1 completion:(id /* block */)arg2;
- (id)pushToken;
- (id)queue;
- (void)sendPresenceMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)serverTime;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessageDelivery:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSystemMonitor:(id)arg1;
- (void)setTrafficModeEnabled:(bool)arg1;
- (void)subscribeToPresenceChannels:(id)arg1;
- (void)subscribeToStatusChannels:(id)arg1;
- (void)subscribedPresenceChannelsWithCompletion:(id /* block */)arg1;
- (void)subscribedStatusChannelsWithCompletion:(id /* block */)arg1;
- (void)switchPresenceFilterToEnabled;
- (void)switchPresenceFilterToNonwaking;
- (void)switchStatusFilterToEnabled;
- (void)switchStatusFilterToNonwaking;
- (void)systemDidLeaveFirstDataProtectionLock;
- (id)systemMonitor;
- (bool)trafficModeEnabled;
- (void)unsubscribeFromPresenceChannels:(id)arg1;
- (void)unsubscribeFromStatusChannels:(id)arg1;

@end
