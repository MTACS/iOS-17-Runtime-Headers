
@interface _PREditingPosterContentVibrantMonotoneStyleCoordinatorImpl : _PREditingPosterContentStyleCoordinatorImpl {
    NSMutableDictionary * _cachedTransparancyBackgrounds;
    UIView * _itemView;
    UIView * _itemViewContentView;
    UIView * _variationSliderThumbContentView;
    UIView * _variationSliderThumbView;
    UIView * _variationSliderTrackContentView;
    UIView * _variationSliderTrackView;
}

- (void).cxx_destruct;
- (id)effectiveColor;
- (id)itemView;
- (double)itemViewLuminance;
- (void)setVariation:(double)arg1;
- (id)transparancyBackgroundImageForHeight:(double)arg1;
- (id)variationSliderThumbView;
- (id)variationSliderTrackView;

@end
