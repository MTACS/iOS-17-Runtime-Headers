
@interface PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy : PAMediaConversionServiceDefaultImageMetadataPolicy

+ (void)_filterImageProperties:(id)arg1 metadataWithKey:(id)arg2 preserveProperties:(id)arg3;
+ (id)policyWithAllowLocation:(bool)arg1;
+ (bool)supportsSecureCoding;

- (bool)metadataNeedsProcessing:(id)arg1;
- (id)processMetadata:(id)arg1;

@end
