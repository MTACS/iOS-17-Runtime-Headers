
@interface AVNewsWidgetPlayerBehaviorContext : NSObject <AVBehaviorContext, AVBehaviorContextInternal, AVPlaybackContentTransitioningViewDelegate, AVPlayerViewControllerBehaviorContext> {
    AVNewsWidgetPlayerBehavior * _behavior;
    AVPlaybackContentTransitioningView * _contentTransitionView;
    AVPlayer * _contentTransitioningPlayer;
    UIView * _customContentTransitioningInfoPanel;
    AVPlayerViewController * _playerViewController;
    bool  _startNextContentTransitionButtonEnabled;
    bool  _startPreviousContentTransitionButtonEnabled;
}

@property (nonatomic, readonly) long long activeContentTransitionType;
@property (nonatomic) AVNewsWidgetPlayerBehavior *behavior;
@property (getter=isContentTransitionInteractive, nonatomic, readonly) bool contentTransitionInteractive;
@property (nonatomic, retain) AVPlaybackContentTransitioningView *contentTransitionView;
@property (nonatomic, readonly) UIView *contentTransitioningOverlayView;
@property (nonatomic, retain) AVPlayer *contentTransitioningPlayer;
@property (nonatomic, retain) UIView *customContentTransitioningInfoPanel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (getter=isStartNextContentTransitionButtonEnabled, nonatomic) bool startNextContentTransitionButtonEnabled;
@property (getter=isStartPreviousContentTransitionButtonEnabled, nonatomic) bool startPreviousContentTransitionButtonEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_transitionDirectionForContentTransitionType:(long long)arg1;
- (long long)activeContentTransitionType;
- (id)behavior;
- (long long)contentTransitionTypeForTransitionDirection:(long long)arg1;
- (id)contentTransitionView;
- (id)contentTransitioningOverlayView;
- (id)contentTransitioningPlayer;
- (id)contentTransitioningPlayerContentViewForTransition:(id)arg1;
- (bool)contentTransitioningView:(id)arg1 shouldBeginTransitionWithDirection:(long long)arg2;
- (void)contentTransitioningViewDidChangeTransitionStatus:(id)arg1 oldState:(long long)arg2 oldTransitionDirection:(long long)arg3 oldProgress:(double)arg4;
- (bool)contentTransitioningViewShouldBeginDragging:(id)arg1 locationInView:(struct CGPoint { double x1; double x2; })arg2;
- (id)customContentTransitioningInfoPanel;
- (void)didAddBehavior:(id)arg1;
- (void)didRemoveBehavior:(id)arg1;
- (id)initWithAVKitOwner:(id)arg1;
- (bool)isContentTransitionInteractive;
- (bool)isStartNextContentTransitionButtonEnabled;
- (bool)isStartPreviousContentTransitionButtonEnabled;
- (id)makePlaybackContentContainerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 activeContentView:(id)arg2;
- (id)playerViewController;
- (void)setBehavior:(id)arg1;
- (void)setContentTransitionView:(id)arg1;
- (void)setContentTransitioningPlayer:(id)arg1;
- (void)setCustomContentTransitioningInfoPanel:(id)arg1;
- (void)setStartNextContentTransitionButtonEnabled:(bool)arg1;
- (void)setStartPreviousContentTransitionButtonEnabled:(bool)arg1;
- (void)setVideoGravityForTransitioningContent:(id)arg1;
- (void)startContentTransition:(long long)arg1;
- (void)updateStartLeftRightContentTransitionButtonsEnabled;
- (void)viewDidLoad;
- (void)willAddBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;

@end
