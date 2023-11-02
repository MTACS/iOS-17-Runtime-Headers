
@interface SUUIGallerySwooshViewController : SUUISwooshViewController <SUUIEmbeddedMediaViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    bool  _delegateWantsWillDisplay;
    SUUISwooshPageComponent * _gallerySwoosh;
    double  _itemHeight;
    SUUISwooshView * _swooshView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUIGallerySwooshViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SUUISwooshPageComponent *gallerySwoosh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newViewWithMediaComponent:(id)arg1;
- (id)artworkForItemAtIndex:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)gallerySwoosh;
- (id)indexPathsForVisibleItems;
- (id)initWithGallerySwoosh:(id)arg1;
- (void)loadView;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)performActionForItemAtIndex:(long long)arg1 animated:(bool)arg2;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;

@end