
@interface PAMediaConversionServiceSetCaptionImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {
    NSString * _caption;
}

@property (copy) NSString *caption;

+ (id)policyWithCaption:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)caption;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)metadataNeedsProcessing:(id)arg1;
- (id)processMetadata:(id)arg1;
- (void)setCaption:(id)arg1;

@end
