
@protocol UIMovieScrubberTrackViewDataSource <NSObject>

@required

- (NSArray *)movieScrubberTrackView:(UIMovieScrubberTrackView *)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(NSNumber *)arg3 endingAt:(NSNumber *)arg4;
- (void)movieScrubberTrackView:(UIMovieScrubberTrackView *)arg1 requestThumbnailImageForTimestamp:(NSNumber *)arg2 isSummaryThumbnail:(bool)arg3;
- (double)movieScrubberTrackViewDuration:(UIMovieScrubberTrackView *)arg1;
- (double)movieScrubberTrackViewThumbnailAspectRatio:(UIMovieScrubberTrackView *)arg1;

@end
