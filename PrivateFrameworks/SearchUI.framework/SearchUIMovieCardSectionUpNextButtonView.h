
@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView {
    SearchUIWatchListState * _watchListState;
}

@property (nonatomic, retain) SearchUIWatchListState *watchListState;

- (void).cxx_destruct;
- (void)buttonPressed;
- (id)initIsInUpNext:(bool)arg1 cardSectionView:(id)arg2;
- (void)setWatchListState:(id)arg1;
- (void)updateUpNextStatus;
- (id)watchListState;

@end
