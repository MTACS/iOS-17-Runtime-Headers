
@interface NewsFeed.FormatVideoPlayerViewController : UIViewController {
    void delegate;
    void identifier;
    void isLiveIconHidden;
    void onReuse;
    void placeholderView;
    void posterFrame;
    void reuseIdentifier;
    void videoContainerView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
