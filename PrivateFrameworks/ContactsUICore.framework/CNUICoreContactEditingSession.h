
@interface CNUICoreContactEditingSession : NSObject {
    CNUICoreContactScratchpad * _contactsAdded;
    CNUICoreContactScratchpad * _contactsRemoved;
    CNUICoreContactScratchpad * _contactsUpdated;
}

@property (nonatomic, readonly) NSArray *addedContacts;
@property (nonatomic, retain) CNUICoreContactScratchpad *contactsAdded;
@property (nonatomic, retain) CNUICoreContactScratchpad *contactsRemoved;
@property (nonatomic, retain) CNUICoreContactScratchpad *contactsUpdated;
@property (nonatomic, readonly) bool inProgress;
@property (nonatomic, readonly) NSArray *removedContacts;
@property (nonatomic, readonly) NSArray *updatedContacts;

+ (bool)isEdiingStateOfContactValid:(long long)arg1;

- (void).cxx_destruct;
- (void)addContacts:(id)arg1;
- (id)addedContacts;
- (id)addedContactsMatchingContacts:(id)arg1;
- (id)applyChangesToContacts:(id)arg1;
- (id)contactsAdded;
- (id)contactsRemoved;
- (id)contactsUpdated;
- (bool)containsAddedContactMatchingContact:(id)arg1;
- (bool)containsRemovedContactMatchingContact:(id)arg1;
- (bool)containsUpdatedContactMatchingContact:(id)arg1;
- (id)description;
- (long long)editingStateOfContact:(id)arg1;
- (id)generateSaveRequest;
- (bool)inProgress;
- (id)init;
- (bool)isContactUnseen:(id)arg1;
- (void)removeContacts:(id)arg1;
- (id)removedContacts;
- (id)removedContactsMatchingContacts:(id)arg1;
- (void)setContactsAdded:(id)arg1;
- (void)setContactsRemoved:(id)arg1;
- (void)setContactsUpdated:(id)arg1;
- (void)updateContacts:(id)arg1;
- (id)updatedContacts;
- (id)updatedContactsMatchingContacts:(id)arg1;
- (void)verifyConsistencyOfEditingSessionForContact:(id)arg1;
- (bool)wasContactAdded:(id)arg1;
- (bool)wasContactRemoved:(id)arg1;
- (bool)wasContactUpdated:(id)arg1;

@end
