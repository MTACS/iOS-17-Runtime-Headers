
@interface ATXModeAnchorModelSuggestionClient : NSObject <ATXModeAnchorModelSuggestionClientXPCInterface> {
    _PASXPCClientHelper * _xpcClientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_pingServer;
- (void)anchorModelDidProvideModeSuggestions:(id)arg1;
- (void)fetchCombinedSuggestionScoreAndFlagsForModeWithUUID:(id)arg1 modeType:(unsigned long long)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 confidenceScore:(double)arg6 secondsSinceSuggested:(double)arg7 serializedTriggers:(id)arg8 completionHandler:(id /* block */)arg9;
- (void)fetchCombinedSuggestionScoreForModeWithUUID:(id)arg1 modeType:(unsigned long long)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 confidenceScore:(double)arg6 secondsSinceSuggested:(double)arg7 serializedTriggers:(id)arg8 completionHandler:(id /* block */)arg9;
- (id)init;

@end
