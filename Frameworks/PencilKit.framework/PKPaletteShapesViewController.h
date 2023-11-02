
@interface PKPaletteShapesViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    <PKPaletteShapesViewControllerDelegate> * _delegate;
    NSArray * _shapes;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaletteShapesViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *shapes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (void)loadView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDelegate:(id)arg1;
- (void)setShapes:(id)arg1;
- (id)shapes;

@end
