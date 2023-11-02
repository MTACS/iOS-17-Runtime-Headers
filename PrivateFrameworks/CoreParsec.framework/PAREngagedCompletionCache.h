
@interface PAREngagedCompletionCache : NSObject

+ (id)sharedInstance;

- (void)addCompletion:(id)arg1 forInput:(id)arg2;
- (void)addEngagedResults:(id)arg1;
- (void)clearAllCompletions;
- (void)clearAllEngagements;
- (void)clearCompletionsFromDate:(id)arg1 toDate:(id)arg2;
- (void)clearEngagementsFromDate:(id)arg1 toDate:(id)arg2;
- (void)clearEngagementsWithTitle:(id)arg1;
- (void)clearEngagementsWithTitle:(id)arg1 type:(int)arg2;
- (void)topEngagedResultsForInput:(id)arg1 maxAmount:(long long)arg2 completion:(id /* block */)arg3;
- (void)updateParametersForSmartSearchV1:(id)arg1 smartSearchV2:(id)arg2;

@end
