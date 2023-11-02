
@interface SearchUIButtonsView : NUIContainerBoxView {
    SearchUIMovieCardSectionView * _cardSectionView;
}

@property SearchUIMovieCardSectionView *cardSectionView;

- (void).cxx_destruct;
- (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 punchoutURL:(id)arg3;
- (id)cardSectionView;
- (void)fetchButtonsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCardSectionView:(id)arg1;
- (void)setCardSectionView:(id)arg1;

@end
