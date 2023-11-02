
@interface AMSUICommonCollectionViewHandler : NSObject <UICollectionViewDelegate> {
    AMSUICommonCollectionView * _collectionView;
    <AMSUICommonCollectionViewDelegate> * _delegate;
}

@property (nonatomic, readonly) AMSUICommonCollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUICommonCollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)delegate;
- (id)initWithCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
