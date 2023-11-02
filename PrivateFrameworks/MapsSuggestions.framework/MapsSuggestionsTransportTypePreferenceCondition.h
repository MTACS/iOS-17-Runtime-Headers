
@interface MapsSuggestionsTransportTypePreferenceCondition : MapsSuggestionsBaseCondition {
    long long  _requiredTransportTypePreference;
}

- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 requiresTransportType:(long long)arg2;
- (bool)isTrue;

@end
