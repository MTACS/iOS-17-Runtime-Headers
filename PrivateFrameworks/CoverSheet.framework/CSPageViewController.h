
@interface CSPageViewController : CSPresentationViewController <CSPageViewControllerProtocol> {
    bool  _authenticated;
    <CSCoverSheetViewControllerProtocol> * _coverSheetViewController;
    CSLayoutStrategy * _layoutStrategy;
    bool  _transitioning;
}

@property (nonatomic, readonly, copy) CSAppearance *activeAppearance;
@property (nonatomic, readonly, copy) CSBehavior *activeBehavior;
@property (nonatomic, readonly, copy) NSString *appearanceIdentifier;
@property (nonatomic, readonly) bool authenticated;
@property (nonatomic, readonly, copy) NSSet *components;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (nonatomic) <CSCoverSheetViewControllerProtocol> *coverSheetViewController;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) CSPresentation *externalPresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, retain) CSLayoutStrategy *layoutStrategy;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly, copy) NSString *pageRole;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long presentationAltitude;
@property (nonatomic, readonly) <UICoordinateSpace> *presentationCoordinateSpace;
@property (nonatomic, readonly) unsigned int presentationFrameRateRangeReason;
@property (nonatomic, readonly) struct CAFrameRateRange { float x1; float x2; float x3; } presentationPreferredFrameRateRange;
@property (nonatomic, readonly) long long presentationPriority;
@property (nonatomic, readonly, copy) NSArray *presentationRegions;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) long long presentationTransition;
@property (nonatomic, readonly) long long presentationType;
@property (nonatomic) <CSCoverSheetViewPresenting> *presenter;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic) bool transitioning;

+ (bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;
+ (Class)viewClass;

- (void).cxx_destruct;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (bool)authenticated;
- (id)coverSheetViewController;
- (void)didTransitionToVisible:(bool)arg1;
- (void)handleAction:(id)arg1 fromSender:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isTransitioning;
- (id)layoutStrategy;
- (id)pageView;
- (long long)participantState;
- (long long)presentationAltitude;
- (id)requestedDismissalSettings;
- (long long)requestedDismissalType;
- (void)setCoverSheetViewController:(id)arg1;
- (void)setLayoutStrategy:(id)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)updateTransitionToVisible:(bool)arg1 progress:(double)arg2 mode:(long long)arg3;
- (void)updateTransitionWhileRubberBandingInProgress:(bool)arg1;
- (id)view;
- (void)viewDidLoad;
- (void)willTransitionToVisible:(bool)arg1;

@end
