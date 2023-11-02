
@interface ATXActivityTriggerSuggestion : NSObject <ATXActivitySuggestion> {
    ATXActivity * _activity;
    ATXActivitySuggestionClient * _activitySuggestionClient;
}

@property (nonatomic, readonly) ATXActivity *activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedTriggerSuggestionText;
@property (nonatomic, readonly) unsigned long long location;
@property (nonatomic, readonly, copy) NSString *suggestionUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *triggers;
@property (nonatomic, readonly, copy) NSString *uuidString;

- (void).cxx_destruct;
- (id)_localizableStringForModeSemanticType:(long long)arg1;
- (id)_localizedStringForDrivingTriggerFromBundle:(id)arg1 semanticType:(long long)arg2 userModeName:(id)arg3;
- (id)_localizedStringForGameControllerTriggerFromBundle:(id)arg1 semanticType:(long long)arg2 userModeName:(id)arg3;
- (id)_localizedStringForLocationTriggerFromBundle:(id)arg1 semanticType:(long long)arg2 userModeName:(id)arg3;
- (id)_localizedStringForScreenActivityTriggerFromBundle:(id)arg1 semanticType:(long long)arg2 userModeName:(id)arg3;
- (id)_localizedStringForSleepingTriggerFromBundle:(id)arg1 semanticType:(long long)arg2 userModeName:(id)arg3;
- (id)_localizedStringForSmartActivationFromBundle:(id)arg1 semanticType:(long long)arg2 userModeName:(id)arg3;
- (id)_localizedStringForWorkoutTriggerFromBundle:(id)arg1 semanticType:(long long)arg2 userModeName:(id)arg3;
- (id)activity;
- (unsigned long long)hash;
- (id)init;
- (id)initWithActivity:(id)arg1 activitySuggestionClient:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXActivityTriggerSuggestion:(id)arg1;
- (id)localizedTriggerSuggestionText;
- (unsigned long long)location;
- (id)suggestionUUID;
- (id)triggers;
- (id)uuidString;

@end
