
@interface AISAppleIDSignInController : NSObject {
    void $__lazy_storage_$_hostingViewController;
    void configuration;
    void delegate;
}

@property (nonatomic, readonly) AISAppleIDSignInConfiguration *configuration;
@property (nonatomic) <AISAppleIDSignInControllerDelegate> *delegate;
@property (nonatomic, retain) UIViewController *hostingViewController;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (id)hostingViewController;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)presentWithViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHostingViewController:(id)arg1;

@end
