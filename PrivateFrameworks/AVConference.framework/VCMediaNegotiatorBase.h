
@interface VCMediaNegotiatorBase : NSObject <VCMediaNegotiatorProtocol> {
    VCMediaNegotiatorLocalConfiguration * _localSettings;
    VCMediaNegotiatorResultsAudio * _negotiatedAudioSettings;
    VCMediaNegotiatorResultsFaceTimeSettings * _negotiatedFaceTimeSettings;
    VCMediaNegotiatorResultsMediaRecorder * _negotiatedMediaRecorderSettings;
    VCMediaNegotiatorResultsVideo * _negotiatedScreenSettings;
    VCMediaNegotiatorResults * _negotiatedSettings;
    NSMutableArray * _negotiatedStreamGroups;
    VCMediaNegotiatorResultsAudio * _negotiatedSystemAudioResults;
    VCMediaNegotiatorResultsVideo * _negotiatedVideoSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VCMediaNegotiatorLocalConfiguration *localSettings;
@property (nonatomic, readonly) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings;
@property (nonatomic, readonly) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings;
@property (nonatomic, readonly) VCMediaNegotiatorResultsMediaRecorder *negotiatedMediaRecorderSettings;
@property (nonatomic, readonly) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings;
@property (nonatomic, readonly) VCMediaNegotiatorResults *negotiatedSettings;
@property (nonatomic, readonly) NSArray *negotiatedStreamGroups;
@property (nonatomic, readonly) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings;
@property (readonly) Class superclass;

+ (void)applyCellularPreferredRule:(id)arg1;
+ (id)getPreferredVideoPayloadList:(id)arg1 localSupportedPayloads:(id)arg2;
+ (bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;
+ (id)negotiateVideoMaxResolutionWithEncodeRules:(id)arg1 decodeRules:(id)arg2 isEncoder:(bool)arg3;
+ (bool)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 videoSettings:(id)arg4 localVideoRuleCollection:(id)arg5 remoteVideoRuleCollection:(id)arg6;
+ (void)setupNegotiatedAudioPayloads:(id)arg1 negotiatedAudioSettings:(id)arg2 primaryPayloadPreference:(id)arg3;
+ (id)streamGroupIDsWithMediaBlob:(id)arg1;
+ (void)updateScreenRuleCollections:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void)dealloc;
- (id)initWithLocalSettings:(id)arg1;
- (id)localSettings;
- (id)negotiatedAudioSettings;
- (id)negotiatedFaceTimeSettings;
- (id)negotiatedMediaRecorderSettings;
- (id)negotiatedResultsForGroupID:(unsigned int)arg1;
- (id)negotiatedResultsForGroupID:(unsigned int)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;
- (id)negotiatedScreenSettings;
- (id)negotiatedSettings;
- (id)negotiatedStreamGroupConfigForGroupID:(unsigned int)arg1 negotiatedStreamGroupConfigs:(id)arg2;
- (id)negotiatedStreamGroups;
- (id)negotiatedVideoSettings;
- (id)negotiationData;
- (bool)processRemoteNegotiationData:(id)arg1;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;

@end
