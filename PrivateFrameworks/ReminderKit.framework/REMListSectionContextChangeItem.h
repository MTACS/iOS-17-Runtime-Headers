
@interface REMListSectionContextChangeItem : NSObject {
    REMListChangeItem * _listChangeItem;
}

@property (nonatomic, retain) REMListChangeItem *listChangeItem;
@property (nonatomic) bool shouldUpdateSectionsOrdering;
@property (nonatomic, retain) REMMemberships *unsavedMembershipsOfRemindersInSections;
@property (nonatomic, retain) NSArray *unsavedSectionIDsOrdering;

- (void).cxx_destruct;
- (id)initWithListChangeItem:(id)arg1;
- (id)listChangeItem;
- (void)setListChangeItem:(id)arg1;
- (void)setShouldUpdateSectionsOrdering:(bool)arg1;
- (void)setUnsavedMembershipsOfRemindersInSections:(id)arg1;
- (void)setUnsavedSectionIDsOrdering:(id)arg1;
- (bool)shouldUpdateSectionsOrdering;
- (void)undeleteSectionWithID:(id)arg1;
- (id)unsavedMembershipsOfRemindersInSections;
- (id)unsavedSectionIDsOrdering;

@end
