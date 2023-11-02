
@protocol _UICollectionViewUpdateItemApplying <NSObject>

@required

- (void)_deleteAllItems;
- (void)_performUpdateWithCollectionViewUpdateItems:(void *)arg1 dataSourceSnapshot:(void *)arg2 updateHandler:(void *)arg3 completion:(void *)arg4 viewPropertyAnimator:(void *)arg5 customAnimationsProvider:(void *)arg6 animated:(void *)arg7; // needs 7 arg types, found 20: NSArray *, <_UIDataSourceSnapshotTranslating> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*, UIViewPropertyAnimator *, id /* block */, void*, void, id /* block */, <_UICollectionViewAnimationContext> *, void*, bool
- (void)_reloadData;
- (void)_willPerformDiff:(bool)arg1;

@end
