
@interface PromotedContentUI.SafariViewController : SFSafariViewController {
    void actionDelegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  backgroundedTime;
    void notificationCloseObserver;
    void notificationObserver;
    void notificationOpenObserver;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;
- (id)initWithURL:(id)arg1 entersReaderIfAvailable:(bool)arg2;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
