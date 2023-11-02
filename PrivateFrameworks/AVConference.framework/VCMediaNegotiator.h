
@interface VCMediaNegotiator : VCMediaNegotiatorBase {
    bool  _isCellular16x9Capable;
    VCMediaNegotiatorResultsCaptions * _negotiatedCaptionsSettings;
    bool  _negotiationDone;
    long long  _negotiationMode;
    bool  _usePreNegotiation;
}

@property (nonatomic, readonly) bool isCaller;
@property (nonatomic, readonly) bool isCellular16x9Capable;
@property (nonatomic, readonly) VCMediaNegotiatorResultsCaptions *negotiatedCaptionsSettings;
@property (nonatomic, readonly) long long negotiationMode;
@property (nonatomic, readonly) bool usePreNegotiation;

+ (void)dumpBlob:(id)arg1 prefix:(id)arg2 force:(bool)arg3;
+ (bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;
+ (id)localConfigurationWithData:(id)arg1 deviceRole:(int)arg2 preferredAudioPayload:(int)arg3;
+ (unsigned int)mappedRemoteQualityIndexForQualityIndex:(unsigned int)arg1;
+ (id)negotiatedFeaturesStringWithLocalFeaturesString:(id)arg1 remoteFeaturesString:(id)arg2;
+ (id)negotiationBlobFromData:(id)arg1;
+ (id)newCompressedBlob:(id)arg1;
+ (id)newDecompressedBlob:(id)arg1;
+ (id)streamGroupIDsWithMediaBlob:(id)arg1;
+ (bool)validateLocalConfiguration:(id)arg1;
+ (bool)validateMultiwayAudioStreamConfigurations:(id)arg1;
+ (bool)validateMultiwayVideoStreamConfigurations:(id)arg1;

- (bool)addBandwidthSettingsForMediaBlob:(id)arg1 operatingMode:(int)arg2 connectionType:(int)arg3 maxBitrate:(unsigned int)arg4;
- (void)dealloc;
- (id)getPreferredScreenPayloadList;
- (id)initWithLocalSettings:(id)arg1;
- (id)initWithMode:(long long)arg1 localSettings:(id)arg2;
- (bool)isCaller;
- (bool)isCellular16x9Capable;
- (bool)isCellular16x9EncodeCapable;
- (bool)isNegotiationModeForScreenShare:(long long)arg1;
- (bool)isNegotiationModeValid:(long long)arg1;
- (bool)isVideoStreamSupported:(int)arg1;
- (id)localeWithMediaBlobLanguage:(int)arg1;
- (int)mediaBlobLanguageWithLocale:(id)arg1;
- (void)negotiateAudioAllowRecording:(id)arg1;
- (bool)negotiateAudioDTXPayload:(id)arg1;
- (bool)negotiateAudioPrimaryPayload:(id)arg1;
- (bool)negotiateAudioREDPayload:(id)arg1;
- (void)negotiateAudioSecondaryPayloads:(id)arg1;
- (bool)negotiateAudioSettings:(id)arg1;
- (void)negotiateAudioUseSBR:(id)arg1;
- (bool)negotiateCaptionsWithCaptionsSettings:(id)arg1;
- (bool)negotiateFaceTimeSettings:(id)arg1;
- (bool)negotiateHDRMode:(id)arg1 videoResults:(id)arg2;
- (bool)negotiateMomentsWithMomentsSettings:(id)arg1;
- (bool)negotiateMultiwayAudioStreams:(id)arg1;
- (bool)negotiateMultiwayVideoStreams:(id)arg1;
- (void)negotiateRTCPFB:(id)arg1;
- (bool)negotiateScreenSettings:(id)arg1;
- (void)negotiateTilesPerFrame:(id)arg1 negotiatedSettings:(id)arg2;
- (bool)negotiateVideoSettings:(id)arg1;
- (id)negotiatedCaptionsSettings;
- (id)negotiationData;
- (long long)negotiationMode;
- (id)newResponseBlob;
- (id)newStreamConfigFromMultiwayAudioStream:(id)arg1;
- (id)newStreamConfigFromMultiwayVideoStream:(id)arg1;
- (id)newStreamGroupCodecConfigForPayload:(int)arg1;
- (bool)processParameterSets:(id)arg1 videoResults:(id)arg2;
- (bool)processPixelFormats:(id)arg1 videoResults:(id)arg2;
- (bool)processRemoteNegotiationData:(id)arg1;
- (bool)processResponseBlob:(id)arg1;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;
- (void)saveRemoteBandwidthSettingsWithMediaBlob:(id)arg1;
- (bool)selectBestScreenRule:(id)arg1 preferredPayloadOrder:(id)arg2;
- (bool)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 localVideoRuleCollection:(id)arg4 remoteVideoSettings:(id)arg5 negotiatedVideoSettings:(id)arg6 isScreen:(bool)arg7;
- (id)selectVideoFeatureString:(id)arg1 selectedPayload:(int)arg2;
- (bool)setupAudioWithNegotiatedSettings:(id)arg1;
- (bool)setupBandwidthSettingsForMediaBlob:(id)arg1;
- (void)setupCaptionsForMediaBlob:(id)arg1;
- (void)setupFaceTimeSettingsForMediaBlob:(id)arg1 isResponse:(bool)arg2;
- (void)setupMomentsForMediaBlob:(id)arg1;
- (void)setupMultiwayAudioStreamsForMediaBlob:(id)arg1;
- (void)setupMultiwayVideoStreamsForMediaBlob:(id)arg1;
- (bool)setupScreenWithNegotiatedSettings:(id)arg1;
- (bool)setupVideoWithNegotiatedSettings:(id)arg1;
- (bool)usePreNegotiation;

@end
