
@protocol PXLivePhotoTrimScrubberDelegate <NSObject>

@optional

- (bool)trimScrubber:(PXLivePhotoTrimScrubber *)arg1 canBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(PXLivePhotoTrimScrubber *)arg1 debugEndOffset:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)trimScrubber:(PXLivePhotoTrimScrubber *)arg1 debugEndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)trimScrubber:(PXLivePhotoTrimScrubber *)arg1 debugStartOffset:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)trimScrubber:(PXLivePhotoTrimScrubber *)arg1 debugStartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)trimScrubber:(PXLivePhotoTrimScrubber *)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(PXLivePhotoTrimScrubber *)arg1 didChangeLoupeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)trimScrubber:(PXLivePhotoTrimScrubber *)arg1 didChangeTimeForElement:(long long)arg2;
- (void)trimScrubber:(PXLivePhotoTrimScrubber *)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(bool)arg3;
- (void)trimScrubber:(PXLivePhotoTrimScrubber *)arg1 didTapElement:(long long)arg2;
- (void)trimScrubber:(PXLivePhotoTrimScrubber *)arg1 didTapTimelineAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)trimScrubber:(PXLivePhotoTrimScrubber *)arg1 didZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)trimScrubberAssetDurationDidChange:(PXLivePhotoTrimScrubber *)arg1;
- (void)trimScrubberDidLayoutSubviews:(PXLivePhotoTrimScrubber *)arg1;
- (void)trimScrubberDidUnzoom:(PXLivePhotoTrimScrubber *)arg1;
- (void)trimScrubberPausePlayer:(PXLivePhotoTrimScrubber *)arg1;

@end
