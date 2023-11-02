
@interface AppleMediaServicesUIDynamic.ErrorViewController : AMSUICommonViewController <AMSUIDAirplaneModeInquiryDelegate> {
    void $__lazy_storage_$_contentUnavailableView;
    void airplaneModeInquiry;
    void automaticRetry;
    void cellularDataInquiry;
    void error;
    void isNavigationControllerEmbedded;
    void networkInquiry;
    void networkObservation;
    void objectGraph;
    void retryAction;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void).cxx_destruct;
- (void)airplaneModeInquiryDidObserveChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)navigationItem;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
