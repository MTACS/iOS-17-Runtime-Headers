
@interface ISLivePhotoUIView : ISBasePlayerUIView <ISChangeObserver, UIGestureRecognizerDelegate> {
    long long  __overlayDismissalID;
    UILabel * __overlayLabel;
    ISTouchLivePhotoPlaybackFilter * __playbackFilter;
    bool  __playingVitality;
    <ISLivePhotoUIViewDelegate> * _delegate;
    struct { 
        bool canBeginInteractivePlayback; 
        bool extraMinimumTouchDuration; 
    }  _delegateRespondsTo;
    UIImpactFeedbackGenerator * _feedbackGenerator;
    UIGestureRecognizer * _playbackGestureRecognizer;
    CAMeshTransform * _vitalityTransform;
}

@property (setter=_setOverlayDismissalID:, nonatomic) long long _overlayDismissalID;
@property (nonatomic, readonly) UILabel *_overlayLabel;
@property (setter=_setPlaybackFilter:, nonatomic, retain) ISTouchLivePhotoPlaybackFilter *_playbackFilter;
@property (setter=_setPlayingVitality:, nonatomic) bool _playingVitality;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ISLivePhotoUIViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIGestureRecognizer *playbackGestureRecognizer;
@property (nonatomic, retain) ISLivePhotoPlayer *player;
@property (readonly) Class superclass;
@property (nonatomic, copy) CAMeshTransform *vitalityTransform;

- (void).cxx_destruct;
- (void)_ISLivePhotoUIViewCommonInitialization;
- (void)_dismissOverlayLabel:(long long)arg1;
- (void)_handlePlaybackRecognizer:(id)arg1;
- (long long)_overlayDismissalID;
- (id)_overlayLabel;
- (id)_playbackFilter;
- (void)_playerDidChangeHinting;
- (void)_playerDidChangePlaybackStyle;
- (bool)_playingVitality;
- (void)_setOverlayDismissalID:(long long)arg1;
- (void)_setPlaybackFilter:(id)arg1;
- (void)_setPlayingVitality:(bool)arg1;
- (void)_showOverlayLabel;
- (void)_updateGestureRecognizerParameters;
- (void)_updatePlaybackFilter;
- (void)_updatePlaybackFilterInput;
- (void)_updateVideoTransform;
- (void)audioSessionDidChange;
- (void)contentDidChange;
- (void)dealloc;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)livePhotoPlayer;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)playbackGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setPlaybackFilterTouchActive:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setVitalityTransform:(id)arg1;
- (id)vitalityTransform;

@end
