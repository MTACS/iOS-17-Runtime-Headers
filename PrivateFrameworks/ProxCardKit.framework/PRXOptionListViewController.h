
@interface PRXOptionListViewController : PRXCardContentViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    id /* block */  _formatterBlock;
    NSArray * _options;
    id /* block */  _selectionHandler;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ formatterBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *options;
@property (nonatomic, copy) NSArray *selectedOptions;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createCollectionViewLayout;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id /* block */)formatterBlock;
- (id)initWithContentView:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)options;
- (id)selectedOptions;
- (id /* block */)selectionHandler;
- (void)setFormatterBlock:(id /* block */)arg1;
- (void)setOptions:(id)arg1;
- (void)setSelectedOptions:(id)arg1;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;

@end
