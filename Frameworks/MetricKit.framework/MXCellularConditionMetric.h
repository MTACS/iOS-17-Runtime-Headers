
@interface MXCellularConditionMetric : MXMetric {
    MXHistogram * _histogrammedCellularConditionTime;
}

@property (readonly) MXHistogram *histogrammedCellularConditionTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)histogrammedCellularConditionTime;
- (id)initWithCellularConditionTime:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;

@end
