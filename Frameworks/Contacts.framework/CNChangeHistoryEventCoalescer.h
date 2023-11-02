
@interface CNChangeHistoryEventCoalescer : NSObject <CNChangeHistoryEventVisitorPrivate> {
    CNMutableOrderedDictionary * _addedContacts;
    CNMutableOrderedDictionary * _addedGroups;
    NSMutableArray * _contactLinkingEvents;
    NSMutableArray * _controlEvents;
    CNMutableOrderedDictionary * _deletedContacts;
    CNMutableOrderedDictionary * _deletedGroups;
    NSMutableArray * _groupMembershipEvents;
    NSMutableArray * _otherContactEvents;
    CNMutableOrderedDictionary * _updatedContacts;
    CNMutableOrderedDictionary * _updatedGroups;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *events;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)coalesceEvents:(id)arg1;
+ (id)coalescingLog;

- (void).cxx_destruct;
- (id)events;
- (id)init;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitAddGroupEvent:(id)arg1;
- (void)visitAddMemberToGroupEvent:(id)arg1;
- (void)visitAddSubgroupToGroupEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDeleteGroupEvent:(id)arg1;
- (void)visitDifferentMeCardEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitLinkContactsEvent:(id)arg1;
- (void)visitPreferredContactForImageEvent:(id)arg1;
- (void)visitPreferredContactForNameEvent:(id)arg1;
- (void)visitRemoveMemberFromGroupEvent:(id)arg1;
- (void)visitRemoveSubgroupFromGroupEvent:(id)arg1;
- (void)visitUnlinkContactEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;
- (void)visitUpdateGroupEvent:(id)arg1;

@end
