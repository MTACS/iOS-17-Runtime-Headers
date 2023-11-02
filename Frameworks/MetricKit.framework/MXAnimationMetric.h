
@interface MXAnimationMetric : MXMetric {
    NSMeasurement * _scrollHitchTimeRatio;
}

@property (readonly) NSMeasurement *scrollHitchTimeRatio;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGlitchTimeRatio:(id)arg1;
- (id)scrollHitchTimeRatio;
- (id)toDictionary;

@end
