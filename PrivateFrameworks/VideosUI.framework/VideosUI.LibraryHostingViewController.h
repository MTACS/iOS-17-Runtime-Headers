
@interface VideosUI.LibraryHostingViewController : VideosUI.VUIViewController <UIGestureRecognizerDelegate> {
    void childController;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void).cxx_destruct;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)navigationItem;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(bool)arg1;
- (void)vui_viewWillLayoutSubviews;

@end
