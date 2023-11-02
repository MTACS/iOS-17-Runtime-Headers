
@interface LPCaptionButtonCollapsedPresentationProperties : NSObject {
    UIColor * _backgroundColor;
    LPImage * _icon;
    double  _layoutRatioThreshold;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic) double layoutRatioThreshold;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)icon;
- (double)layoutRatioThreshold;
- (void)setBackgroundColor:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setLayoutRatioThreshold:(double)arg1;

@end
