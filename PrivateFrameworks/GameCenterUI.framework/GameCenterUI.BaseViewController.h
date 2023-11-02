
@interface GameCenterUI.BaseViewController : UIViewController <UIScrollViewDelegate> {
    void manualScrollEdgeAppearanceProgress;
    void navbarScrollObserver;
    void scrollObserver;
    void wantsHiddenNavigationBar;
    void wantsHiddenTitle;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
