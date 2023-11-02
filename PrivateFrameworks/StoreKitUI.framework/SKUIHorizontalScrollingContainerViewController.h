
@interface SKUIHorizontalScrollingContainerViewController : SKUIViewController <SKUIProxyScrollViewDelegate, SKUIScrollViewDelegateObserver, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _contentCollectionView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentCollectionViewItemSize;
    <SKUIHorizontalScrollingContainerViewControllerDelegate> * _delegate;
    bool  _initialScrollWasPerformed;
    bool  _isHandlingScrollViewDidScroll;
    UICollectionView * _menuBarCollectionView;
    SKUIProxyScrollView * _proxyScrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _proxyScrollViewContentInsetAdjustment;
    NSMapTable * _viewControllerToExistingContentInsetAdjustment;
    NSArray * _viewControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIHorizontalScrollingContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexPath *indexPathOfFocusedItem;
@property (nonatomic, readonly) bool initialScrollWasPerformed;
@property (nonatomic, retain) UICollectionView *menuBarCollectionView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *viewControllers;

- (void).cxx_destruct;
- (void)_applyNewContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 toViewController:(id)arg2;
- (void)_applyNewContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 toViewControllers:(id)arg2;
- (id)_indexPathOfFocusedContentItemWithDistanceToFocusedPosition:(double*)arg1 layoutAttributes:(id*)arg2;
- (void)_scrollViewDidScroll:(id)arg1;
- (void)_scrollViewWillBeginDecelerating:(id)arg1;
- (void)_setViewControllers:(id)arg1 collectionViewsUpdateHandler:(id /* block */)arg2;
- (void)_synchronizeContentCollectionViewWithMenuBarCollectionView;
- (void)_synchronizeMenuBarCollectionViewWithContentCollectionView;
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (id)indexPathOfFocusedItem;
- (bool)initialScrollWasPerformed;
- (id)menuBarCollectionView;
- (void)observedScrollViewDidScroll:(id)arg1;
- (void)observedScrollViewWillBeginDecelerating:(id)arg1;
- (void)replaceViewControllerAtIndex:(unsigned long long)arg1 withViewController:(id)arg2;
- (void)scrollToItemAtIndexPath:(id)arg1 animated:(bool)arg2;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMenuBarCollectionView:(id)arg1;
- (void)setNeedsViewControllerContentScrollViewContentInsetUpdate;
- (void)setViewControllers:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })viewControllerContentScrollViewContentInset;
- (id)viewControllers;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end