
@interface VCMediaNegotiationBlobV2 : PBCodable <NSCopying> {
    VCMediaNegotiationBlobV2BandwidthSettings * _bandwidthSettings;
    VCMediaNegotiationBlobV2CameraSettingsU1 * _cameraU1;
    VCMediaNegotiationBlobV2CodecFeatures * _codecSupport;
    VCMediaNegotiationBlobV2GeneralInfo * _generalInfo;
    VCMediaNegotiationBlobV2MicrophoneSettingsU1 * _microphoneU1;
    VCMediaNegotiationBlobV2MomentsSettings * _momentsSettings;
    NSMutableArray * _streamGroups;
}

@property (nonatomic, retain) VCMediaNegotiationBlobV2BandwidthSettings *bandwidthSettings;
@property (nonatomic, retain) VCMediaNegotiationBlobV2CameraSettingsU1 *cameraU1;
@property (nonatomic, retain) VCMediaNegotiationBlobV2CodecFeatures *codecSupport;
@property (nonatomic, retain) VCMediaNegotiationBlobV2GeneralInfo *generalInfo;
@property (nonatomic, readonly) bool hasBandwidthSettings;
@property (nonatomic, readonly) bool hasCameraU1;
@property (nonatomic, readonly) bool hasCodecSupport;
@property (nonatomic, readonly) bool hasGeneralInfo;
@property (nonatomic, readonly) bool hasMicrophoneU1;
@property (nonatomic, readonly) bool hasMomentsSettings;
@property (nonatomic, retain) VCMediaNegotiationBlobV2MicrophoneSettingsU1 *microphoneU1;
@property (nonatomic, retain) VCMediaNegotiationBlobV2MomentsSettings *momentsSettings;
@property (nonatomic, retain) NSMutableArray *streamGroups;

+ (Class)streamGroupsType;

- (void)addStreamGroups:(id)arg1;
- (id)bandwidthSettings;
- (id)cameraU1;
- (void)clearStreamGroups;
- (id)codecSupport;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)generalInfo;
- (bool)hasBandwidthSettings;
- (bool)hasCameraU1;
- (bool)hasCodecSupport;
- (bool)hasGeneralInfo;
- (bool)hasMicrophoneU1;
- (bool)hasMomentsSettings;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)microphoneU1;
- (id)momentsSettings;
- (void)printWithTitle:(id)arg1 logFile:(void*)arg2;
- (bool)readFrom:(id)arg1;
- (void)setBandwidthSettings:(id)arg1;
- (void)setCameraU1:(id)arg1;
- (void)setCodecSupport:(id)arg1;
- (void)setGeneralInfo:(id)arg1;
- (void)setMicrophoneU1:(id)arg1;
- (void)setMomentsSettings:(id)arg1;
- (void)setStreamGroups:(id)arg1;
- (id)streamGroups;
- (id)streamGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)streamGroupsCount;
- (void)writeTo:(id)arg1;

@end
