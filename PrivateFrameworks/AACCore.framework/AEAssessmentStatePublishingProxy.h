
@interface AEAssessmentStatePublishingProxy : NSObject <AEAssessmentStatePublishing> {
    NSObject<OS_dispatch_queue> * _queue;
    AEXPCProxy * _xpcProxy;
}

+ (id)proxyWithEndpoint:(id)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (void)endPublications:(id /* block */)arg1;
- (void)publishAssessmentState:(id)arg1 withCompletion:(id /* block */)arg2;

@end
