
@interface VCAudioStreamCodecConfig : NSObject {
    long long  _codecType;
    bool  _dtmf;
    bool  _dtxEnabled;
    unsigned short  _evsChannelAwareOffset;
    bool  _evsHeaderFullOnly;
    bool  _isOpusInBandFecEnabled;
    unsigned int  _networkPayload;
    bool  _octetAligned;
    unsigned long long  _pTime;
    int  _preferredMode;
    NSMutableArray * _supportedBandwidths;
    NSMutableArray * _supportedModes;
}

@property (nonatomic, readonly) long long codecType;
@property (getter=isDTMF, nonatomic) bool dtmf;
@property (getter=isDTXEnabled, nonatomic) bool dtxEnabled;
@property (nonatomic) unsigned short evsChannelAwareOffset;
@property (nonatomic) bool evsHeaderFullOnly;
@property (nonatomic, readonly) bool isComfortNoise;
@property (nonatomic) bool isOpusInBandFecEnabled;
@property (nonatomic) unsigned int networkPayload;
@property (getter=isOctetAligned, nonatomic) bool octetAligned;
@property (nonatomic) unsigned long long pTime;
@property (nonatomic) int preferredMode;
@property (nonatomic, retain) NSArray *supportedBandwidths;
@property (nonatomic, retain) NSArray *supportedModes;

- (long long)codecType;
- (void)dealloc;
- (unsigned short)evsChannelAwareOffset;
- (bool)evsHeaderFullOnly;
- (id)initWithCodecType:(long long)arg1;
- (bool)isComfortNoise;
- (bool)isDTMF;
- (bool)isDTXEnabled;
- (bool)isOctetAligned;
- (bool)isOpusInBandFecEnabled;
- (unsigned int)networkPayload;
- (unsigned long long)pTime;
- (int)preferredMode;
- (void)setDtmf:(bool)arg1;
- (void)setDtxEnabled:(bool)arg1;
- (void)setEvsChannelAwareOffset:(unsigned short)arg1;
- (void)setEvsHeaderFullOnly:(bool)arg1;
- (void)setIsOpusInBandFecEnabled:(bool)arg1;
- (void)setNetworkPayload:(unsigned int)arg1;
- (void)setOctetAligned:(bool)arg1;
- (void)setPTime:(unsigned long long)arg1;
- (void)setPreferredMode:(int)arg1;
- (void)setPreferredModeWithClientMode:(int)arg1;
- (void)setSupportedBandwidths:(id)arg1;
- (void)setSupportedModes:(id)arg1;
- (void)setupAMRModesWithClientModeMask:(unsigned int)arg1;
- (void)setupAMRWBModesWithClientModeMask:(unsigned int)arg1;
- (void)setupCodecBandwidthsWithClientBandwidthMask:(unsigned int)arg1;
- (void)setupEVSModesWithClientModeMask:(unsigned int)arg1;
- (void)setupModesWithClientModeMask:(unsigned int)arg1;
- (id)supportedBandwidths;
- (id)supportedModes;

@end
