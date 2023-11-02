
@interface PHMediaFormatConversionSource : PHMediaFormatConversionContent {
    long long  _accessibilityDescriptionMetadataStatus;
    PFMetadata * _cachedMetadata;
    long long  _captionMetadataStatus;
    bool  _containsHEIFImage;
    bool  _containsImageWithFormatEligibleForTranscoding;
    bool  _containsProResVideoWithFormatEligibleForTranscoding;
    bool  _containsVideoWithFormatEligibleForTranscoding;
    bool  _didCheckForLivePhotoPairingIdentifier;
    bool  _didCheckForVideoWithFormatEligibleForTranscoding;
    unsigned int  _firstVideoTrackCodec;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageDimensions;
    NSString * _livePhotoPairingIdentifier;
    long long  _locationMetadataStatus;
    bool  _preflighted;
    NSString * _renderOriginatingSignature;
    id  _transcodingEligibleVideoTrackFormatDescription;
}

@property (nonatomic) long long accessibilityDescriptionMetadataStatus;
@property (nonatomic) long long captionMetadataStatus;
@property (nonatomic, readonly) bool containsHEIFImage;
@property (nonatomic, readonly) bool containsHEVCVideo;
@property (nonatomic, readonly) bool containsImageWithFormatEligibleForTranscoding;
@property (nonatomic, readonly) bool containsProResVideoWithFormatEligibleForTranscoding;
@property (nonatomic) bool containsVideoWithFormatEligibleForTranscoding;
@property bool didCheckForLivePhotoPairingIdentifier;
@property bool didCheckForVideoWithFormatEligibleForTranscoding;
@property (nonatomic) unsigned int firstVideoTrackCodec;
@property struct CGSize { double x1; double x2; } imageDimensions;
@property (nonatomic, retain) NSString *livePhotoPairingIdentifier;
@property (nonatomic) long long locationMetadataStatus;
@property (nonatomic, retain) PFMetadata *metadata;
@property bool preflighted;
@property (copy) NSString *renderOriginatingSignature;
@property (nonatomic, readonly) id transcodingEligibleVideoTrackFormatDescription;

+ (id)imageSourceForFileURL:(id)arg1;
+ (id)imageSourceForFileURL:(id)arg1 dimensions:(struct CGSize { double x1; double x2; })arg2;
+ (Class)requestClass;
+ (id)sourceForFileURL:(id)arg1;
+ (id)sourceForFileURL:(id)arg1 mediaType:(long long)arg2 imageDimensions:(struct CGSize { double x1; double x2; })arg3;
+ (id)videoSourceForFileURL:(id)arg1;

- (void).cxx_destruct;
- (long long)accessibilityDescriptionMetadataStatus;
- (long long)captionMetadataStatus;
- (void)checkForAccessibilityDescriptionData;
- (void)checkForCaptionData;
- (void)checkForImageEligibleForTranscoding;
- (void)checkForLivePhotoPairingIdentifier;
- (void)checkForLocationData;
- (void)checkForVideoEligibleForTranscoding;
- (bool)containsHEIFImage;
- (bool)containsHEVCVideo;
- (bool)containsImageWithFormatEligibleForTranscoding;
- (bool)containsProResVideoWithFormatEligibleForTranscoding;
- (bool)containsVideoWithFormatEligibleForTranscoding;
- (bool)determineMediaTypeFromPathExtensionWithError:(id*)arg1;
- (bool)didCheckForLivePhotoPairingIdentifier;
- (bool)didCheckForVideoWithFormatEligibleForTranscoding;
- (unsigned int)firstVideoTrackCodec;
- (struct CGSize { double x1; double x2; })imageDimensions;
- (bool)isHDR;
- (id)livePhotoPairingIdentifier;
- (long long)locationMetadataStatus;
- (void)markAccessibilityDescriptionMetadataAsCheckedWithStatus:(long long)arg1;
- (void)markCaptionMetadataAsCheckedWithStatus:(long long)arg1;
- (void)markContainsVideoEligibleForTranscodingAsCheckedWithValue:(bool)arg1 codec:(unsigned int)arg2;
- (void)markLivePhotoPairingIdentifierAsCheckedWithValue:(id)arg1;
- (void)markLocationMetadataAsCheckedWithStatus:(long long)arg1;
- (id)metadata;
- (bool)preflightWithError:(id*)arg1;
- (bool)preflighted;
- (id)renderOriginatingSignature;
- (void)setAccessibilityDescriptionMetadataStatus:(long long)arg1;
- (void)setCaptionMetadataStatus:(long long)arg1;
- (void)setContainsVideoWithFormatEligibleForTranscoding:(bool)arg1;
- (void)setDidCheckForLivePhotoPairingIdentifier:(bool)arg1;
- (void)setDidCheckForVideoWithFormatEligibleForTranscoding:(bool)arg1;
- (void)setFirstVideoTrackCodec:(unsigned int)arg1;
- (void)setImageDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setLivePhotoPairingIdentifier:(id)arg1;
- (void)setLocationMetadataStatus:(long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPreflighted:(bool)arg1;
- (void)setRenderOriginatingSignature:(id)arg1;
- (long long)sourceAccessibilityDescriptionMetadataStatus;
- (long long)sourceCaptionMetadataStatus;
- (long long)sourceLocationMetadataStatus;
- (id)transcodingEligibleVideoTrackFormatDescription;

@end
