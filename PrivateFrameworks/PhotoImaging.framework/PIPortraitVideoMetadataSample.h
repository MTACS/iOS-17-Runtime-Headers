
@interface PIPortraitVideoMetadataSample : NSObject {
    PTTimedRenderingMetadata * _timedMetadata;
}

@property (nonatomic, retain) PTTimedRenderingMetadata *timedMetadata;

+ (id)renderingMetadataIdentifier;

- (void).cxx_destruct;
- (id)CIImageProcessorDigestObject;
- (void)applyToRenderRequest:(id)arg1;
- (id)initWithMetadataGroup:(id)arg1 majorVersion:(unsigned int)arg2 minorVersion:(unsigned int)arg3 error:(out id*)arg4;
- (void)nu_updateDigest:(id)arg1;
- (void)setTimedMetadata:(id)arg1;
- (id)timedMetadata;
- (id)valueWithIdentifier:(id)arg1 inGroup:(id)arg2 ofClass:(Class)arg3;

@end
