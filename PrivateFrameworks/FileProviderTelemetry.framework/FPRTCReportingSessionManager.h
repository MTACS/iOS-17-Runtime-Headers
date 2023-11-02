
@interface FPRTCReportingSessionManager : NSObject {
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)flushMessagesWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)postReportWithCategory:(unsigned long long)arg1 type:(unsigned long long)arg2 payload:(id)arg3 error:(id)arg4 decoratedPayload:(id)arg5 session:(id)arg6 observer:(id)arg7;
- (void)postReportWithCategory:(unsigned long long)arg1 type:(unsigned long long)arg2 payload:(id)arg3 userinfo:(id)arg4 error:(id)arg5 decoratedPayload:(id)arg6 session:(id)arg7 observer:(id)arg8;
- (id)sessionForDomainID:(id)arg1 providerVersion:(id)arg2;
- (id)sessionForProvider:(id)arg1 version:(id)arg2;
- (id)sessionForProviderID:(id)arg1 version:(id)arg2;

@end
