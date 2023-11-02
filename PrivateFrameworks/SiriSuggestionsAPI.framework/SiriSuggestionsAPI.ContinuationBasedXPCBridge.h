
@interface SiriSuggestionsAPI.ContinuationBasedXPCBridge : NSObject <SiriSuggestionsAPI.XPCClientBridge> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  continuation;
}

- (void).cxx_destruct;
- (void)connectionErrorWithError:(id)arg1;
- (void)finalise;
- (id)init;
- (void)sendSuggestionsWithSuggestions:(id)arg1;

@end
