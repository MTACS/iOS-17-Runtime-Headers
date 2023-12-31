
@interface NCNotificationSummarizedSectionList : NCNotificationCombinedSectionList <NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationSummaryOrderProviderDelegate, PLSwipeInteractionDelegate> {
    bool  _adjustsFontForContentSizeCategory;
    bool  _horizontallyDisplaced;
    bool  _performingClearAll;
    bool  _shouldAdjustIndex;
    NCNotificationSummaryOrderProvider * _summaryOrderProvider;
    NCNotificationSummaryPlatterContainingView * _summaryPlatterContainingView;
    PLSwipeInteraction * _summaryPlatterViewSwipeInteraction;
}

@property (nonatomic, readonly, copy) NSUUID *atxUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHorizontallyDisplaced, nonatomic) bool horizontallyDisplaced;
@property (getter=isPerformingClearAll, nonatomic) bool performingClearAll;
@property (nonatomic) bool shouldAdjustIndex;
@property (nonatomic, retain) NCNotificationSummaryOrderProvider *summaryOrderProvider;
@property (nonatomic, retain) NCNotificationSummaryPlatterContainingView *summaryPlatterContainingView;
@property (nonatomic, retain) PLSwipeInteraction *summaryPlatterViewSwipeInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clearAction;
- (void)_collapseAllGroupListViews;
- (void)_collapseAllSectionListViews;
- (void)_collapseSection;
- (void)_configureSectionListView:(id)arg1;
- (void)_configureSummaryPlatterViewSwipeInteractionIfNecessary;
- (void)_configureSwipeClippingIfNecessary;
- (void)_didPerformSignificantUserInteraction;
- (void)_expandSection;
- (void)_hideSummaryPlatterView;
- (void)_insertViewToListAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (id)_newSectionHeaderView;
- (id)_notificationGroupsForDigestRankOrdering;
- (void)_prepareForExpand;
- (void)_reloadGroupListLeadingNotificationRequests;
- (void)_removeViewFromListAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_resetSwipeClipping;
- (void)_setupSwipeClipping;
- (bool)_shouldHideNotificationGroupList:(id)arg1;
- (bool)_shouldHideNotificationRequest:(id)arg1;
- (bool)_shouldPerformSwipeClipping;
- (void)_showSummaryPlatterView;
- (void)_updateSectionForRankOrderedIfNecessaryAndReloadDigest:(bool)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)atxUUID;
- (double)buttonsCornerRadiusForSwipeInteraction:(id)arg1;
- (void)clearAll;
- (void)collapseSummarizedSectionList;
- (id)comparisonDate;
- (double)footerViewHeightForNotificationList:(id)arg1 withWidth:(double)arg2;
- (void)insertNotificationRequest:(id)arg1;
- (bool)isHorizontallyDisplaced;
- (bool)isPerformingClearAll;
- (id)listComponentDelegateForSummaryPlatterViewForNotificationSummaryOrderProvider:(id)arg1;
- (id)materialGroupNameBaseForNotificationSummaryOrderProvider:(id)arg1;
- (void)mergeNotificationGroups:(id)arg1 reorderGroupNotifications:(bool)arg2;
- (unsigned long long)notificationCountForSummaryOrderProvider:(id)arg1;
- (bool)notificationGroupListShouldReloadNotificationCells:(id)arg1;
- (void)notificationListBaseComponentDidRemoveAll:(id)arg1;
- (void)notificationListComponent:(id)arg1 didRemoveNotificationRequest:(id)arg2;
- (double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2 withWidth:(double)arg3;
- (id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)notificationListViewNumberOfItems:(id)arg1;
- (void)notificationSummaryOrderProvider:(id)arg1 didUpdateOrderedNotificationGroupLists:(id)arg2;
- (void)notificationSummaryOrderProvider:(id)arg1 requestsPerformingDefaultActionForNotificationRequest:(id)arg2 inGroupList:(id)arg3;
- (void)notificationSummaryOrderProviderDidTapOnLeadingSummaryPlatterView:(id)arg1;
- (void)notificationSummaryOrderProviderRequestsReloadingLeadingSummaryPlatterView:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)sectionHeaderViewDidRequestCollapsing:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (void)setHorizontallyDisplaced:(bool)arg1;
- (void)setPerformingClearAll:(bool)arg1;
- (void)setShouldAdjustIndex:(bool)arg1;
- (void)setSummaryOrderProvider:(id)arg1;
- (void)setSummaryPlatterContainingView:(id)arg1;
- (void)setSummaryPlatterViewSwipeInteraction:(id)arg1;
- (bool)shouldAdjustIndex;
- (bool)shouldContinuePresentingActionButtonsForSwipeInteraction:(id)arg1;
- (id)summaryOrderProvider;
- (id)summaryPlatterContainingView;
- (id)summaryPlatterViewSwipeInteraction;
- (id)swipeInteraction:(id)arg1 actionsToRevealFromLayoutLocation:(unsigned long long)arg2;
- (void)swipeInteraction:(id)arg1 didMoveToNewXPosition:(double)arg2;
- (bool)swipeInteraction:(id)arg1 shouldRevealActionsFromLayoutLocation:(unsigned long long)arg2;
- (void)swipeInteractionDidBeginHidingActions:(id)arg1;
- (void)swipeInteractionDidBeginRevealingActions:(id)arg1;
- (void)swipeInteractionDidSignificantUserInteraction:(id)arg1;
- (id)titlesForSectionListsInSummaryForSummaryOrderProvider:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (id)viewToMoveForSwipeInteraction:(id)arg1;

@end
