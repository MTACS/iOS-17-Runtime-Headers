
@interface PAMediaConversionServiceImageMetadataPolicy : NSObject <NSSecureCoding>

+ (id)standardPolicy;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)metadataNeedsProcessing:(id)arg1;
- (id)processMetadata:(id)arg1;

@end
