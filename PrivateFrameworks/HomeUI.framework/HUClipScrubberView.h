
@interface HUClipScrubberView : UIView {
    HUClipScrubberPlayheadView * _backgroundPlayheadView;
    UICollectionView * _clipCollectionView;
    UIView * _collectionViewContainer;
    AVBackgroundView * _contentBackgroundView;
    UIView * _contentView;
    unsigned long long  _displayMode;
    bool  _isPlayingMedia;
    HUBlendedSeparatorView * _leftBlendedSeparator;
    UIButton * _playPauseButton;
    HUClipScrubberPlayheadView * _playheadView;
    UIButton * _rightActionButton;
    HUBlendedSeparatorView * _rightBlendedSeparator;
}

@property (nonatomic, retain) HUClipScrubberPlayheadView *backgroundPlayheadView;
@property (nonatomic, retain) UICollectionView *clipCollectionView;
@property (nonatomic, retain) UIView *collectionViewContainer;
@property (nonatomic, retain) AVBackgroundView *contentBackgroundView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) bool isPlayingMedia;
@property (nonatomic, retain) HUBlendedSeparatorView *leftBlendedSeparator;
@property (nonatomic, retain) UIButton *playPauseButton;
@property (nonatomic, retain) HUClipScrubberPlayheadView *playheadView;
@property (nonatomic, retain) UIButton *rightActionButton;
@property (nonatomic, retain) HUBlendedSeparatorView *rightBlendedSeparator;

- (void).cxx_destruct;
- (void)_addConstraints;
- (id)_deleteImage;
- (id)_pauseImage;
- (id)_playImage;
- (void)activateLiveButtonDisplay;
- (id)backgroundPlayheadView;
- (id)clipCollectionView;
- (id)collectionViewContainer;
- (id)contentBackgroundView;
- (id)contentView;
- (void)deactivateLiveButtonDisplay;
- (void)didUpdatePlaybackEngine:(id)arg1;
- (void)displayEditInterface;
- (unsigned long long)displayMode;
- (id)displayModeDescription;
- (void)hideEditInterface;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPlayingMedia;
- (void)layoutSubviews;
- (id)leftBlendedSeparator;
- (void)navigateToLivePosition;
- (void)navigateToOffset:(double)arg1;
- (id)playOrPauseImageForEngineMode:(unsigned long long)arg1;
- (id)playPauseButton;
- (id)playheadView;
- (id)rightActionButton;
- (id)rightBlendedSeparator;
- (void)setBackgroundPlayheadView:(id)arg1;
- (void)setClipCollectionView:(id)arg1;
- (void)setCollectionViewContainer:(id)arg1;
- (void)setContentBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setIsPlayingMedia:(bool)arg1;
- (void)setLeftBlendedSeparator:(id)arg1;
- (void)setPlayPauseButton:(id)arg1;
- (void)setPlayheadView:(id)arg1;
- (void)setRightActionButton:(id)arg1;
- (void)setRightBlendedSeparator:(id)arg1;
- (void)updateAccessoryButtonsForPlaybackEngine:(id)arg1;
- (void)updateDisplayMode:(unsigned long long)arg1;

@end
