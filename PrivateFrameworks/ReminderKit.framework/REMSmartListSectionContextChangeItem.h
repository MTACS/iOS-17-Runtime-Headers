
@interface REMSmartListSectionContextChangeItem : NSObject {
    REMSmartListChangeItem * _smartListChangeItem;
}

@property (nonatomic) bool shouldUpdateSectionsOrdering;
@property (nonatomic, retain) REMSmartListChangeItem *smartListChangeItem;
@property (nonatomic, retain) REMMemberships *unsavedMembershipsOfRemindersInSections;
@property (nonatomic, retain) NSArray *unsavedSectionIDsOrdering;

- (void).cxx_destruct;
- (id)initWithSmartListChangeItem:(id)arg1;
- (void)setShouldUpdateSectionsOrdering:(bool)arg1;
- (void)setSmartListChangeItem:(id)arg1;
- (void)setUnsavedMembershipsOfRemindersInSections:(id)arg1;
- (void)setUnsavedSectionIDsOrdering:(id)arg1;
- (bool)shouldUpdateSectionsOrdering;
- (id)smartListChangeItem;
- (void)undeleteSectionWithID:(id)arg1;
- (id)unsavedMembershipsOfRemindersInSections;
- (id)unsavedSectionIDsOrdering;

@end
