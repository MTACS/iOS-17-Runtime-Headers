
@interface AVBackdropView : AVView

+ (void)applyBaseTrackTintToView:(id)arg1;
+ (void)applyCompletedTrackTintToView:(id)arg1;
+ (void)applyGlyphTintColor:(id)arg1 toView:(id)arg2;
+ (void)applyLoadedTrackTintToView:(id)arg1;
+ (void)applyPrimaryGlyphTintToView:(id)arg1;
+ (void)applySecondaryGlyphTintToView:(id)arg1;
+ (void)configureSlider:(id)arg1 thumbView:(id)arg2 loadedTrackView:(id)arg3;
+ (void)configureSlider:(id)arg1 thumbView:(id)arg2 loadedTrackView:(id)arg3 withTimelineMarkers:(id)arg4;
+ (void)configureView:(id)arg1 forTintEffectWithColor:(id)arg2 filterType:(id)arg3;
+ (void)configureView:(id)arg1 withBackgroundFillOfColor:(id)arg2 opacity:(double)arg3 filter:(id)arg4;
+ (void)removeAllFiltersFromView:(id)arg1;
+ (id)secondaryGlyphTintColor;
+ (id)secondaryMaterialOverlayView;

@end
