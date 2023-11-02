
@interface DRSSamplingParameters : NSObject <DRJSONRepresentable> {
    double  _samplingPercentage;
}

@property (nonatomic, readonly) double samplingPercentage;

- (id)debugDescription;
- (id)description;
- (id)initWithJSONDict:(id)arg1;
- (id)initWithSamplingPercentage:(double)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSamplingParameters:(id)arg1;
- (id)jsonDictRepresentation;
- (double)samplingPercentage;

@end
