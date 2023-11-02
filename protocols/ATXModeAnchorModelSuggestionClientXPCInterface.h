
@protocol ATXModeAnchorModelSuggestionClientXPCInterface

@required

- (void)fetchCombinedSuggestionScoreAndFlagsForModeWithUUID:(void *)arg1 modeType:(void *)arg2 origin:(void *)arg3 originBundleId:(void *)arg4 originAnchorType:(void *)arg5 confidenceScore:(void *)arg6 secondsSinceSuggested:(void *)arg7 serializedTriggers:(void *)arg8 completionHandler:(void *)arg9; // needs 9 arg types, found 17: NSString *, unsigned long long, long long, NSString *, NSString *, double, double, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, bool, bool, bool, void*
- (void)fetchCombinedSuggestionScoreForModeWithUUID:(void *)arg1 modeType:(void *)arg2 origin:(void *)arg3 originBundleId:(void *)arg4 originAnchorType:(void *)arg5 confidenceScore:(void *)arg6 secondsSinceSuggested:(void *)arg7 serializedTriggers:(void *)arg8 completionHandler:(void *)arg9; // needs 9 arg types, found 14: NSString *, unsigned long long, long long, NSString *, NSString *, double, double, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*

@end
