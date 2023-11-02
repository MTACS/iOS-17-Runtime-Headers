
@protocol SearchUIWatchListDelegate <NSObject>

@required

- (SearchUIWatchListState *)watchListState;
- (void)watchListStateDidChange:(SearchUIWatchListState *)arg1;

@end
