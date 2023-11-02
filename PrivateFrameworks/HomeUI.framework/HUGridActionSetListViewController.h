
@interface HUGridActionSetListViewController : HUControllableItemCollectionViewController <HFItemManagerDelegate> {
    <HUGridActionSetListViewControllerDelegate> * _actionSetListViewControllerDelegate;
    bool  _shouldAllowItemPresentation;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) HUGridActionSetItemManager *actionSetItemManager;
@property (nonatomic) <HUGridActionSetListViewControllerDelegate> *actionSetListViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) bool shouldAllowItemPresentation;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

+ (double)requiredHeightWithLayoutOptions:(id)arg1 numberOfItems:(unsigned long long)arg2;
+ (unsigned long long)updateMode;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_detailsViewControllerForActionSetItem:(id)arg1;
- (void)_internalSetLayoutOptions:(id)arg1;
- (id)_performTapActionForItem:(id)arg1 tappedArea:(id)arg2;
- (long long)_scrollDirectionForLayoutOptions:(id)arg1;
- (void)_updateLayoutScrollDirectionIfNeeded;
- (id)actionSetItemManager;
- (id)actionSetListViewControllerDelegate;
- (bool)canReorderItemAtIndexPath:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (void)diffableDataItemManager:(id)arg1 didUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4;
- (bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)init;
- (id)initWithRoom:(id)arg1 onlyShowFavorites:(bool)arg2;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
- (id)layoutOptions;
- (bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (id)reorderableItemListForSection:(long long)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setActionSetListViewControllerDelegate:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setReorderableItemList:(id)arg1 forSection:(long long)arg2;
- (void)setShouldAllowItemPresentation:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)shouldAllowItemPresentation;
- (id)titleLabel;
- (void)viewDidLoad;

@end
