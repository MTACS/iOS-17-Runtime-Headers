
@interface SiriUISnippetCollectionViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDragDelegate> {
    UICollectionView * _collectionView;
    UICollectionViewLayout * _collectionViewLayout;
    bool  _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;
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
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewLayout *collectionViewLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionViewLayout;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
