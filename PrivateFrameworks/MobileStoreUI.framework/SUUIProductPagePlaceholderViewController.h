
@interface SUUIProductPagePlaceholderViewController : UIViewController <SUUIProductPageChildViewController, UIScrollViewDelegate> {
    SUUIClientContext * _clientContext;
    SUUIColorScheme * _colorScheme;
    <SUUIProductPageChildViewControllerDelegate> * _delegate;
    SUUIProductPageHeaderViewController * _headerViewController;
    UIActivityIndicatorView * _indicator;
    SUUIProductPagePlaceholderScrollView * _scrollView;
    long long  _style;
}

@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (nonatomic, retain) SUUIColorScheme *colorScheme;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUIProductPageChildViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUIProductPageHeaderViewController *headerViewController;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeaderView;
- (id)clientContext;
- (id)colorScheme;
- (id)delegate;
- (id)headerViewController;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
