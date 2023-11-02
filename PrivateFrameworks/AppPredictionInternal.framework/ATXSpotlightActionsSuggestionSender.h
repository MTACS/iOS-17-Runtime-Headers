
@interface ATXSpotlightActionsSuggestionSender : NSObject {
    NSDictionary * _previousDirectionsIdentifiers;
    NSSet * _previousIdentifiers;
    NSString * _previousNowPlayingIdentifier;
    NSString * _previousOngoingCallIdentifier;
}

+ (id)identifierForNowPlayingSuggestionFromLayout:(id)arg1;
+ (id)identifierForOngoingCallSuggestionFromLayout:(id)arg1;
+ (id)identifiersForDirectionsSuggestionFromLayout:(id)arg1;
+ (id)identifiersForSuggestionsFromLayout:(id)arg1;

- (void).cxx_destruct;
- (void)_logCAEvents:(id)arg1 eventType:(long long)arg2 toStream:(id)arg3;
- (void)_processChanges:(id)arg1;
- (void)_sendSpotlightSuggestionUpdateNotification:(id)arg1;
- (void)blendingLayerDidUpdateSpotlightUICache:(id)arg1;
- (id)init;

@end
