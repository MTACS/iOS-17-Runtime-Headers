
@interface PromotedContentUI.ExpandViewController : UIViewController <APWebProcessDelegate> {
    void $__lazy_storage_$_closeButtonPadding;
    void actionDelegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  backgroundedTime;
    void closeButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  expandedDestinationURL;
    void maximumExpandedSize;
    void navigationCoordinator;
    void notificationObserver;
    void notificationOpenObserver;
    void tapGestureRecognizer;
    void webProcessDelegate;
    void webView;
}

- (void).cxx_destruct;
- (void)closeButtonTappedWithSender:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tapRecognized:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumWidth:(double)arg2 andHeight:(double)arg3;
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;

@end
