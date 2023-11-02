
@interface HMIConfidence : HMFObject <NSSecureCoding> {
    NSArray * _levelThresholds;
    double  _value;
}

@property (readonly) long long level;
@property (readonly) NSArray *levelThresholds;
@property (readonly) double value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(double)arg1 levelThresholds:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)level;
- (id)levelThresholds;
- (id)shortDescription;
- (double)value;

@end
