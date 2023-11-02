
@interface SUUIIncompatibleAppViewController : SUUIViewController <SUUIProductPageChildViewController> {
    SUUIItemArtworkContext * _artworkContext;
    <SUUIProductPageChildViewControllerDelegate> * _delegate;
    SUUIProductPageHeaderViewController * _headerViewController;
    UIImage * _iconImage;
    SUUIProductPageItem * _incompatibleItem;
    SUUIIncompatibleAppView * _incompatibleView;
    SSVLoadURLOperation * _loadIconOperation;
    NSOperationQueue * _operationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUIProductPageChildViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUIProductPageHeaderViewController *headerViewController;
@property (nonatomic, readonly) SUUIProductPageItem *incompatibleItem;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_artworkContext;
- (void)_learnMoreAboutApp:(id)arg1;
- (void)_learnMoreAboutIPad:(id)arg1;
- (void)_setArtworkWithImage:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)headerViewController;
- (id)incompatibleItem;
- (id)initWithIncompatibleItem:(id)arg1;
- (void)loadView;
- (id)operationQueue;
- (void)reloadData;
- (id)scrollView;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
