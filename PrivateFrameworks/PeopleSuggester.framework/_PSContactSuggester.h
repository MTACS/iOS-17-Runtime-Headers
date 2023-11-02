
@interface _PSContactSuggester : NSObject {
    NSXPCConnection * _connection;
    CNContactStore * _contactStore;
    _CDInteractionStore * _interactionStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    _PSContactResolver * contactResolver;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) _CDInteractionStore *interactionStore;

+ (id)contactPriorSuggestionsForText:(id)arg1;
+ (id)defaultCorrelationsSessionFileForContactPriors;

- (void).cxx_destruct;
- (void)computeAndSaveContactPriorArchive;
- (id)computeContactPriorsForContactIdentifiers:(id)arg1;
- (id)computeContactPriorsForContactIdentifiers:(id)arg1 withTimeConstant:(long long)arg2 withInteractionMechanisms:(id)arg3 asOf:(id)arg4 overLookbackOf:(long long)arg5;
- (id)contactAndGroupSuggestionsWithMaxSuggestions:(long long)arg1 lookBackDays:(long long)arg2 interactions:(id)arg3;
- (id)contactKeysToFetch;
- (id)contactPriorsForContactIdentifiers:(id)arg1;
- (id)contactStore;
- (id)contactSuggestionsForPeopleWidgetWithMaxSuggestions:(long long)arg1 excludeContactsWithIdentifiers:(id)arg2;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 contactKeysTofetch:(id)arg2 interactionDomains:(id)arg3 appleUsersOnly:(bool)arg4;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsByIdentifiers:(id)arg2;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsByIdentifiers:(id)arg2 interactionHistoryCap:(long long)arg3;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsByIdentifiers:(id)arg2 lookBackDays:(long long)arg3 interactions:(id)arg4 modeAvocado:(bool)arg5;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsByIdentifiers:(id)arg2 lookBackDays:(long long)arg3 interactions:(id)arg4 modeAvocado:(bool)arg5 interactionHistoryCap:(long long)arg6;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsWithIdentifiers:(id)arg2;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 interactionDomains:(id)arg2 appleUsersOnly:(bool)arg3;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 interactionDomains:(id)arg2 referenceDate:(id)arg3 appleUsersOnly:(bool)arg4 includeGroups:(bool)arg5;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 interactionDomains:(id)arg2 referenceDate:(id)arg3 appleUsersOnly:(bool)arg4 includeGroups:(bool)arg5 excludeContactsByIdentifiers:(id)arg6;
- (id)contactsWithMaxSuggestions:(long long)arg1 contactKeysTofetch:(id)arg2 interactionDomains:(id)arg3 referenceDate:(id)arg4 appleUsersOnly:(bool)arg5;
- (void)dealloc;
- (float)decayForReferenceDate:(id)arg1 relativeTo:(id)arg2 withTimeConstant:(double)arg3;
- (void)gameCenterSuggestionConsumedWithContactHandle:(id)arg1;
- (void)gameCenterSuggestionConsumedWithGroupIdentifier:(id)arg1;
- (id)gameCenterSuggestionsWithMaxSuggestions:(long long)arg1 interactionDomains:(id)arg2 appleUsersOnly:(bool)arg3;
- (id)gameCenterSuggestionsWithMaxSuggestions:(long long)arg1 interactionDomains:(id)arg2 appleUsersOnly:(bool)arg3 includeGroupSuggestions:(bool)arg4 excludeContactsByIdentifiers:(id)arg5;
- (id)getDefaultContactPriorForContactId:(id)arg1 withModelName:(id)arg2 withModelVersion:(id)arg3;
- (id)init;
- (id)interactionStore;
- (void)peopleWidgetFeedbackWithContactHandle:(id)arg1;
- (void)peopleWidgetFeedbackWithContactIdentifier:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setInteractionStore:(id)arg1;
- (float)sigmoid:(float)arg1;
- (void)writeArchive:(id)arg1;

@end
