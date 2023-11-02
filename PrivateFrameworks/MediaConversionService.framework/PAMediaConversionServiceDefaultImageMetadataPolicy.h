
@interface PAMediaConversionServiceDefaultImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {
    float  _lossyCompressionQuality;
}

@property float lossyCompressionQuality;

+ (id)policyWithLossyCompressionQuality:(float)arg1;
+ (id)standardPolicy;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLossyCompressionQuality:(float)arg1;
- (float)lossyCompressionQuality;
- (bool)metadataNeedsProcessing:(id)arg1;
- (id)processMetadata:(id)arg1;
- (void)setLossyCompressionQuality:(float)arg1;

@end
