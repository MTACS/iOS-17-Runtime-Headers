
@interface _UICollectionViewOrthogonalScrollerSectionController : NSObject <UIScrollViewDelegate> {
    UICollectionView * _collectionView;
    NSHashTable * _elementsBelowOrthogonalScrollView;
    NSHashTable * _frontMostElements;
    bool  _isHandlingScrollViewDelegateCallout;
    NSMutableArray * _scrollViewsQueuedForRemoval;
    NSMutableDictionary * _sectionToScrollViewMap;
    bool  _shouldPreventFocusScrollPastContentSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;

@end
