
@interface _UICollectionViewLayoutSwipeActionsModule : NSObject <UISwipeActionHost_Internal> {
    struct { 
        unsigned int layoutUpdateOrRefreshPending : 1; 
        unsigned int hasDeferredLayoutUpdateOrRefresh : 1; 
        unsigned int preserveExistingLayoutAttributesForSwipedViews : 1; 
    }  _flags;
    UICollectionViewLayout * _host;
    UISwipeActionController * _swipeActionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UICollectionViewLayout *host;
@property (readonly) Class superclass;
@property (nonatomic, retain) UISwipeActionController *swipeActionController;

- (void).cxx_destruct;
- (bool)_canIgnoreInvalidationContext:(id)arg1;
- (bool)_canSwipeItemAtIndexPath:(id)arg1;
- (id)_cellWithCustomGroupingAtIndexPath:(id)arg1;
- (void)_invalidateSwipeActionsLayoutRefreshingActiveConfigurations:(bool)arg1;
- (void)_performForcedCollectionViewLayoutPreservingExistingLayoutAttributes;
- (void)_transformLayoutAttributes:(id)arg1 ofSeparatorAtBottom:(bool)arg2 forSwipeOccurrence:(id)arg3 isDisappearing:(bool)arg4;
- (void)_updateSwipeActionsConfiguration:(id)arg1 forIndexPath:(id)arg2;
- (void)editingStateDidChange;
- (void)finalizeCollectionViewUpdate:(id)arg1;
- (id)gestureRecognizerViewForSwipeActionController:(id)arg1;
- (bool)hasActiveSwipe;
- (id)host;
- (id)indexPathsWithActiveSwipes;
- (id)initWithHost:(id)arg1;
- (id)itemContainerViewForSwipeActionController:(id)arg1;
- (long long)layoutDirectionForSwipeActionController:(id)arg1;
- (void)processLayoutInvalidationWithContext:(id)arg1 updateConfigurations:(bool)arg2;
- (id)propertyAnimatorForCollectionViewUpdates:(id)arg1 withCustomAnimator:(id)arg2;
- (void)revealTrailingSwipeActionsForIndexPath:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setSwipeActionController:(id)arg1;
- (id)swipeActionController;
- (void)swipeActionController:(id)arg1 cleanupActionsView:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)swipeActionController:(id)arg1 didBeginSwipeForItemAtIndexPath:(id)arg2;
- (void)swipeActionController:(id)arg1 didEndSwipeForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })swipeActionController:(id)arg1 extraInsetsForItemAtIndexPath:(id)arg2;
- (id)swipeActionController:(id)arg1 indexPathForTouchLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)swipeActionController:(id)arg1 insertActionsView:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)swipeActionController:(id)arg1 leadingSwipeConfigurationForItemAtIndexPath:(id)arg2;
- (bool)swipeActionController:(id)arg1 mayBeginSwipeForItemAtIndexPath:(id)arg2;
- (void)swipeActionController:(id)arg1 swipeOccurrence:(id)arg2 didChangeStateFrom:(long long)arg3 to:(long long)arg4;
- (id)swipeActionController:(id)arg1 trailingSwipeConfigurationForItemAtIndexPath:(id)arg2;
- (id)swipeActionController:(id)arg1 viewForItemAtIndexPath:(id)arg2;
- (void)swipeActionController:(id)arg1 willBeginSwipeForItemAtIndexPath:(id)arg2;
- (void)swipeItemAtIndexPath:(id)arg1 direction:(unsigned long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)swipeViewManipulatorForSwipeActionController:(id)arg1;
- (void)teardown;
- (void)transformCellLayoutAttributes:(id)arg1 isDisappearing:(bool)arg2;
- (void)transformDecorationLayoutAttributes:(id)arg1 isDisappearing:(bool)arg2;
- (void)updateWithDataSourceTranslator:(id)arg1;

@end
