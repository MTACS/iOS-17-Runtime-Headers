
@interface SeymourUI.CatalogLockupPreviewProvider : UIViewController {
    void artworkImageLoader;
    void artworkView;
    void blurView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lockup;
    void mediaTagStringBuilder;
    void platform;
    void subtitleLabel;
    void titleLabel;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;

@end
