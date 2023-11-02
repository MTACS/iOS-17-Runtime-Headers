
@interface CABrightnessRamper : CAWindowServerRamper {
    double  _contrastEnhancerBegin;
    double  _contrastEnhancerEnd;
    double  _headroomBegin;
    double  _headroomEnd;
    double  _highAmbientStrengthBegin;
    double  _highAmbientStrengthEnd;
    double  _limitBegin;
    double  _limitEnd;
    double  _lowAmbientStrengthBegin;
    double  _lowAmbientStrengthEnd;
    double  _sdrNitsBegin;
    double  _sdrNitsEnd;
}

@property double contrastEnhancerBegin;
@property double contrastEnhancerEnd;
@property double headroomBegin;
@property double headroomEnd;
@property double highAmbientStrengthBegin;
@property double highAmbientStrengthEnd;
@property double limitBegin;
@property double limitEnd;
@property double lowAmbientStrengthBegin;
@property double lowAmbientStrengthEnd;
@property double sdrNitsBegin;
@property double sdrNitsEnd;

- (double)contrastEnhancerBegin;
- (double)contrastEnhancerEnd;
- (double)headroomBegin;
- (double)headroomEnd;
- (double)highAmbientStrengthBegin;
- (double)highAmbientStrengthEnd;
- (id)initWithDisplay:(id)arg1;
- (double)limitBegin;
- (double)limitEnd;
- (double)lowAmbientStrengthBegin;
- (double)lowAmbientStrengthEnd;
- (void)rampCallback:(id)arg1;
- (double)sdrNitsBegin;
- (double)sdrNitsEnd;
- (void)setContrastEnhancerBegin:(double)arg1;
- (void)setContrastEnhancerEnd:(double)arg1;
- (void)setHeadroomBegin:(double)arg1;
- (void)setHeadroomEnd:(double)arg1;
- (void)setHighAmbientStrengthBegin:(double)arg1;
- (void)setHighAmbientStrengthEnd:(double)arg1;
- (void)setLimitBegin:(double)arg1;
- (void)setLimitEnd:(double)arg1;
- (void)setLowAmbientStrengthBegin:(double)arg1;
- (void)setLowAmbientStrengthEnd:(double)arg1;
- (void)setSdrNitsBegin:(double)arg1;
- (void)setSdrNitsEnd:(double)arg1;

@end
