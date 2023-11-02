
@interface SeymourUI.FilterOptionsViewController : UIViewController {
    void dataProvider;
    void dependencies;
    void eventHub;
    void layout;
    void platform;
    void serviceSubscriptionCache;
    void storefrontLocalizer;
    void subtitleLabel;
    void titleLabel;
    void visibility;
}

@property (nonatomic, readonly) UILabel *subtitleLabel;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onCancel;
- (void)onDone;
- (id)subtitleLabel;
- (void)textSizeChanged:(id)arg1;
- (void)updateTitleView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
