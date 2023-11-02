
@interface TUModalCardViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    UIVisualEffectView * _backgroundView;
    UIButton * _closeButton;
    id /* block */  _onDisappear;
    UIViewController * _rootViewController;
    bool  _usesMaterialBackground;
}

@property (nonatomic, readonly) UIVisualEffectView *backgroundView;
@property (nonatomic, readonly) UIButton *closeButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ onDisappear;
@property (nonatomic, readonly) UIViewController *rootViewController;
@property (readonly) Class superclass;
@property (nonatomic) bool usesMaterialBackground;

- (void).cxx_destruct;
- (void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (id)backgroundView;
- (id)closeButton;
- (void)handleClose;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 useMaterialBackground:(bool)arg2;
- (id /* block */)onDisappear;
- (id)rootViewController;
- (void)setOnDisappear:(id /* block */)arg1;
- (void)setUsesMaterialBackground:(bool)arg1;
- (bool)usesMaterialBackground;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
