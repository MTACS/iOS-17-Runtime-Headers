
@interface CNPRUISPosterRenderingViewControllerWrapper : NSObject {
    PRUISPosterRenderingViewController * _wrappedPosterRenderingViewController;
}

@property (nonatomic, readonly) UIView *obscurableContentView;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2;
- (id)obscurableContentView;
- (void)registerLabel:(id)arg1;
- (void)snapshotWithCompletionBlock:(id /* block */)arg1;

@end
