
@interface WFEmbeddableActionUserInterface : WFActionUserInterface {
    UIViewController * _contentViewController;
}

@property (nonatomic, retain) UIViewController *contentViewController;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id)contentViewController;
- (bool)prefersModalPresentation;
- (void)presentContent:(id)arg1;
- (bool)presentContent:(id)arg1 completion:(id /* block */)arg2;
- (void)setContentViewController:(id)arg1;

@end
