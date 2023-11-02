
@interface ICAudioPlayPauseView : UIView {
    ICAttachment * _audioAttachment;
    CALayer * _backgroundLayer;
    ICNoteEditorIconImageView * _pauseView;
    ICNoteEditorIconImageView * _playView;
}

@property (nonatomic, readonly) AVAsset *audio;
@property (nonatomic, retain) ICAttachment *audioAttachment;
@property (nonatomic, retain) CALayer *backgroundLayer;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, retain) ICNoteEditorIconImageView *pauseView;
@property (nonatomic, retain) ICNoteEditorIconImageView *playView;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)addSubImageViewForImage:(id)arg1;
- (id)audio;
- (id)audioAttachment;
- (void)audioDidChange;
- (void)audioPlaybackPauseNotification:(id)arg1;
- (void)audioPlaybackPlayNotification:(id)arg1;
- (void)audioPlaybackStopNotification:(id)arg1;
- (void)audioPlaybackTimeChangedNotification:(id)arg1;
- (void)audioWillChange;
- (id)backgroundLayer;
- (void)createBackgroundLayer;
- (void)createPlayPauseViews;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)didPlayToEndNotification:(id)arg1;
- (id)foregroundStrokeColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAccessibilityElement;
- (bool)isPlaying;
- (void)pause;
- (id)pauseView;
- (void)play;
- (id)playView;
- (void)setAudioAttachment:(id)arg1;
- (void)setBackgroundLayer:(id)arg1;
- (void)setImageNamed:(id)arg1 onLayer:(id)arg2 adjustLayerSize:(bool)arg3;
- (void)setPauseView:(id)arg1;
- (void)setPlayView:(id)arg1;
- (void)sharedInit;
- (void)showPaused;
- (void)showPlaying;
- (void)showPressed:(bool)arg1;
- (void)showStopped;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tapGesture:(id)arg1;
- (void)tintColorDidChange;
- (void)togglePlayPause;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateTime:(double)arg1 duration:(double)arg2;

@end
