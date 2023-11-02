
@interface PKShareCredentialsNavigationController : PKNavigationController <PKServiceAddSecureElementPassViewControllerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)didFinishWithPasses:(id)arg1 error:(id)arg2;
- (void)loadView;
- (void)setConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;

@end
