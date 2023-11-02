
@interface ISAnimatedImageView : UIView <ISAnimatedImagePlayerDestination> {
    UIImageView * _placeholderImageView;
    ISAnimatedImagePlayer * _player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayedFrameIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PFAnimatedImage *image;
@property (nonatomic) UIImageView *placeholderImageView;
@property (nonatomic, retain) ISAnimatedImagePlayer *player;
@property (getter=isPlaying, nonatomic) bool playing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animatedImagePlayerDidBeginAnimating:(id)arg1;
- (void)animatedImagePlayerFrameDidChange:(id)arg1;
- (bool)animatedImagePlayerIsReadyToDisplay:(id)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (unsigned long long)displayedFrameIndex;
- (id)image;
- (id)initWithAnimatedImage:(id)arg1;
- (id)initWithAnimatedImagePlayer:(id)arg1;
- (bool)isPlaying;
- (id)placeholderImageView;
- (id)player;
- (void)setAlpha:(double)arg1;
- (void)setDisplayedFrameIndex:(unsigned long long)arg1;
- (void)setHidden:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setPlaceholderImageView:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
