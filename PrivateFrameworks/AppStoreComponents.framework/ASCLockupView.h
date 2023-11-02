
@interface ASCLockupView : UIView <ASCLockupPresenterObserver, ASCOfferPresenterObserver> {
    bool  _automaticallyPresentsProductDetails;
    ASCLockupContentView * _contentView;
    <ASCLockupViewDelegate> * _delegate;
    struct { 
        unsigned int lockupViewDidBeginRequest : 1; 
        unsigned int lockupViewDidFinishRequest : 1; 
        unsigned int lockupViewDidFailRequestWithError : 1; 
        unsigned int lockupViewAppStateDidChange : 1; 
        unsigned int metricsActivityForAdLockupViewToPerformActionOfOfferInState : 1; 
        unsigned int lockupViewDidInvalidateIntrinsicContentSize : 1; 
        unsigned int lockupViewShouldSupportDSIDLessInstalls : 1; 
        unsigned int productDetailsPresentationContextForLockupView : 1; 
        unsigned int lockupViewPreprocessOfferInStateCompletionBlock : 1; 
    }  _delegateRespondsTo;
    ASCLockupPresenter * _lockupPresenter;
    ASCAppearMetricsPresenter * _metricsPresenter;
    ASCOfferPresenter * _offerPresenter;
    NSString * _storeSheetHostBundleID;
    NSString * _storeSheetUsageContext;
}

@property (nonatomic, copy) ASCMetricsActivity *appearMetricsActivity;
@property (nonatomic) bool automaticallyGeneratesAppearMetrics;
@property (nonatomic) bool automaticallyPresentsProductDetails;
@property (nonatomic, readonly) ASCLockupContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASCLockupViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ASCLockupViewGroup *group;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, copy) ASCLockup *lockup;
@property (nonatomic, readonly) ASCLockupPresenter *lockupPresenter;
@property (nonatomic, readonly) ASCAppearMetricsPresenter *metricsPresenter;
@property (nonatomic, readonly) ASCOfferPresenter *offerPresenter;
@property (nonatomic, copy) ASCOfferTheme *offerTheme;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, copy) ASCLockupRequest *request;
@property (nonatomic) bool showsPlaceholderContent;
@property (nonatomic, retain) NSString *size;
@property (nonatomic, retain) NSString *storeSheetHostBundleID;
@property (nonatomic, retain) NSString *storeSheetUsageContext;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents

- (void).cxx_destruct;
- (id)_accessibilitySupplementaryFooterViews;
- (bool)accessibilityActivate;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)appearMetricsActivity;
- (bool)automaticallyGeneratesAppearMetrics;
- (bool)automaticallyPresentsProductDetails;
- (id)contentView;
- (id)delegate;
- (id)description;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isAccessibilityElement;
- (bool)isHighlighted;
- (void)layoutContentView;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)lockup;
- (id)lockupPresenter;
- (void)lockupPresenterDidBeginRequest;
- (void)lockupPresenterDidFailRequestWithError:(id)arg1;
- (void)lockupPresenterDidFinishRequest;
- (id)metricsPresenter;
- (id)offerPresenter;
- (void)offerPresenterDidObserveChangeToState:(id)arg1;
- (void)offerPresenterPreprocessOffer:(id)arg1 inState:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)offerPresenterWillPerformActionOfOffer:(id)arg1 inState:(id)arg2 withActivity:(inout id*)arg3 inContext:(inout id*)arg4;
- (id)offerTheme;
- (void)performLockupAction;
- (id)preferredProductDetailsPresentationContext;
- (void)presentProductDetailsViewController;
- (id)presentingViewController;
- (id)request;
- (void)setAppearMetricsActivity:(id)arg1;
- (void)setAutomaticallyGeneratesAppearMetrics:(bool)arg1;
- (void)setAutomaticallyPresentsProductDetails:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLockup:(id)arg1;
- (void)setOfferTheme:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setShowsPlaceholderContent:(bool)arg1;
- (void)setSize:(id)arg1;
- (void)setStoreSheetHostBundleID:(id)arg1;
- (void)setStoreSheetUsageContext:(id)arg1;
- (void)setViewRenderSpanProvider:(id /* block */)arg1;
- (bool)showsPlaceholderContent;
- (id)size;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)storeSheetHostBundleID;
- (id)storeSheetUsageContext;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end
