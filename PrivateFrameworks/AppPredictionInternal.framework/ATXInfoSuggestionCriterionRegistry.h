
@interface ATXInfoSuggestionCriterionRegistry : NSObject {
    NSDictionary * _registry;
}

- (void).cxx_destruct;
- (id)availableCriterionIdentifiersForSourceIdentifier:(id)arg1;
- (long long)confidenceLevelForCriterion:(id)arg1 sourceIdentifier:(id)arg2;
- (id)init;
- (bool)isSourceIdentifierRegistered:(id)arg1;

@end
