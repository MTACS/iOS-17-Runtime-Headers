
@interface ATXFallbackActions : NSObject {
    NSBundle * _bundle;
    ATXProactiveSuggestionClientModelSpecification * _clientModelSpec;
}

+ (id)dateWithoutMinutesAndSeconds:(id)arg1;
+ (unsigned long long)fallbackActionTypeForString:(id)arg1;
+ (id)fallbackActionsBundle;
+ (id)stringForFallbackActionType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)createAnEventForCurrentDate:(id)arg1;
- (id)init;
- (id)initWithClientModelSpec:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)proactiveSuggestionForAction:(id)arg1;
- (id)searchSafari;
- (id)sendAMessage;
- (id)startATimer;
- (id)suggestionforSpecifiedFallbackActionType:(unsigned long long)arg1;
- (id)suggestionsForAllFallbackActions;
- (id)viewPhotos;

@end
