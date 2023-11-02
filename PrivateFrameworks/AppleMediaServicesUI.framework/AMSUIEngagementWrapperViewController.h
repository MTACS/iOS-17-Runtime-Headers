
@interface AMSUIEngagementWrapperViewController : AMSUICommonViewController <UIAdaptivePresentationControllerDelegate> {
    id /* block */  _dismissBlock;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_setup;
- (void)_setupContentSize;
- (void)dealloc;
- (id /* block */)dismissBlock;
- (id)initWithViewController:(id)arg1;
- (void)loadView;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)viewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
