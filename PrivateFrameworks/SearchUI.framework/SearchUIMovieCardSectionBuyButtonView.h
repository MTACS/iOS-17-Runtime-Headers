
@interface SearchUIMovieCardSectionBuyButtonView : TLKStackView {
    SearchUIOfferButtonView * _button;
    SearchUIMovieCardSectionView * _cardSectionView;
    SFPunchout * _punchout;
    SearchUILabel * _subtitleLabel;
}

@property (nonatomic, retain) SearchUIOfferButtonView *button;
@property (nonatomic) SearchUIMovieCardSectionView *cardSectionView;
@property (nonatomic, retain) SFPunchout *punchout;
@property (nonatomic, retain) SearchUILabel *subtitleLabel;

- (void).cxx_destruct;
- (id)button;
- (void)buttonPressed;
- (id)cardSectionView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 punchout:(id)arg3 cardSectionView:(id)arg4;
- (id)punchout;
- (void)setButton:(id)arg1;
- (void)setCardSectionView:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (id)subtitleLabel;

@end
