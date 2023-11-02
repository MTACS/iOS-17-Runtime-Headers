
@interface PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {
    NSString * _accessibilityDescription;
}

@property (copy) NSString *accessibilityDescription;

+ (id)policyWithAccessibilityDescription:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)metadataNeedsProcessing:(id)arg1;
- (id)processMetadata:(id)arg1;
- (void)setAccessibilityDescription:(id)arg1;

@end
