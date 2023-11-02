
@interface VCMediaNegotiatorStreamGroupCodecConfiguration : NSObject <NSCopying> {
    bool  _H264LevelAsymmetryAllowed;
    bool  _H264PacketizationMode;
    unsigned int  _cipherSuite;
    long long  _codecType;
    unsigned int  _encoderUsage;
    unsigned long long  _pTime;
    unsigned long long  _profileLevelId;
    bool  _rtcpPSFB_FIREnabled;
    bool  _rtcpPSFB_PLIEnabled;
    bool  _rtcpRTPFB_GNACKEnabled;
    bool  _rtcpSREnabled;
    unsigned int  _rtpPayload;
    unsigned long long  _serializedSize;
    bool  _useInBandFEC;
}

@property (nonatomic) bool H264LevelAsymmetryAllowed;
@property (nonatomic) bool H264PacketizationMode;
@property (nonatomic) unsigned int cipherSuite;
@property (nonatomic) long long codecType;
@property (nonatomic) unsigned int encoderUsage;
@property (nonatomic) unsigned long long pTime;
@property (nonatomic) unsigned long long profileLevelId;
@property (nonatomic) bool rtcpPSFB_FIREnabled;
@property (nonatomic) bool rtcpPSFB_PLIEnabled;
@property (nonatomic) bool rtcpRTPFB_GNACKEnabled;
@property (nonatomic) bool rtcpSREnabled;
@property (nonatomic) unsigned int rtpPayload;
@property (nonatomic) unsigned long long serializedSize;
@property (nonatomic) bool useInBandFEC;

- (bool)H264LevelAsymmetryAllowed;
- (bool)H264PacketizationMode;
- (unsigned int)cipherSuite;
- (long long)codecType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)encoderUsage;
- (bool)isEqual:(id)arg1;
- (unsigned long long)pTime;
- (unsigned long long)profileLevelId;
- (bool)rtcpPSFB_FIREnabled;
- (bool)rtcpPSFB_PLIEnabled;
- (bool)rtcpRTPFB_GNACKEnabled;
- (bool)rtcpSREnabled;
- (unsigned int)rtpPayload;
- (unsigned long long)serializedSize;
- (void)setCipherSuite:(unsigned int)arg1;
- (void)setCodecType:(long long)arg1;
- (void)setEncoderUsage:(unsigned int)arg1;
- (void)setH264LevelAsymmetryAllowed:(bool)arg1;
- (void)setH264PacketizationMode:(bool)arg1;
- (void)setPTime:(unsigned long long)arg1;
- (void)setProfileLevelId:(unsigned long long)arg1;
- (void)setRtcpPSFB_FIREnabled:(bool)arg1;
- (void)setRtcpPSFB_PLIEnabled:(bool)arg1;
- (void)setRtcpRTPFB_GNACKEnabled:(bool)arg1;
- (void)setRtcpSREnabled:(bool)arg1;
- (void)setRtpPayload:(unsigned int)arg1;
- (void)setSerializedSize:(unsigned long long)arg1;
- (void)setUseInBandFEC:(bool)arg1;
- (bool)useInBandFEC;

@end
