
@interface CKStickerTranscriptCell : CKAssociatedStickerTranscriptCell <CKAnimationTimerObserver> {
    CKAnimatedImage * _animatedImage;
    NSArray * _frames;
    bool  _hasCommittedFirstFrame;
    UIImage * _image;
    CKBalloonImageView * _imageView;
    unsigned long long  _initialFrameIndex;
    bool  _userExplicitlyUnpausedAnimation;
}

@property (nonatomic, retain) CKAnimatedImage *animatedImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *frames;
@property (nonatomic) bool hasCommittedFirstFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) CKBalloonImageView *imageView;
@property (nonatomic) unsigned long long initialFrameIndex;
@property (readonly) Class superclass;
@property (nonatomic) bool userExplicitlyUnpausedAnimation;

- (void).cxx_destruct;
- (void)_commitFirstFrameWithAnimationTime:(double)arg1;
- (id)animatedImage;
- (bool)animationExplicitlyResumed;
- (void)animationTimerFired:(double)arg1;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)frames;
- (bool)hasCommittedFirstFrame;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)initialFrameIndex;
- (void)prepareForReuse;
- (void)setAnimatedImage:(id)arg1;
- (void)setFrames:(id)arg1;
- (void)setHasCommittedFirstFrame:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setInitialFrameIndex:(unsigned long long)arg1;
- (void)setSticker:(id)arg1;
- (void)setUserExplicitlyUnpausedAnimation:(bool)arg1;
- (void)updateAnimationTimerObserving;
- (bool)userExplicitlyUnpausedAnimation;

@end
