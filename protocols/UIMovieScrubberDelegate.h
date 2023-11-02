
@protocol UIMovieScrubberDelegate <NSObject>

@optional

- (void)movieScrubber:(UIMovieScrubber *)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(UIMovieScrubber *)arg1 editingStartValueDidChange:(double)arg2;
- (void)movieScrubber:(UIMovieScrubber *)arg1 valueDidChange:(double)arg2;
- (void)movieScrubber:(UIMovieScrubber *)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3;
- (void)movieScrubber:(UIMovieScrubber *)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)movieScrubberDidBeginAnimatingZoom:(UIMovieScrubber *)arg1;
- (void)movieScrubberDidBeginEditing:(UIMovieScrubber *)arg1;
- (void)movieScrubberDidBeginScrubbing:(UIMovieScrubber *)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidCancelEditing:(UIMovieScrubber *)arg1;
- (void)movieScrubberDidEndAnimatingZoom:(UIMovieScrubber *)arg1;
- (void)movieScrubberDidEndScrubbing:(UIMovieScrubber *)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidFinishRequestingThumbnails:(UIMovieScrubber *)arg1;
- (void)movieScrubberEditingAnimationFinished:(UIMovieScrubber *)arg1;
- (void)movieScrubberWillBeginEditing:(UIMovieScrubber *)arg1;
- (void)movieScrubberWillBeginRequestingThumbnails:(UIMovieScrubber *)arg1;

@end
