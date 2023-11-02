
@interface WFImageConvertAction : WFAction

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (id)imageQualityWithQuality:(id)arg1 imageFormat:(id)arg2;
- (bool)preserveMetadataWithPreserveMetadata:(bool)arg1 imageFormat:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)typeFromImageFormatString:(id)arg1;

@end
