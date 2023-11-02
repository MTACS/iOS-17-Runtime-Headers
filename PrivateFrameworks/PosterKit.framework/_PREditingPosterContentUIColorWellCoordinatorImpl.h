
@interface _PREditingPosterContentUIColorWellCoordinatorImpl : _PREditingPosterContentStyleCoordinatorImpl {
    PREditingColorWellView * _colorWellView;
    UIView * _variationSliderThumbView;
}

- (void).cxx_destruct;
- (id)effectiveColor;
- (id)initWithStyle:(id)arg1 colorWellView:(id)arg2;
- (id)itemView;
- (void)setVariation:(double)arg1;
- (id)variationSliderThumbView;
- (id)variationSliderTrackView;

@end
