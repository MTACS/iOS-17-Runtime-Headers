
@interface PXGadgetNavigationHelper : NSObject {
    <PXGadgetNavigationHelperDelegate> * _delegate;
    NSTimer * _navigationInvalidationTimer;
    PXGadgetNavigationItem * _pendingNavigationItem;
}

@property (nonatomic) <PXGadgetNavigationHelperDelegate> *delegate;
@property (nonatomic, readonly) bool hasPendingNavigation;
@property (nonatomic) NSTimer *navigationInvalidationTimer;
@property (nonatomic, retain) PXGadgetNavigationItem *pendingNavigationItem;

- (void).cxx_destruct;
- (bool)_navigateToGadget:(id)arg1 animated:(bool)arg2 navigationBlock:(id /* block */)arg3;
- (void)_pendingNavigationInvalidationTimerFired:(id)arg1;
- (void)_stopPendingNavigationTimer;
- (id)delegate;
- (bool)hasPendingNavigation;
- (void)invalidateAnyPendingNavigation;
- (void)navigateIfNeeded;
- (void)navigateToFeaturedPhotoWithSuggestionIdentifier:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)navigateToFirstGadgetAndFirstNestedGadget:(bool)arg1;
- (bool)navigateToFirstGadgetMatchingCriteria:(id /* block */)arg1 animated:(bool)arg2 nestedNavigationBlock:(id /* block */)arg3;
- (bool)navigateToFirstGadgetWithTypeDeferIfNeeded:(unsigned long long)arg1 animated:(bool)arg2 nestedNavigationBlock:(id /* block */)arg3;
- (bool)navigateToGadgetDeferIfNeeded:(id)arg1 animated:(bool)arg2 nestedNavigationBlock:(id /* block */)arg3;
- (void)navigateToGadgetForCMMInvitationWithIdentifier:(id)arg1;
- (void)navigateToGadgetInHorizontalGadget:(id)arg1 animated:(bool)arg2;
- (bool)navigateToGadgetWithIdDeferIfNeeded:(id)arg1 animated:(bool)arg2 nestedNavigationBlock:(id /* block */)arg3;
- (void)navigateToGadgetWithTypeSurveyCongratulationsWithGadgetType:(unsigned long long)arg1;
- (void)navigateToInvitationCMMWithUUID:(id)arg1 animated:(bool)arg2;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(bool)arg1;
- (void)navigateToSectionWithGadgetType:(unsigned long long)arg1 andGadget:(id)arg2 animated:(bool)arg3;
- (void)navigateToSharedAlbumInviteWithUUID:(id)arg1 animated:(bool)arg2;
- (void)navigateToSharedAlbumInvitesAnimated:(bool)arg1;
- (id)navigationInvalidationTimer;
- (id)pendingNavigationItem;
- (void)setDelegate:(id)arg1;
- (void)setNavigationInvalidationTimer:(id)arg1;
- (void)setPendingNavigationItem:(id)arg1;
- (void)startPendingNavigationTimer;

@end
