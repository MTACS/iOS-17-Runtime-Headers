
@interface PromotedContentUI.StoreProductViewController : SKStoreProductViewController <APPCMetricsInteractionPresentationDelegate, SKStoreProductViewControllerDelegatePrivate> {
    void actionDelegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  actionResult;
    void adamIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  backgroundedTime;
    void notificationObserver;
    void notificationOpenObserver;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)viewControllerToPresentFrom;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
