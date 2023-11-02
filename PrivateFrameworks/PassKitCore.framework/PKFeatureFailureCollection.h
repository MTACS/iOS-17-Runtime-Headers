
@interface PKFeatureFailureCollection : NSObject <NSSecureCoding> {
    NSMutableDictionary * _failuresByFeature;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errorForFeature:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
