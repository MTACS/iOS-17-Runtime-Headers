
@interface MXAppResponsivenessMetric : MXMetric {
    MXHistogram * _histogrammedApplicationHangTime;
}

@property (readonly) MXHistogram *histogrammedApplicationHangTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)histogrammedApplicationHangTime;
- (id)initWithAppResponsivenessData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;

@end
