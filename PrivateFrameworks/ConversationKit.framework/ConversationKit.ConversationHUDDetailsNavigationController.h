
@interface ConversationKit.ConversationHUDDetailsNavigationController : UINavigationController <CNKSceneVisibilityHandler> {
    void controlsManager;
    void detailsDelegate;
    void detailsViewController;
    void shouldHaveBackgroundMaterial;
}

@property (nonatomic) bool isOnScreen;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (bool)isOnScreen;
- (void)setIsOnScreen:(bool)arg1;
- (void)tapDoneButton;
- (void)viewDidLoad;

@end
