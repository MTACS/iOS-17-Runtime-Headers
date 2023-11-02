
@interface SFStoreBanner : SFPinnableBanner <ASCLockupViewDelegate, SFAppSuggestionBanner, SKProductPageViewControllerDelegate> {
    NSString * _affiliateData;
    NSString * _argument;
    SFThemeColorEffectView * _backdrop;
    UIButton * _closeButton;
    <SFAppSuggestionBannerDelegate> * _delegate;
    ASCLockupView * _lockupView;
    NSURL * _mainDocumentURL;
    NSNumber * _productID;
    SKProductPageViewController * _productViewController;
    UIView * _separator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAppSuggestionBannerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)omitsBottomSeparator;

- (void).cxx_destruct;
- (void)_openApp;
- (void)_removeAppStoreLockUpView;
- (void)_setBlockedByUser;
- (void)_setUpAppStoreLockUpView;
- (void)_setUpStoreKitProductView;
- (void)dealloc;
- (id)delegate;
- (id)initWithProductID:(id)arg1 mainDocumentURL:(id)arg2 affiliateData:(id)arg3 applicationLaunchArgument:(id)arg4;
- (void)layoutSubviews;
- (void)lockupView:(id)arg1 appStateDidChange:(id)arg2;
- (void)lockupView:(id)arg1 didFailRequestWithError:(id)arg2;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)productPage:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)productPage:(id)arg1 didFinishPurchase:(id)arg2 withError:(id)arg3;
- (void)productPage:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)productPage:(id)arg1 willMakePurchases:(id)arg2;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)themeDidChange;

@end
