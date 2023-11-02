
@interface MADCaptionResult : MADResult {
    NSString * _caption;
    NSArray * _classificationIdentifiers;
    bool  _isLowConfidence;
    float  _score;
}

@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSArray *classificationIdentifiers;
@property (nonatomic, readonly) bool isLowConfidence;
@property (nonatomic, readonly) float score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)caption;
- (id)classificationIdentifiers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCaption:(id)arg1 score:(float)arg2 isLowConfidence:(bool)arg3 classificationIdentifiers:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isLowConfidence;
- (float)score;

@end
