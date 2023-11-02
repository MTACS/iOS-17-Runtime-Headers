
@interface SSMaterial : NSObject {
    UIColor * _color;
    CAFilter * _filter;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) double colorAlpha;
@property (nonatomic, readonly) CAFilter *filter;

+ (id)cropHandle;
+ (id)vellumOpacitySliderTrack;
+ (id)vellumOpacitySliderValueImage;

- (void).cxx_destruct;
- (id)_initWithFilterType:(id)arg1 color:(id)arg2;
- (void)applyToView:(id)arg1;
- (id)color;
- (double)colorAlpha;
- (id)filter;

@end
