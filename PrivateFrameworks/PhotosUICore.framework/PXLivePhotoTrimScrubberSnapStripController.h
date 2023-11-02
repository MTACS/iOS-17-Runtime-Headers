
@interface PXLivePhotoTrimScrubberSnapStripController : NSObject {
    bool  _allowStartEndTimeSnapIndicators;
    PXSnapStripView * _snapStripView;
    PXLivePhotoTrimScrubberSnapStripControllerSpec * _spec;
    PXLivePhotoTrimScrubber * _trimScrubber;
}

@property (nonatomic) bool allowStartEndTimeSnapIndicators;
@property (nonatomic, retain) PXSnapStripView *snapStripView;
@property (nonatomic, retain) PXLivePhotoTrimScrubberSnapStripControllerSpec *spec;
@property (nonatomic, retain) PXLivePhotoTrimScrubber *trimScrubber;

- (void).cxx_destruct;
- (id)_snapIndicatorInfosForTimes:(id)arg1 currentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 style:(unsigned long long)arg3 skipSingleIndicatorWithCurrentTime:(bool)arg4 skipDefaultTimeIndicator:(bool)arg5;
- (id)_snapIndicatorInfosForTimes:(id)arg1 currentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 suggestedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 style:(unsigned long long)arg4 skipSingleIndicatorWithCurrentTime:(bool)arg5 skipDefaultTimeIndicator:(bool)arg6;
- (bool)allowStartEndTimeSnapIndicators;
- (void)setAllowStartEndTimeSnapIndicators:(bool)arg1;
- (void)setSnapStripView:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setTrimScrubber:(id)arg1;
- (id)snapStripView;
- (void)snapStripViewNeedsDisplay;
- (id)spec;
- (id)trimScrubber;
- (void)updateSnapStripView;
- (void)updateSnapStripViewAnimated:(bool)arg1;

@end
