
@interface CVMLObservation_LegacySupportDoNotChange : NSObject <NSSecureCoding> {
    float  _confidence;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 forKey:(id)arg2;

@end
