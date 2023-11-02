
@interface PXGPPTViewController : UIViewController {
    PXGView * _gridView;
    PXGLayout * _initialLayout;
}

@property (nonatomic, readonly) PXGView *gridView;
@property (nonatomic, readonly) PXGLayout *initialLayout;

- (void).cxx_destruct;
- (void)_handleDoubleTap:(id)arg1;
- (void)animate:(id /* block */)arg1 animationRenderingCompletionHandler:(id /* block */)arg2 proceedHandler:(id /* block */)arg3;
- (id)gridView;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initialLayout;
- (void)viewDidLoad;

@end
