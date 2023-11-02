
@interface SearchUITrailerView : TLKStackView {
    SearchUITrailersCardSectionView * _cardSectionView;
    UIView * _centeredBoxView;
    SearchUIButton * _playButton;
    SFPunchout * _punchout;
    TLKLabel * _titleLabel;
}

@property (nonatomic) SearchUITrailersCardSectionView *cardSectionView;
@property (nonatomic, retain) UIView *centeredBoxView;
@property (nonatomic, retain) SearchUIButton *playButton;
@property (nonatomic, retain) SFPunchout *punchout;
@property (nonatomic, retain) TLKLabel *titleLabel;

- (void).cxx_destruct;
- (id)cardSectionView;
- (id)centeredBoxView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithMediaItem:(id)arg1 cardSectionView:(id)arg2;
- (id)playButton;
- (void)playTrailer;
- (id)punchout;
- (void)setCardSectionView:(id)arg1;
- (void)setCenteredBoxView:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
