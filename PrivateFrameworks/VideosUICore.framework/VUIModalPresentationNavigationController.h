
@interface VUIModalPresentationNavigationController : UINavigationController {
    VUIModalPresentationConfiguration * _configuration;
    UIAlertController * _containingAlertController;
    NSMapTable * _popCompletionBlocks;
    NSHashTable * _presentedViewControllers;
    NSArray * _previousViewControllers;
    NSMapTable * _pushCompletionBlocks;
    UIViewController * _rootViewController;
}

@property (nonatomic, retain) VUIModalPresentationConfiguration *configuration;
@property (nonatomic) UIAlertController *containingAlertController;
@property (nonatomic, readonly) NSHashTable *presentedViewControllers;

- (void).cxx_destruct;
- (void)_dismissForLastViewController:(bool)arg1;
- (void)_updateConfiguration;
- (id)configuration;
- (id)containingAlertController;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)popViewControllerAnimated:(bool)arg1;
- (id)popViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)presentedViewControllers;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)pushViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setConfiguration:(id)arg1;
- (void)setContainingAlertController:(id)arg1;
- (void)updatePreferredFocusedViewStateForFocus:(bool)arg1;

@end
