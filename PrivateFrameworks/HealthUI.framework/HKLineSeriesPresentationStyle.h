
@interface HKLineSeriesPresentationStyle : NSObject {
    HKAxisLabelStyle * _annotationStyle;
    HKAxisLabelStyle * _axisAnnotationStyle;
    HKLineSeriesPointMarkerStyle * _endCapStyle;
    HKFillStyle * _fillStyle;
    HKLegendPointAnnotationStyle * _legendAnnotationStyle;
    HKLineSeriesPointMarkerStyle * _pointMarkerStyle;
    bool  _shouldApplyRollingAverage;
    bool  _shouldNegateAnnotationValue;
    double  _sineWaveSmoothingFactor;
    HKStrokeStyle * _strokeStyle;
    unsigned long long  _waveForm;
}

@property (nonatomic, retain) HKAxisLabelStyle *annotationStyle;
@property (nonatomic, retain) HKAxisLabelStyle *axisAnnotationStyle;
@property (nonatomic, retain) HKLineSeriesPointMarkerStyle *endCapStyle;
@property (nonatomic, retain) HKFillStyle *fillStyle;
@property (nonatomic, retain) HKLegendPointAnnotationStyle *legendAnnotationStyle;
@property (nonatomic, retain) HKLineSeriesPointMarkerStyle *pointMarkerStyle;
@property (nonatomic) bool shouldApplyRollingAverage;
@property (nonatomic) bool shouldNegateAnnotationValue;
@property (nonatomic) double sineWaveSmoothingFactor;
@property (nonatomic, retain) HKStrokeStyle *strokeStyle;
@property (nonatomic) unsigned long long waveForm;

- (void).cxx_destruct;
- (id)annotationStyle;
- (id)axisAnnotationStyle;
- (id)endCapStyle;
- (id)fillStyle;
- (id)legendAnnotationStyle;
- (id)pointMarkerStyle;
- (void)setAnnotationStyle:(id)arg1;
- (void)setAxisAnnotationStyle:(id)arg1;
- (void)setEndCapStyle:(id)arg1;
- (void)setFillStyle:(id)arg1;
- (void)setLegendAnnotationStyle:(id)arg1;
- (void)setPointMarkerStyle:(id)arg1;
- (void)setShouldApplyRollingAverage:(bool)arg1;
- (void)setShouldNegateAnnotationValue:(bool)arg1;
- (void)setSineWaveSmoothingFactor:(double)arg1;
- (void)setStrokeStyle:(id)arg1;
- (void)setWaveForm:(unsigned long long)arg1;
- (bool)shouldApplyRollingAverage;
- (bool)shouldNegateAnnotationValue;
- (double)sineWaveSmoothingFactor;
- (id)strokeStyle;
- (unsigned long long)waveForm;

@end
