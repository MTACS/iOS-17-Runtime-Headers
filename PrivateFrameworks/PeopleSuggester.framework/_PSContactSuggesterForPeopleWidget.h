
@interface _PSContactSuggesterForPeopleWidget : NSObject {
    _PASLock * _candidateContacts;
    NSMutableSet * _nonpriorityFamilyMembers;
    NSMutableSet * _priorityFamilyMembers;
}

@property (nonatomic, retain) _PASLock *candidateContacts;
@property (nonatomic, retain) NSMutableSet *nonpriorityFamilyMembers;
@property (nonatomic, retain) NSMutableSet *priorityFamilyMembers;

- (void).cxx_destruct;
- (id)allEmailAndPhoneNumberHandlesForContact:(id)arg1;
- (id)candidateContacts;
- (id)contactKeysToFetch;
- (id)contactSuggestionsWithMaxSuggestions:(long long)arg1 excludeContactsWithIdentifiers:(id)arg2;
- (id)familyMemberContactHandles;
- (id)familyRecommendedContacts;
- (id)favoritedContacts;
- (id)iCloudFamilyMembers;
- (id)init;
- (id)interactionBasedRecommendedContacts;
- (id)nonpriorityFamilyMembers;
- (id)priorityFamilyMembers;
- (void)processFamilyMember:(id)arg1 toFillContactArray:(id)arg2;
- (void)setCandidateContacts:(id)arg1;
- (void)setNonpriorityFamilyMembers:(id)arg1;
- (void)setPriorityFamilyMembers:(id)arg1;

@end
