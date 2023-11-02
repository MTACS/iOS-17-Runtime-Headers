
@interface PLVideoInternalResource : NSObject <PLVideoResource> {
    PLInternalResource * _backingResource;
    NSNumber * _cachedIsPlayable;
}

@property (nonatomic, readonly) PLInternalResource *backingResource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)deviceSupportsHDR;

- (void).cxx_destruct;
- (id)additionalDescription;
- (id)backingResource;
- (id)cachedIsPlayable;
- (id)debugDescription;
- (id)fileURLIfLocal;
- (bool)hasAssociatedMediaMetadata;
- (id)initWithBackingResource:(id)arg1;
- (bool)isDownloadable;
- (bool)isEqual:(id)arg1;
- (bool)isHDRDerivative;
- (bool)isHDROrSDRDependingOnMasterVideo;
- (bool)isLargeQuality;
- (bool)isLocallyAvailable;
- (bool)isLocallyGeneratable;
- (bool)isOriginalVideo;
- (bool)isOriginalVideoComplement;
- (bool)isPlayable;
- (bool)isSDRFallback;
- (bool)isStreamable;
- (bool)matchesOrExceedsQualityLevel:(unsigned int)arg1;
- (unsigned short)storeClassID;
- (id)uniformTypeIdentifier;
- (unsigned int)version;

@end
