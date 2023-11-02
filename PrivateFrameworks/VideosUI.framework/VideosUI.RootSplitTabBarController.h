
@interface VideosUI.RootSplitTabBarController : UITabBarController <UITabBarControllerDelegate> {
    void listenForAppear;
    void listenForDissapear;
    void splitDelegate;
    void trackModeSwitchOnParentMoveEvents;
}

- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
