
@interface MXMetric : NSObject <NSSecureCoding> {
    NSMeasurementFormatter * _measurementFormatter;
}

@property (retain) NSMeasurementFormatter *measurementFormatter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DictionaryRepresentation;
- (id)JSONRepresentation;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)measurementFormatter;
- (void)setMeasurementFormatter:(id)arg1;
- (id)toDictionary;

@end
