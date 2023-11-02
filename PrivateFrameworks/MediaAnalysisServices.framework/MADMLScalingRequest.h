
@interface MADMLScalingRequest : MADRequest {
    unsigned long long  _scaledImageHeight;
    unsigned long long  _scaledImageWidth;
}

@property (nonatomic, readonly) unsigned long long scaledImageHeight;
@property (nonatomic, readonly) unsigned long long scaledImageWidth;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScaledImageWidth:(unsigned long long)arg1 scaledImageHeight:(unsigned long long)arg2;
- (unsigned long long)scaledImageHeight;
- (unsigned long long)scaledImageWidth;

@end
