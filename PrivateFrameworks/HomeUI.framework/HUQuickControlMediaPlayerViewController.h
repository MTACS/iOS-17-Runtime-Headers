
@interface HUQuickControlMediaPlayerViewController : HUQuickControlViewController <MRPlatterViewControllerDelegate, MRUNowPlayingViewControllerDelegate> {
    long long  _mediaAccessoryItemType;
    MRPlatterViewController * _mediaControlViewController;
    NSArray * _mediaControlViewControllerConstraints;
    MRUNowPlayingViewController * _mediaControlsNowPlayingViewController;
    NSString * _mediaRoutingIdentifier;
    bool  _siriEndPointAccessory;
    bool  _speakerAccessory;
    NSLayoutConstraint * _viewHeightConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mediaAccessoryItemType;
@property (nonatomic, retain) MRPlatterViewController *mediaControlViewController;
@property (nonatomic, retain) NSArray *mediaControlViewControllerConstraints;
@property (nonatomic, retain) MRUNowPlayingViewController *mediaControlsNowPlayingViewController;
@property (nonatomic, retain) NSString *mediaRoutingIdentifier;
@property (getter=isSiriEndPointAccessory, nonatomic) bool siriEndPointAccessory;
@property (getter=isSpeakerAccessory, nonatomic) bool speakerAccessory;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *viewHeightConstraint;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (void)_addMediaControlView;
- (bool)_canShowWhileLocked;
- (void)_updateConstraints;
- (void)_updateMediaControlAppearanceForTraitCollection:(id)arg1;
- (void)dealloc;
- (bool)hasSingleControlView;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 controlOrientation:(unsigned long long)arg4 preferredControl:(unsigned long long)arg5;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isSiriEndPointAccessory;
- (bool)isSpeakerAccessory;
- (long long)mediaAccessoryItemType;
- (id)mediaControlViewController;
- (id)mediaControlViewControllerConstraints;
- (id)mediaControlsNowPlayingViewController;
- (id)mediaRoutingIdentifier;
- (void)nowPlayingViewController:(id)arg1 didChangeSizeWithAnimations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)nowPlayingViewControllerDidChangeLayout:(id)arg1;
- (void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2;
- (void)platterViewController:(id)arg1 didUpdateEndpointWithReason:(id)arg2;
- (void)setMediaControlViewController:(id)arg1;
- (void)setMediaControlViewControllerConstraints:(id)arg1;
- (void)setMediaControlsNowPlayingViewController:(id)arg1;
- (void)setMediaRoutingIdentifier:(id)arg1;
- (void)setPreferredFrameLayoutGuide:(id)arg1;
- (void)setSiriEndPointAccessory:(bool)arg1;
- (void)setSpeakerAccessory:(bool)arg1;
- (void)setViewHeightConstraint:(id)arg1;
- (id)title;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewHeightConstraint;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
