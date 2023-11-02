
@interface REMTemplateSectionContextChangeItem : NSObject {
    REMTemplateChangeItem * _templateChangeItem;
}

@property (nonatomic) bool shouldUpdateSectionsOrdering;
@property (nonatomic, retain) REMTemplateChangeItem *templateChangeItem;
@property (nonatomic, retain) REMMemberships *unsavedMembershipsOfRemindersInSections;
@property (nonatomic, retain) NSArray *unsavedSectionIDsOrdering;

- (void).cxx_destruct;
- (id)initWithTemplateChangeItem:(id)arg1;
- (void)setShouldUpdateSectionsOrdering:(bool)arg1;
- (void)setTemplateChangeItem:(id)arg1;
- (void)setUnsavedMembershipsOfRemindersInSections:(id)arg1;
- (void)setUnsavedSectionIDsOrdering:(id)arg1;
- (bool)shouldUpdateSectionsOrdering;
- (id)templateChangeItem;
- (void)undeleteSectionWithID:(id)arg1;
- (id)unsavedMembershipsOfRemindersInSections;
- (id)unsavedSectionIDsOrdering;

@end
