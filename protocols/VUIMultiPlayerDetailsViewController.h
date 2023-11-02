
@protocol VUIMultiPlayerDetailsViewController <NSObject>

@required

- (long long)itemCount;
- (void)updateVisibleCellsWithPlaybackIdentifiers:(NSArray *)arg1;
- (void)updateWithSelectedPlaybackIdentifiers:(NSArray *)arg1 reloadingData:(bool)arg2;

@end
