
@interface UICollectionViewFocusUpdateContext : UIFocusUpdateContext {
    UICollectionView * _collectionView;
    bool  _didSetNextFocusedIndexPath;
    bool  _didSetPreviouslyFocusedIndexPath;
    NSIndexPath * _nextFocusedIndexPath;
    NSIndexPath * _previouslyFocusedIndexPath;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) NSIndexPath *nextFocusedIndexPath;
@property (nonatomic, readonly) NSIndexPath *previouslyFocusedIndexPath;

+ (id)_contextWithContext:(id)arg1 collectionView:(id)arg2;
+ (id)_contextWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3;
- (id)collectionView;
- (id)nextFocusedIndexPath;
- (id)previouslyFocusedIndexPath;

@end
