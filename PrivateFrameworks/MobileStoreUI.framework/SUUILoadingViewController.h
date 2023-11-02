
@interface SUUILoadingViewController : UIViewController {
    UIColor * _backgroundColor;
    SUUIClientContext * _clientContext;
    NSString * _loadingText;
    SUUILoadingView * _loadingView;
    SUUIColorScheme * _spinnerColorScheme;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) SUUIClientContext *clientContext;
@property (nonatomic, retain) NSString *loadingText;
@property (nonatomic, retain) SUUILoadingView *loadingView;
@property (nonatomic, retain) SUUIColorScheme *spinnerColorScheme;

- (void).cxx_destruct;
- (void)_initializeLoadingView;
- (id)backgroundColor;
- (id)clientContext;
- (id)initWithClientContext:(id)arg1;
- (id)loadingText;
- (id)loadingView;
- (void)setBackgroundColor:(id)arg1;
- (void)setLoadingText:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setSpinnerColorScheme:(id)arg1;
- (id)spinnerColorScheme;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
