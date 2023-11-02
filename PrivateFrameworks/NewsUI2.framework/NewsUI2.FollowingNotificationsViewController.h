
@interface NewsUI2.FollowingNotificationsViewController : UIViewController {
    void blueprintReadableContentGuide;
    void blueprintViewController;
    void disabledViewProvider;
    void eventHandler;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  followingNotificationsPrewarm;
    void headerView;
    void styler;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
