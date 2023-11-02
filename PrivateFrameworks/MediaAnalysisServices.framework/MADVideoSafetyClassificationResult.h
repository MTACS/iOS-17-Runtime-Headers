
@interface MADVideoSafetyClassificationResult : MADVideoResult {
    bool  _isSensitive;
    NSDictionary * _scoresForLabels;
}

@property (nonatomic, readonly) bool isSensitive;
@property (nonatomic, readonly) NSDictionary *scoresForLabels;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsSensitive:(bool)arg1 scoresForLabels:(id)arg2;
- (bool)isSensitive;
- (id)scoresForLabels;

@end
