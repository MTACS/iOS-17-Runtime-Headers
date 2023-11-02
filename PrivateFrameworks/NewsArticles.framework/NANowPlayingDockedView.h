
@interface NANowPlayingDockedView : UIControl {
    bool  _changesDisplayWhenHighlighted;
    UIButton * _closeButton;
    UIView * _contentView;
    <NANowPlayingDockedViewDelegate> * _delegate;
    UIMenu * _menu;
    UIButton * _playPauseButton;
    UILabel * _publisherLabel;
    MPUMarqueeView * _publisherMarqueeContainer;
    UIButton * _rewindButton;
    UILabel * _titleLabel;
    MPUMarqueeView * _titleMarqueeContainer;
    bool  _waiting;
}

@property (nonatomic) bool changesDisplayWhenHighlighted;
@property (nonatomic, readonly) UIButton *closeButton;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) <NANowPlayingDockedViewDelegate> *delegate;
@property (nonatomic, retain) UIMenu *menu;
@property (nonatomic, readonly) UIButton *playPauseButton;
@property (nonatomic, readonly) UILabel *publisherLabel;
@property (nonatomic, readonly) MPUMarqueeView *publisherMarqueeContainer;
@property (nonatomic, readonly) UIButton *rewindButton;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) MPUMarqueeView *titleMarqueeContainer;
@property (nonatomic) bool waiting;

- (void).cxx_destruct;
- (void)_updateTitleAccessibilityLabel;
- (bool)changesDisplayWhenHighlighted;
- (id)closeButton;
- (void)closeButtonTapped:(id)arg1;
- (id)contentView;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithBackground:(id)arg1;
- (void)layoutSubviews;
- (id)menu;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(id)arg1;
- (void)pauseButtonTapped:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (id)playPauseButton;
- (id)publisherLabel;
- (id)publisherMarqueeContainer;
- (id)rewindButton;
- (void)rewindButtonTapped:(id)arg1;
- (void)setChangesDisplayWhenHighlighted:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsPlaying:(bool)arg1 waiting:(bool)arg2;
- (void)setMarqueeRunning:(bool)arg1;
- (void)setMenu:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWaiting:(bool)arg1;
- (id)titleLabel;
- (id)titleMarqueeContainer;
- (bool)waiting;

@end
