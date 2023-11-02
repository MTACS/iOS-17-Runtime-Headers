
@interface ATXModeAnchorModelSuggestionServer : NSObject <ATXModeAnchorModelSuggestionClientXPCInterface, ATXModeAnchorModelSuggestionServerXPCInterface, ATXModeClassifierClientModel, NSXPCListenerDelegate> {
    <ATXModeClassifierClientModelDelegate> * _delegate;
    _PASLock * _lock;
    ATXConfiguredModeService * _modeService;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXModeClassifierClientModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldUpdateHighestConfidenceSuggestion:(id)arg1 newSuggestion:(id)arg2;
- (void)anchorModelDidProvideModeSuggestions:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)fetchCombinedSuggestionScoreAndFlagsForModeWithUUID:(id)arg1 modeType:(unsigned long long)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 confidenceScore:(double)arg6 secondsSinceSuggested:(double)arg7 serializedTriggers:(id)arg8 completionHandler:(id /* block */)arg9;
- (void)fetchCombinedSuggestionScoreForModeEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchCombinedSuggestionScoreForModeWithUUID:(id)arg1 modeType:(unsigned long long)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 confidenceScore:(double)arg6 secondsSinceSuggested:(double)arg7 serializedTriggers:(id)arg8 completionHandler:(id /* block */)arg9;
- (id)init;
- (id)initWithConfiguredModeService:(id)arg1;
- (id)initWithXPCListener:(id)arg1 configuredModeService:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)pingWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
