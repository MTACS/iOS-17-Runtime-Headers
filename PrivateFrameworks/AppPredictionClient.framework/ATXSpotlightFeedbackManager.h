
@interface ATXSpotlightFeedbackManager : NSObject {
    NSString * _clientModelId;
    ATXEngagementRecordManager * _engagementRecordManager;
}

- (void).cxx_destruct;
- (void)addHiddenActionExecutableIdentifier:(id)arg1;
- (void)addHiddenContextIdentifier:(id)arg1;
- (void)addHiddenSuggestion:(id)arg1;
- (void)clearHiddenSuggestions;
- (unsigned long long)combineReasons:(unsigned long long)arg1;
- (bool)contextHasBeenHiddenForContextIdentifier:(id)arg1;
- (bool)contextHasBeenHiddenForSuggestion:(id)arg1;
- (bool)hasBeenHiddenEntityWithIdentifier:(id)arg1;
- (bool)hasBeenHiddenSuggestion:(id)arg1;
- (id)init;
- (id)initWithEngagementRecordManager:(id)arg1;

@end
