
@interface SBIconPageIndicatorImageSetCache : NSObject {
    SBIconPageIndicatorImageSetResult * _cameraImageSetResults;
    SBIconPageIndicatorImageSetResult * _indicatorImageSetResults;
    _UILegibilitySettings * _legibilitySettings;
    SBIconPageIndicatorImageSetResult * _searchImageSetResults;
}

@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;

- (void).cxx_destruct;
- (id)_emptyPageIndicatorSet;
- (id)cameraIndicatorImageSetForLegibilitySettings:(id)arg1;
- (id)legibilitySettings;
- (id)pageIndicatorImageSetForLegibilitySettings:(id)arg1;
- (id)searchIndicatorImageSetForLegibilitySettings:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;

@end
