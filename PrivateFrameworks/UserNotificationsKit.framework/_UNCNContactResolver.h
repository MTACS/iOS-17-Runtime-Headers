
@interface _UNCNContactResolver : NSObject {
    CNContactStore * _contactStore;
    NSArray * _contactStoreSearchKeys;
}

- (void).cxx_destruct;
- (id)_fullnameForCNContact:(id)arg1;
- (bool)_isSuggestedForContact:(id)arg1;
- (bool)_isSuggestedForLabeledValue:(id)arg1;
- (id)_matchForContact:(id)arg1 matchingLabel:(id)arg2 matchType:(unsigned long long)arg3;
- (id)_matchThatMatchesEmailAddress:(id)arg1 forContact:(id)arg2;
- (id)_matchThatMatchesSocialProfile:(id)arg1 bundleIdentifier:(id)arg2 forContact:(id)arg3;
- (id)bestMatchForEmailAddress:(id)arg1;
- (id)bestMatchForPhoneNumber:(id)arg1;
- (id)bestMatchForPredicate:(id)arg1 contactToMatch:(id /* block */)arg2;
- (id)bestMatchForSocialProfile:(id)arg1 bundleIdentifier:(id)arg2;
- (id)bestMatchForUserIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (id)bestMatchForUsername:(id)arg1 bundleIdentifier:(id)arg2;
- (id)confirm:(bool)arg1 match:(id)arg2;
- (id)contactForIdentifier:(id)arg1;
- (id)init;
- (id)matchThatMatchesPhoneNumber:(id)arg1 forContact:(id)arg2;
- (id)resultForContactIdentifier:(id)arg1;
- (id)resultForContactIdentifier:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 userIdentifier:(id)arg4 username:(id)arg5 bundleIdentifier:(id)arg6;

@end
