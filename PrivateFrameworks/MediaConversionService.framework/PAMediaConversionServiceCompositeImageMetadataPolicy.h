
@interface PAMediaConversionServiceCompositeImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {
    NSArray * _policies;
}

@property (retain) NSArray *policies;

+ (id)policyWithPolicies:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)metadataNeedsProcessing:(id)arg1;
- (id)policies;
- (id)processMetadata:(id)arg1;
- (void)setPolicies:(id)arg1;

@end
