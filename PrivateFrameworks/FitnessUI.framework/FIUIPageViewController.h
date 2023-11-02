
@interface FIUIPageViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _collectionViewLayout;
    long long  _currentlyDisplayedIndex;
    <FIUIPageViewControllerDataSource> * _dataSource;
    <FIUIPageViewControllerDelegate> * _delegate;
    UIPageControl * _pageControl;
    long long  _scrollDirection;
    bool  _shouldNotifyDelegateWhenScrollViewSettles;
    bool  _showsPagingIndicator;
    bool  _userDidTapPageControl;
    NSCache * _viewControllerForIndexPath;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic) long long currentlyDisplayedIndex;
@property (nonatomic, readonly) UIViewController *currentlyDisplayedViewController;
@property (nonatomic) <FIUIPageViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FIUIPageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPageControl *pageControl;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) bool shouldNotifyDelegateWhenScrollViewSettles;
@property (nonatomic) bool showsPagingIndicator;
@property (readonly) Class superclass;
@property (nonatomic) bool userDidTapPageControl;
@property (nonatomic, retain) NSCache *viewControllerForIndexPath;

- (void).cxx_destruct;
- (void)_addViewController:(id)arg1 toCell:(id)arg2;
- (void)_pageSelectedWithControl:(id)arg1;
- (void)_scrollViewDidStop;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionViewLayout;
- (long long)currentlyDisplayedIndex;
- (id)currentlyDisplayedViewController;
- (id)dataSource;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)pageControl;
- (void)reloadData;
- (long long)scrollDirection;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setCurrentlyDisplayedIndex:(long long)arg1;
- (void)setCurrentlyDisplayedIndex:(long long)arg1 animated:(bool)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPageControl:(id)arg1;
- (void)setScrollDirection:(long long)arg1;
- (void)setShouldNotifyDelegateWhenScrollViewSettles:(bool)arg1;
- (void)setShowsPagingIndicator:(bool)arg1;
- (void)setUserDidTapPageControl:(bool)arg1;
- (void)setViewControllerForIndexPath:(id)arg1;
- (bool)shouldNotifyDelegateWhenScrollViewSettles;
- (bool)showsPagingIndicator;
- (bool)userDidTapPageControl;
- (id)viewControllerForIndexPath;
- (void)viewWillLayoutSubviews;

@end
