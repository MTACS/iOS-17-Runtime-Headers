
@interface EMFDPEventDispatcher : NSObject {
    NSObject<OS_dispatch_queue> * _reportingBackgroundQueue;
    <EMFDPReportingDelegate> * _reportingDelegate;
}

- (void).cxx_destruct;
- (void)didUseEmoji:(id)arg1 usageSource:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)didUseEmoji:(id)arg1 usageSource:(unsigned long long)arg2 replacementContext:(id)arg3 searchQuery:(id)arg4 resultPosition:(id)arg5 numberSearchQueriesRun:(id)arg6 wasPositiveEngagement:(bool)arg7;
- (void)didUseEmoji:(id)arg1 usageSource:(unsigned long long)arg2 replacementContext:(id)arg3 searchQuery:(id)arg4 resultPosition:(id)arg5 numberSearchQueriesRun:(id)arg6 wasPositiveEngagement:(bool)arg7 completionHandler:(id /* block */)arg8;
- (id)init;
- (id)initWithReportingDelegate:(id)arg1;

@end
