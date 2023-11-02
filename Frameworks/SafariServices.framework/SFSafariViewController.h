
@interface SFSafariViewController : UIViewController <SFBrowserRemoteViewControllerDelegate, SFInteractiveDismissControllerDelegate, SFQueueingServiceViewControllerProxyDelegate, _SFLinkPreviewHeaderDelegate, _UIRemoteViewControllerContaining, _UIViewBoundingPathChangeObserver> {
    _WKActivatedElementInfo * _activatedElementInfo;
    NSMutableDictionary * _activitiesMap;
    NSArray * _activityItemsForCustomActivities;
    NSNumber * _adoptsPlatformConventions;
    _UIAsyncInvocation * _cancelViewServiceRequest;
    SFSafariViewControllerConfiguration * _configuration;
    NSArray * _customActivities;
    bool  _defersAddingRemoteViewController;
    <SFSafariViewControllerDelegate> * _delegate;
    bool  _didHandlerURLExternally;
    bool  _didInitializeViewService;
    long long  _dismissButtonStyle;
    long long  _displayMode;
    bool  _hasBeenDisplayedAtLeastOnce;
    bool  _hasNotifiedDelegateAboutInitialLoadCompleted;
    bool  _hasRestartedViewService;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _horizontalScrollIndicatorBaseInsets;
    NSURL * _initialURL;
    SFInteractiveDismissController * _interactiveDismissController;
    SFSafariLaunchPlaceholderView * _launchPlaceholderView;
    UIView * _linkPreviewHitTestView;
    UIColor * _preferredBarTintColor;
    UIColor * _preferredControlTintColor;
    NSArray * _previewActions;
    SFBrowserRemoteViewController * _remoteViewController;
    bool  _remoteViewControllerHasBeenAdded;
    SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> * _serviceProxy;
    bool  _swipeGestureEnabled;
    _SFURLTextPreviewViewController * _textPreviewViewController;
    bool  _urlLikelyForAuthentication;
    bool  _usesCompatibilityPlaceholder;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _verticalScrollIndicatorBaseInsets;
    bool  _viewSizeIsTransitioning;
}

@property (setter=_setActivatedElementInfo:, nonatomic, retain) _WKActivatedElementInfo *_activatedElementInfo;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (setter=_setPreviewActions:, nonatomic, retain) NSArray *_previewActions;
@property (setter=_setShowingLinkPreview:, nonatomic) bool _showingLinkPreview;
@property (setter=_setShowingLinkPreviewWithMinimalUI:, nonatomic) bool _showingLinkPreviewWithMinimalUI;
@property (nonatomic, readonly, copy) SFSafariViewControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool defersAddingRemoteViewController;
@property (nonatomic) <SFSafariViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dismissButtonStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *initialURL;
@property (nonatomic, retain) UIColor *preferredBarTintColor;
@property (nonatomic, retain) UIColor *preferredControlTintColor;
@property (nonatomic, readonly) SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *serviceProxy;
@property (nonatomic) bool su_showingLinkPreview;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (bool)_eligibleForPlatformConventions;
+ (bool)_preventsAppearanceProxyCustomization;
+ (bool)_supportsPrewarming;
+ (id)prewarmConnectionsToURLs:(id)arg1;

- (void).cxx_destruct;
- (id)_activatedElementInfo;
- (void)_addRemoteViewControllerIfNeeded;
- (bool)_allowsUserInteractionWhenPreviewedInContextMenu;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(bool)arg2;
- (id)_containedRemoteViewController;
- (id)_fetchExcludedActivityTypesForURL:(id)arg1 title:(id)arg2;
- (void)_forwardNotificationToViewService:(id)arg1;
- (id)_previewActions;
- (void)_restartServiceViewController;
- (void)_setActivatedElementInfo:(id)arg1;
- (void)_setPreviewActions:(id)arg1;
- (void)_setShowingLinkPreview:(bool)arg1;
- (void)_setShowingLinkPreviewWithMinimalUI:(bool)arg1;
- (bool)_showingLinkPreview;
- (bool)_showingLinkPreviewWithMinimalUI;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)configuration;
- (void)dealloc;
- (bool)defersAddingRemoteViewController;
- (id)delegate;
- (long long)dismissButtonStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;
- (id)initWithURL:(id)arg1 entersReaderIfAvailable:(bool)arg2;
- (id)initialURL;
- (void)interactiveDismissControllerDidBegin:(id)arg1;
- (void)interactiveDismissControllerDidCancel:(id)arg1;
- (void)interactiveDismissControllerDidEnd:(id)arg1;
- (void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(bool)arg2;
- (void)loadView;
- (id)preferredBarTintColor;
- (id)preferredControlTintColor;
- (id)previewActionItems;
- (void)remoteViewController:(id)arg1 didDecideShouldShowLinkPreviews:(bool)arg2;
- (void)remoteViewController:(id)arg1 didFinishInitialLoad:(bool)arg2;
- (void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;
- (void)remoteViewController:(id)arg1 fetchActivityViewControllerInfoForURL:(id)arg2 title:(id)arg3;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)remoteViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2;
- (void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(bool)arg2;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)remoteViewControllerDidLoadWebView:(id)arg1;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (void)remoteViewControllerWillOpenCurrentPageInBrowser:(id)arg1;
- (id)serviceProxy;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)setDefersAddingRemoteViewController:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissButtonStyle:(long long)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setPreferredBarTintColor:(id)arg1;
- (void)setPreferredControlTintColor:(id)arg1;
- (void)setTransitioningDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/PrivateFrameworks/StocksUI.framework/StocksUI

- (void)setSu_showingLinkPreview:(bool)arg1;

@end
