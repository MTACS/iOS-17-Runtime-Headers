
@interface WLPreparationViewController : OBSetupAssistantSpinnerController <OBSetupAssistantSupport> {
    id /* block */  _cancellationBlock;
    bool  _showCancelButton;
    id /* block */  _viewWillDismissBlock;
    WLWelcomeController * _welcomeController;
}

@property (nonatomic, copy) id /* block */ cancellationBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showCancelButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ viewWillDismissBlock;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)cancellationBlock;
- (id)initWithWelcomeController:(id)arg1;
- (void)setCancellationBlock:(id /* block */)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (void)setViewWillDismissBlock:(id /* block */)arg1;
- (void)showActivityIndicatorView;
- (bool)showCancelButton;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (id /* block */)viewWillDismissBlock;

@end
