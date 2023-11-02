
@interface SiriAnalyticsRemoteService : NSObject <SiriAnalyticsService> {
    SiriAnalyticsXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)_packageMessageForXPC:(id)arg1 timestamp:(unsigned long long)arg2 messageUUID:(id)arg3 isolatedStreamUUID:(id)arg4;
- (void)barrierWithCompletion:(id /* block */)arg1;
- (void)createTag:(id)arg1 completion:(id /* block */)arg2;
- (void)emitMessage:(id)arg1 timestamp:(unsigned long long)arg2 messageUUID:(id)arg3 isolatedStreamUUID:(id)arg4 completion:(id /* block */)arg5;
- (void)enqueueLargeMessageObjectFromPath:(id)arg1 dataUploadEvent:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithMachServiceName:(id)arg1;
- (void)resolvePartialMessage:(id)arg1 timestamp:(unsigned long long)arg2 messageUUID:(id)arg3 isolatedStreamUUID:(id)arg4 completion:(id /* block */)arg5;
- (void)sensitiveCondition:(int)arg1 endedAt:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)sensitiveCondition:(int)arg1 startedAt:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end
