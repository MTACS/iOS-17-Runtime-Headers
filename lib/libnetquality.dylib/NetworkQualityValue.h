
@interface NetworkQualityValue : NSObject <NSSecureCoding> {
    long long  _confidence;
    NSNumber * _rating;
    NSNumber * _value;
}

@property long long confidence;
@property (retain) NSNumber *rating;
@property (retain) NSNumber *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)rating;
- (void)setConfidence:(long long)arg1;
- (void)setRating:(id)arg1;
- (void)setValue:(id)arg1;
- (void)updateConfidence:(long long)arg1;
- (id)value;

@end
