
@interface GDEntityResolutionInProcessTextClient : NSObject {
    GDEntityResolutionTextClientInner * ecrClient;
}

- (void).cxx_destruct;
- (bool)cooldownWithError:(id*)arg1;
- (id)generateMentionsForQuery:(id)arg1 error:(id*)arg2;
- (id)initForMode:(long long)arg1 error:(id*)arg2;
- (id)initWithMode:(long long)arg1 error:(id)arg2;
- (id)initWithMode:(long long)arg1 warmup:(bool)arg2 error:(id*)arg3;
- (bool)recordDirectFeedbackWithEngagedIds:(id)arg1 rejectedIds:(id)arg2 ignored:(id)arg3 neverPresented:(id)arg4 error:(id*)arg5;
- (void)resolveEntitiesForBatchRequests:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)resolveEntitiesForBatchRequests:(id)arg1 error:(id*)arg2;
- (void)resolveEntitiesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)resolveEntitiesForRequest:(id)arg1 error:(id*)arg2;
- (void)warmupForMode:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)warmupForMode:(long long)arg1 error:(id*)arg2;

@end
