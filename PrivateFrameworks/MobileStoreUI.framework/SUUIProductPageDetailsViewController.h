
@interface SUUIProductPageDetailsViewController : UIViewController <SUUIItemStateCenterObserver, SUUIProductPageChildViewController, SUUIScreenshotsDelegate, SUUITableViewSectionDelegate> {
    bool  _askPermission;
    SUUIClientContext * _clientContext;
    SUUIProductPageTableHeaderOnlySection * _copyrightSection;
    <SUUIProductPageChildViewControllerDelegate> * _delegate;
    SUUIProductPageTableTextBoxSection * _descriptionSection;
    NSOperationQueue * _operationQueue;
    SUUIProductPage * _productPage;
    SUUIResourceLoader * _resourceLoader;
    SUUIProductPageTableHeaderOnlySection * _screenshotsSection;
    NSMutableArray * _sections;
    SUUIProductPageTableTextBoxSection * _storeNotesSection;
    SUUIProductPageTableViewController * _tableViewController;
    SUUILayoutCache * _textLayoutCache;
    SUUIProductPageTableTextBoxSection * _whatsNewSection;
}

@property (nonatomic) bool askPermission;
@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUIProductPageChildViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUIProductPageHeaderViewController *headerViewController;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) SUUIProductPage *productPage;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

+ (double)defaultPageWidthForUserInterfaceIdiom:(long long)arg1;

- (void).cxx_destruct;
- (void)_addTapRecognizerForView:(id)arg1 action:(SEL)arg2;
- (id)_bundledAppsSection;
- (void)_configureSwooshSection:(id)arg1;
- (id)_copyrightSection;
- (id)_descriptionSection;
- (void)_expandSection:(id)arg1;
- (id)_featuresSection;
- (id)_infoSection;
- (id)_parentBundlesSection;
- (id)_resourceLoader;
- (id)_screenshotsSection;
- (id)_storeNotesSection;
- (id)_tableViewController;
- (id)_textLayoutRequestWithText:(id)arg1 widthOffset:(double)arg2;
- (id)_whatsNewSection;
- (bool)askPermission;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)headerViewController;
- (id)initWithProductPage:(id)arg1;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)loadView;
- (id)operationQueue;
- (id)productPage;
- (void)screenshotsWillBeginDragging:(id)arg1;
- (id)scrollView;
- (void)setAskPermission:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (id)tableViewForTableViewSection:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
