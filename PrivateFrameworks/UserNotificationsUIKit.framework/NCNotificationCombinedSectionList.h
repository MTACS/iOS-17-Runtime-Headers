
@interface NCNotificationCombinedSectionList : NCNotificationStructuredSectionList {
    bool  _adjustsFontForContentSizeCategory;
    NSMutableArray * _chronologicalSectionLists;
    NSMutableArray * _sectionLists;
}

@property (nonatomic, retain) NSMutableArray *chronologicalSectionLists;
@property (nonatomic, retain) NSMutableArray *sectionLists;

- (void).cxx_destruct;
- (id)_allSectionLists;
- (void)_invalidateSectionListViewForChronologicalSectionsIfNecessary;
- (void)_performOperationOnAllSectionLists:(id /* block */)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (id)allNotificationRequests;
- (id)chronologicalSectionLists;
- (void)clearAll;
- (void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)containsNotificationRequest:(id)arg1;
- (bool)containsSectionList:(id)arg1;
- (unsigned long long)count;
- (void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasVisibleContentToReveal;
- (unsigned long long)indexOfSectionList:(id)arg1;
- (id)initWithTitle:(id)arg1 sectionType:(unsigned long long)arg2;
- (void)insertNotificationSectionList:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (void)insertNotificationSectionListChronologically:(id)arg1 animated:(bool)arg2;
- (void)mergeNotificationGroups:(id)arg1 reorderGroupNotifications:(bool)arg2;
- (unsigned long long)notificationCount;
- (void)notificationListBaseComponentDidRemoveAll:(id)arg1;
- (void)notificationListComponent:(id)arg1 didRemoveNotificationRequest:(id)arg2;
- (double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2 withWidth:(double)arg3;
- (id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (void)notificationsLoadedForSectionIdentifier:(id)arg1;
- (id)orderedNotificationListComponents;
- (void)reloadNotificationRequest:(id)arg1;
- (void)removeNotificationSectionList:(id)arg1 animated:(bool)arg2;
- (id)sectionListAtIndex:(unsigned long long)arg1;
- (id)sectionLists;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setChronologicalSectionLists:(id)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (void)setSectionLists:(id)arg1;
- (void)sortNotificationGroupListsIfNecessary;
- (void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(bool)arg2;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;

@end
