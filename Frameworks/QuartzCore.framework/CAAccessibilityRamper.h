
@interface CAAccessibilityRamper : CAWindowServerRamper {
    double  _axScaleBegin;
    double  _axScaleEnd;
}

@property double axScaleBegin;
@property double axScaleEnd;

- (double)axScaleBegin;
- (double)axScaleEnd;
- (id)initWithDisplay:(id)arg1;
- (void)rampCallback:(id)arg1;
- (void)setAxScaleBegin:(double)arg1;
- (void)setAxScaleEnd:(double)arg1;

@end
