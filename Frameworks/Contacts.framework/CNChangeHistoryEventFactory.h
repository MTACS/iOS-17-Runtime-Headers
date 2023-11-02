
@interface CNChangeHistoryEventFactory : NSObject

- (id)addContactEventWithContact:(id)arg1 containerIdentifier:(id)arg2;
- (id)addContactEventWithContactIdentifier:(id)arg1 containerIdentifier:(id)arg2;
- (id)addGroupEventWithGroup:(id)arg1 containerIdentifier:(id)arg2;
- (id)addMemberToGroupEventWithMember:(id)arg1 group:(id)arg2;
- (id)addSubgroupToGroupEventWithSubgroup:(id)arg1 group:(id)arg2;
- (id)deleteContactEventWithContactIdentifier:(id)arg1;
- (id)deleteContactEventWithContactIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3;
- (id)deleteGroupEventWithGroupIdentifier:(id)arg1;
- (id)deleteGroupEventWithGroupIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3;
- (id)differentMeCardEventWithContactIdentifier:(id)arg1;
- (id)dropEverythingEvent;
- (id)linkContactsEventWithFromContact:(id)arg1 toContact:(id)arg2 unifiedContact:(id)arg3;
- (id)preferredContactForImageEventWithPreferredContact:(id)arg1 unifiedContact:(id)arg2;
- (id)preferredContactForNameEventWithPreferredContact:(id)arg1 unifiedContact:(id)arg2;
- (id)removeMemberFromGroupEventWithMember:(id)arg1 group:(id)arg2;
- (id)removeSubgroupFromGroupEventWithSubgroup:(id)arg1 group:(id)arg2;
- (id)unlinkContactEventWithContact:(id)arg1;
- (id)updateContactEventWithContact:(id)arg1 imagesChanged:(bool)arg2;
- (id)updateContactEventWithContactIdentifier:(id)arg1 imagesChanged:(bool)arg2;
- (id)updateGroupEventWithGroup:(id)arg1;

@end
