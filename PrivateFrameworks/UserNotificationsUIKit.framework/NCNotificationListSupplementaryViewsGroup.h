
@interface NCNotificationListSupplementaryViewsGroup : NCNotificationListPresentableGroup <NCNotificationListCellActionProviding, NCNotificationListSupplementaryHostingViewControllerDelegate> {
    NSString * _groupName;
    NSString * _groupingIdentifier;
    NSMutableArray * _orderedCells;
    NSString * _sectionIdentifier;
    id /* block */  _viewControllerSortComparator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListPresentableGroupDelegate><NCNotificationListSupplementaryViewsGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupingIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *hostingViewControllers;
@property (nonatomic, retain) NSMutableArray *orderedCells;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *supplementaryViewControllers;
@property (nonatomic, copy) id /* block */ viewControllerSortComparator;

+ (id)presentableTypes;

- (void).cxx_destruct;
- (id)_cellAtIndex:(unsigned long long)arg1;
- (id)_clearActionForCell:(id)arg1;
- (void)_clearCell:(id)arg1;
- (id)_configurationAtIndex:(unsigned long long)arg1;
- (id)_configurationForCell:(id)arg1;
- (unsigned long long)_existingIndexMatchingSupplementaryViewController:(id)arg1;
- (id)_hostingViewControllerAtIndex:(unsigned long long)arg1;
- (id)_hostingViewControllerForCell:(id)arg1;
- (unsigned long long)_indexOfHostingViewController:(id)arg1;
- (id)_logDescription;
- (void)_matchStyleOfCell:(id)arg1 toHostingViewController:(id)arg2;
- (void)_removeSupplementaryViewControllerAtIndex:(unsigned long long)arg1;
- (bool)_shouldAllowHostedViewControllersUserInteraction;
- (unsigned long long)_sortedIndexForViewController:(id)arg1;
- (id)_supplementaryViewControllerAtIndex:(unsigned long long)arg1;
- (void)_updateHostingViewController:(id)arg1 cell:(id)arg2 withConfiguration:(id)arg3;
- (void)_updateSupplementaryViewController:(id)arg1 withConfiguration:(id)arg2 existingIndex:(unsigned long long)arg3 proposedIndex:(unsigned long long)arg4;
- (void)_updateUserInteraction;
- (void)clearAll;
- (id)clearAllText;
- (bool)containsSupplementaryViewController:(id)arg1;
- (unsigned long long)count;
- (id)defaultActionForNotificationListCell:(id)arg1;
- (id)groupName;
- (id)groupingIdentifier;
- (id)headerText;
- (id)hostingPlatterViewForSupplementaryViewController:(id)arg1;
- (id)hostingViewControllers;
- (id)init;
- (void)insertSupplementaryViewController:(id)arg1 withConfiguration:(id)arg2;
- (void)notificationListCell:(id)arg1 didBeginHidingActionsForSwipeInteraction:(id)arg2;
- (void)notificationListCell:(id)arg1 didBeginRevealingActionsForSwipeInteraction:(id)arg2;
- (double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2 withWidth:(double)arg3;
- (id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)notificationListViewNumberOfItems:(id)arg1;
- (id)orderedCells;
- (void)recycleView:(id)arg1;
- (void)removeSupplementaryViewController:(id)arg1;
- (id)sectionIdentifier;
- (void)setGroupName:(id)arg1;
- (void)setGroupingIdentifier:(id)arg1;
- (void)setOrderedCells:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setViewControllerSortComparator:(id /* block */)arg1;
- (bool)shouldContinuePresentingActionButtonsForNotificationListCell:(id)arg1;
- (bool)shouldImmediatelyReveal;
- (bool)shouldShowDefaultActionForNotificationListCell:(id)arg1;
- (bool)shouldShowSupplementaryActionsForNotificationListCell:(id)arg1;
- (bool)shouldVerticallyStackActionButtonsForNotificationListCell:(id)arg1;
- (id)supplementaryActionsForNotificationListCell:(id)arg1;
- (void)supplementaryHostingViewControllerPreferredContentSizeChanged:(id)arg1;
- (void)supplementaryHostingViewControllerWasTapped:(id)arg1;
- (id)supplementaryViewControllers;
- (void)toggleGroupedState;
- (void)updatePositionIfNeededForSupplementaryViewController:(id)arg1;
- (void)updateSupplementaryViewController:(id)arg1 withConfiguration:(id)arg2;
- (id /* block */)viewControllerSortComparator;

@end
