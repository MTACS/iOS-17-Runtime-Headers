
@interface CSRemoteContentInlineViewController : CSCoverSheetViewControllerBase <CSAdjunctItemHosting, CSMainPageInlineContentViewControllerDelegate, CSRemoteContentViewControllerProtocol, PTSettingsKeyObserver> {
    UIViewFloatAnimatableProperty * _alphaProperty;
    SBFFluidBehaviorSettings * _alphaSettings;
    <SBFAuthenticationStatusProvider> * _authenticationStatusProvider;
    id  _cancelInlineContentTouchesAssertion;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    CSDateViewComponent * _dateTimeComponent;
    SBSRemoteContentDefinition * _definition;
    <CSRemoteContentViewControllerDelegate> * _delegate;
    bool  _dismissing;
    CSRemoteContentHostViewController * _hostViewController;
    bool  _remoteContentHidden;
    SBSRemoteContentPreferences * _remoteContentPreferences;
    CSDashBoardRemoteContentSettings * _remoteContentSettings;
    bool  _userHasInteractedSinceWake;
}

@property (nonatomic, readonly) <SBFAuthenticationStatusProvider> *authenticationStatusProvider;
@property (nonatomic) double containerCornerRadius;
@property (nonatomic, retain) CSDateViewComponent *dateTimeComponent;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSRemoteContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CSRemoteContentHostViewController *hostViewController;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inlineContentFrame;
@property (nonatomic) bool remoteContentHidden;
@property (nonatomic, retain) CSDashBoardRemoteContentSettings *remoteContentSettings;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addChildHostViewController:(id)arg1;
- (long long)_backgroundStyle;
- (long long)_dateTimeStyle;
- (void)_didReceiveScroll;
- (void)_didReceiveTouch;
- (void)_dismissForced:(bool)arg1 animated:(bool)arg2;
- (bool)_dismissesOnTap;
- (long long)_homeGestureMode;
- (id)_newDisplayLayoutElement;
- (bool)_reducesWhitePoint;
- (void)_removeChildHostViewController;
- (void)_setUserHasInteractedSinceWake:(bool)arg1;
- (bool)_supportsLuminanceReductionForCurrentBackgroundStyle;
- (bool)_suppressesBottomEdgeContent;
- (void)_updateContentAlpha:(double)arg1 interactive:(bool)arg2;
- (void)_updateDisplayLayoutElementForActivation:(id)arg1;
- (void)_updatePreferredContentSize;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)authenticationStatusProvider;
- (void)beginCancelTouchesForCurrentEventInHostedContent;
- (long long)contentPresentationType;
- (id)dateTimeComponent;
- (void)dealloc;
- (id)delegate;
- (void)didChangeRemoteHostContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)didReceiveBackgroundScroll;
- (void)didReceiveBackgroundTouch;
- (bool)dismissForDismissType:(long long)arg1 completion:(id /* block */)arg2;
- (void)endCancelTouchesForCurrentEventInHostedContent;
- (bool)handleEvent:(id)arg1;
- (void)hostDidChangeContentBounds;
- (id)hostViewController;
- (id)initWithContentDefinition:(id)arg1 preferences:(id)arg2 hostViewController:(id)arg3 authenticationStatusProvider:(id)arg4;
- (bool)inlineContentDismissesOnSignificantScroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inlineContentFrame;
- (bool)insetsMargins;
- (bool)isInUnlockGestureMode;
- (void)loadView;
- (long long)preferredNotificationListMode;
- (double)remoteContentHeight;
- (bool)remoteContentHidden;
- (id)remoteContentSettings;
- (void)remoteDidChangeStyle;
- (id)requiredVisualStyleCategories;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDateTimeComponent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setRemoteContentHidden:(bool)arg1;
- (void)setRemoteContentSettings:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldDismissInlineContentForNowPlaying;
- (bool)shouldDismissInlineContentForUnlock;
- (bool)shouldInlineContentReceiveBackgroundTouches;
- (bool)suppressesDismissalForNotification;
- (bool)suppressesDismissalGesture;
- (bool)usesBackgroundView;
- (void)viewDidLayoutSubviews;

@end