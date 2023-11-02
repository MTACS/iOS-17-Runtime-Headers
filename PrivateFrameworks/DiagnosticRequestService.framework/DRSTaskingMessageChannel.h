
@interface DRSTaskingMessageChannel : NSObject <APSConnectionDelegate> {
    APSConnection * _apsConnection;
    NSString * _apsEnvironmentString;
    DRSCloudChannelConfig * _config;
    id /* block */  _processingBlock;
    PKPublicChannel * _pubSubChannel;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) APSConnection *apsConnection;
@property (nonatomic, readonly) NSString *apsEnvironmentString;
@property (nonatomic, readonly) DRSCloudChannelConfig *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ processingBlock;
@property (nonatomic, readonly) PKPublicChannel *pubSubChannel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)apsConnection;
- (id)apsEnvironmentString;
- (id)config;
- (void)connection:(id)arg1 channelSubscriptionsFailedWithFailures:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)debugDescription;
- (id)initWithCloudChannelConfig:(id)arg1 payloadProcessingBlock:(id /* block */)arg2;
- (id /* block */)processingBlock;
- (id)pubSubChannel;
- (void)setApsConnection:(id)arg1;
- (bool)subscribe:(id*)arg1;
- (bool)unsubscribe:(id*)arg1;
- (id)workQueue;

@end
