
@interface SearchUIAudioPlaybackCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, SearchUICardSectionViewUpdatable> {
    SearchUILabel * _detailTextLabel;
    SearchUIButton * _playButton;
    SearchUISelectableTextView * _subtitleView;
    SearchUISelectableTextView * _titleTextView;
}

@property (nonatomic, retain) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SearchUILabel *detailTextLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SearchUIButton *playButton;
@property (nonatomic, retain) SearchUISelectableTextView *subtitleView;
@property (readonly) Class superclass;
@property (nonatomic, retain) SearchUISelectableTextView *titleTextView;

- (void).cxx_destruct;
- (void)_playButtonPressed:(id)arg1;
- (void)_updateStateFromCardSection:(id)arg1 animated:(bool)arg2;
- (id)detailTextLabel;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (id)playButton;
- (void)setDetailTextLabel:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setSubtitleView:(id)arg1;
- (void)setTitleTextView:(id)arg1;
- (id)setupContentView;
- (id)subtitleView;
- (id)titleTextView;
- (void)updateStateFromCardSection:(id)arg1;

@end
