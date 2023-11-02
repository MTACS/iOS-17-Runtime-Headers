
@interface MSVRandomDistribution : NSObject <MSVRandom, NSSecureCoding> {
    long long  _highestValue;
    long long  _lowestValue;
    <MSVRandom> * _source;
}

@property (nonatomic, readonly) long long highestValue;
@property (nonatomic, readonly) long long lowestValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)highestValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (long long)lowestValue;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;

@end
