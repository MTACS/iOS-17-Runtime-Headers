
@interface VCSessionMediaNegotiator : NSObject <VCMediaNegotiatorProtocol> {
    <VCMediaNegotiatorProtocol> * _activeNegotiator;
    VCMediaNegotiatorLocalConfiguration * _localSettings;
    NSMutableDictionary * _mediaNegotiatorMap;
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

+ (bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;
+ (id)mediaBlobForVersion:(int)arg1 negotiationData:(id)arg2;
+ (id)negotiationDataWithVersion1:(id)arg1 version2:(id)arg2;
+ (id)negotiationDataWithVersion:(int)arg1 mediaBlob:(id)arg2;
+ (id)serializeNegotiationData:(id)arg1;
+ (id)streamGroupIDsWithMediaBlob:(id)arg1;
+ (id)unserializeNegotiationData:(id)arg1;

- (void)dealloc;
- (id)initWithLocalConfiguration:(id)arg1;
- (id)localSettings;
- (id)negotiatedAudioSettings;
- (id)negotiatedFaceTimeSettings;
- (id)negotiatedMediaRecorderSettings;
- (id)negotiatedResultsForGroupID:(unsigned int)arg1;
- (id)negotiatedScreenSettings;
- (id)negotiatedSettings;
- (id)negotiatedStreamGroups;
- (id)negotiatedVideoSettings;
- (id)negotiationData;
- (bool)processRemoteNegotiationData:(id)arg1;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;

@end
