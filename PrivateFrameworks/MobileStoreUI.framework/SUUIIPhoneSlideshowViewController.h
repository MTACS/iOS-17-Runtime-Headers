
@interface SUUIIPhoneSlideshowViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    SUUIClientContext * _clientContext;
    SUUIGiftThemeCollectionView * _collectionView;
    <SUUISlideshowViewControllerDataSource> * _dataSource;
    <SUUISlideshowViewControllerDelegate> * _delegate;
    NSMutableArray * _images;
    long long  _indexToScrollToOnLoadView;
    NSOperationQueue * _operationQueue;
    UIPageControl * _pageControl;
    NSMutableDictionary * _placeholderImages;
    NSOperationQueue * _placeholderQueue;
}

@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (nonatomic) long long currentIndex;
@property (nonatomic) <SUUISlideshowViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUISlideshowViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneAction:(id)arg1;
- (id)_imageAtIndex:(long long)arg1;
- (id)_placeholderImageAtIndex:(long long)arg1;
- (void)_reloadPageControl;
- (void)_reloadSize;
- (void)_setImage:(id)arg1 atIndex:(long long)arg2;
- (id)clientContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)currentIndex;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setCurrentIndex:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;

@end