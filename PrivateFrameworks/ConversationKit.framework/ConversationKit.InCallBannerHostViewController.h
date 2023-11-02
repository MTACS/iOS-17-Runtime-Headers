
@interface ConversationKit.InCallBannerHostViewController : UIViewController {
    void captureGroupName;
    void controlsManager;
    void controlsType;
    void conversationControlsViewController;
    void features;
    void inCallBannerDelegate;
    void isDismissed;
    void needsMenuContainerView;
    void notice;
    void recipeFactory;
    void requiresControlsHidden;
}

@property (nonatomic, readonly) bool menuPresented;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)menuPresented;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
