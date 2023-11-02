
@interface SiriAnalyticsClientMessageStream : NSObject <SiriAnalyticsMessageStream> {
    <SiriAnalyticsClientMessageStreamDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    <SiriAnalyticsService> * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsService;
- (void)barrierWithCompletion:(id /* block */)arg1;
- (void)emitMessage:(id)arg1;
- (void)emitMessage:(id)arg1 isolatedStreamUUID:(id)arg2;
- (void)emitMessage:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)emitMessage:(id)arg1 timestamp:(unsigned long long)arg2 isolatedStreamUUID:(id)arg3;
- (void)enqueueLargeMessageObjectFromPath:(id)arg1 assetIdentifier:(id)arg2 messageMetadata:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithQueue:(id)arg1 analyticsService:(id)arg2 delegate:(id)arg3;
- (void)resolvePartialMessage:(id)arg1;
- (void)resolvePartialMessage:(id)arg1 isolatedStreamUUID:(id)arg2;
- (void)resolvePartialMessage:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)resolvePartialMessage:(id)arg1 timestamp:(unsigned long long)arg2 isolatedStreamUUID:(id)arg3;
- (void)setAnalyticsService:(id)arg1;

@end
