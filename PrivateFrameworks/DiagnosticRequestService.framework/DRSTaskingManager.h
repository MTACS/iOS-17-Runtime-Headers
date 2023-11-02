
@interface DRSTaskingManager : NSObject {
    DRSTaskingCloudKitHelper * _cloudKitHelper;
    id /* block */  _configStateChangeBlock;
    DRSTaskingDecisionMaker * _decisionMaker;
    DRSTaskingMessageChannel * _taskingMessageChannel;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) DRSTaskingCloudKitHelper *cloudKitHelper;
@property (nonatomic, readonly) id /* block */ configStateChangeBlock;
@property (nonatomic, readonly) DRSTaskingDecisionMaker *decisionMaker;
@property (nonatomic, readonly) bool isTaskingEnabled;
@property (nonatomic, retain) DRSTaskingMessageChannel *taskingMessageChannel;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_bestEffortLogMessageReceiptTelemetry:(id)arg1 transaction:(id)arg2 cloudChannelConfig:(id)arg3;
- (void)_emitTaskingSystemMessageTelemetry:(id)arg1 messageType:(id)arg2 dateBroadcast:(id)arg3 dateReceived:(id)arg4 transaction:(id)arg5 cloudChannelConfig:(id)arg6;
- (void)_emitTelemetryForLoggableMesssage:(id)arg1 transaction:(id)arg2 cloudChannelConfig:(id)arg3;
- (bool)checkConfigsForInvalidation:(id*)arg1;
- (bool)clearTaskingHistoryWithErrorOut:(id*)arg1;
- (void)clientCompletedConfigUUID:(id)arg1 teamID:(id)arg2;
- (void)clientRejectsConfigUUID:(id)arg1 teamID:(id)arg2;
- (id)cloudKitHelper;
- (id /* block */)configStateChangeBlock;
- (id)decisionMaker;
- (id)initWithDecisionMaker:(id)arg1 cloudKitHelper:(id)arg2 configStateChangeBlock:(id /* block */)arg3;
- (id)initWithDecisionMaker:(id)arg1 configStateChangeBlock:(id /* block */)arg2;
- (bool)isTaskingEnabled;
- (id)metadataForConfigUUID:(id)arg1 teamID:(id)arg2 errorOut:(id*)arg3;
- (id)persistedCloudChannelConfig;
- (void)processCancelMessage:(id)arg1 cloudChannelConfig:(id)arg2 transaction:(id)arg3 shouldEmitCATelemetry:(bool)arg4;
- (void)processPingMessage:(id)arg1 cloudChannelConfig:(id)arg2 transaction:(id)arg3 shouldEmitCATelemetry:(bool)arg4;
- (void)processTaskingMessage:(id)arg1 cloudChannelConfig:(id)arg2 transaction:(id)arg3 shouldEmitCATelemetry:(bool)arg4;
- (bool)processTaskingSystemMessage:(id)arg1 cloudChannelConfig:(id)arg2 transaction:(id)arg3 shouldEmitCATelemetry:(bool)arg4;
- (bool)processTaskingSystemMessageJSONData:(id)arg1 transaction:(id)arg2 shouldEmitCATelemetry:(bool)arg3;
- (bool)processTaskingSystemMessageJSONDict:(id)arg1 cloudChannelConfig:(id)arg2 transaction:(id)arg3 shouldEmitCATelemetry:(bool)arg4;
- (void)setTaskingMessageChannel:(id)arg1;
- (bool)subscribeToChannelWithConfig:(id)arg1 errorOut:(id*)arg2;
- (id)taskingMessageChannel;
- (bool)unsubscribeFromSubscribedChannelWithErrorOut:(id*)arg1;
- (bool)updatePersistedChannelConfig:(id)arg1 errorOut:(id*)arg2;
- (id)workQueue;

@end
