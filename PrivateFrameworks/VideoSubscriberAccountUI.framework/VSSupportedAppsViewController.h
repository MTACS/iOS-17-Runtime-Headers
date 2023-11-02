
@interface VSSupportedAppsViewController : UIViewController {
    NSArray * _apps;
    <VSSupportedAppsViewControllerDelegate> * _delegate;
    VSOptional * _identityProvider;
    NSOperationQueue * _privateQueue;
    NSArray * _supportedApps;
}

@property (nonatomic, copy) NSArray *apps;
@property (nonatomic) <VSSupportedAppsViewControllerDelegate> *delegate;
@property (nonatomic, retain) VSOptional *identityProvider;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) NSArray *supportedApps;

- (void).cxx_destruct;
- (void)_didFinish;
- (void)_displayApps;
- (void)_doneButtonPresed:(id)arg1;
- (void)_presentError:(id)arg1;
- (id)apps;
- (void)beginLoadingImages;
- (id)delegate;
- (id)identityProvider;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)privateQueue;
- (void)setApps:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentityProvider:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setSupportedApps:(id)arg1;
- (id)supportedApps;
- (void)viewDidLoad;

@end
