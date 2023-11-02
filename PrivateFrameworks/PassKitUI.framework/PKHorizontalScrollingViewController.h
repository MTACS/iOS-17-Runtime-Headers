
@interface PKHorizontalScrollingViewController : UIViewController <PKHorizontalScrollingViewControllerDataSource, PKHorizontalScrollingViewControllerDelegate, UIScrollViewDelegate> {
    double  _collectionViewVerticalOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentSize;
    <PKHorizontalScrollingViewControllerDataSource> * _dataSource;
    bool  _hasPrefetchedLeft;
    bool  _hasPrefetchedRight;
    NSMutableDictionary * _indicesToViewControllerMapping;
    bool  _isDragging;
    bool  _isLowEndDevice;
    bool  _isScrolling;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockUpdate;
    NSMutableDictionary * _nonVisibleIndicesToViewControllerMapping;
    NSMutableDictionary * _pendingDataCollectionViewUpdates;
    NSMutableDictionary * _pendingUpdates;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousBounds;
    long long  _primaryIndex;
    NSObject<OS_dispatch_source> * _scrollTimer;
    UIScrollView * _scrollView;
    NSMutableSet * _unusedViewControllers;
    NSIndexSet * _visibleIndices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *indicesToViewControllerMapping;
@property (nonatomic, readonly) NSMutableDictionary *nonVisibleIndicesToViewControllerMapping;
@property (nonatomic, readonly) long long primaryIndex;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSIndexSet *visibleIndices;

- (void).cxx_destruct;
- (bool)_canReloadViewControllers;
- (id)_dequeueNonVisibleViewControllerForIndex:(unsigned long long)arg1;
- (id)_dequeueViewControllerForIndex:(unsigned long long)arg1;
- (double)_endOfItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)_indexAtContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_layoutCollectionViews;
- (void)_loadDataForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_primaryIndexAtOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_recoverUnusedViewController;
- (void)_reloadDataForViewControllerAtIndex:(unsigned long long)arg1 swap:(bool)arg2;
- (void)_reloadPendingViewControllers;
- (void)_retireViewControllerForIndex:(unsigned long long)arg1;
- (void)_scrollViewStoppedScrolling;
- (double)_startOfItemAtIndex:(unsigned long long)arg1;
- (void)_switchPrimaryIndexToIndex:(unsigned long long)arg1;
- (double)_transitionProgress;
- (void)_updateAlphaDuringTransition;
- (void)_updatePrimaryIndex:(long long)arg1;
- (void)_updatePrimaryViewScrolling;
- (void)_updateScrollViewContentSize;
- (id)_visibileIndicesAtContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (double)_yPositionForNonPrimaryViewControllers;
- (id)cachedDataAtIndex:(long long)arg1;
- (void)clearPendingDataCollectionViewUpdates;
- (void)didDequeueViewController:(id)arg1;
- (void)didMoveToPrimaryIndex:(long long)arg1;
- (id)emptyViewControllers;
- (void)enableScrollView:(bool)arg1;
- (void)fetchDataAtIndex:(long long)arg1 completion:(id /* block */)arg2;
- (id)footerView;
- (double)footerViewContentHeight;
- (void)horizontalScrollingViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (id)indicesToViewControllerMapping;
- (id)init;
- (id)loadingDataObjectWithCurrentData:(id)arg1 index:(long long)arg2 swap:(bool)arg3;
- (id)nonVisibleIndicesToViewControllerMapping;
- (long long)numberOfItems;
- (void)prefetchDataIfNecessary;
- (long long)primaryIndex;
- (void)reloadDataForViewControllerAtIndex:(long long)arg1 swap:(bool)arg2;
- (void)resetVisibleViewControllersWithNewPrimaryIndex:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (long long)startingIndex;
- (void)updateScrollViewContentOffsetWithNewPrimaryIndex:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)visibleIndices;

@end
