
@interface APFrequencyCapData : NSObject <NSSecureCoding> {
    unsigned long long  _duration;
    long long  _relevantIdentifier;
    unsigned long long  _value;
}

@property unsigned long long duration;
@property long long relevantIdentifier;
@property unsigned long long value;

+ (bool)supportsSecureCoding;

- (unsigned long long)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)relevantIdentifier;
- (void)setDuration:(unsigned long long)arg1;
- (void)setRelevantIdentifier:(long long)arg1;
- (void)setValue:(unsigned long long)arg1;
- (unsigned long long)value;

@end
