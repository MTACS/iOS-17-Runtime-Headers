
@protocol _PREditingPosterContentStyleCoordinatorImpl <NSObject>

@required

- (double)contentsLuminance;
- (UIView *)itemView;
- (double)itemViewLuminance;
- (void)setContentsLuminance:(double)arg1;
- (void)setVariation:(double)arg1;
- (<PRPosterContentStyle> *)style;
- (double)variation;
- (UIView *)variationSliderThumbView;
- (UIView *)variationSliderTrackView;

@end
