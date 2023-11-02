
@protocol PLVideoResource <NSObject>

@required

+ (bool)deviceSupportsHDR;

- (NSString *)additionalDescription;
- (NSNumber *)cachedIsPlayable;
- (NSURL *)fileURLIfLocal;
- (bool)hasAssociatedMediaMetadata;
- (bool)isDownloadable;
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
- (NSString *)uniformTypeIdentifier;
- (unsigned int)version;

@end
