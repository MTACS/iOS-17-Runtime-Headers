
@interface MADImageSafetyClassificationResult : MADResult {
    NSDictionary * _attributes;
    bool  _isSensitive;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) bool isSensitive;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsSensitive:(bool)arg1 andAttributes:(id)arg2;
- (bool)isSensitive;

@end
