
@protocol VCMediaNegotiatorProtocol <NSObject>

@required

+ (bool)initializeLocalConfiguration:(VCMediaNegotiatorLocalConfiguration *)arg1 negotiationData:(NSData *)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;
+ (NSSet *)streamGroupIDsWithMediaBlob:(NSData *)arg1;

- (VCMediaNegotiatorLocalConfiguration *)localSettings;
- (VCMediaNegotiatorResultsAudio *)negotiatedAudioSettings;
- (VCMediaNegotiatorResultsFaceTimeSettings *)negotiatedFaceTimeSettings;
- (VCMediaNegotiatorResultsMediaRecorder *)negotiatedMediaRecorderSettings;
- (id)negotiatedResultsForGroupID:(unsigned int)arg1;
- (VCMediaNegotiatorResultsVideo *)negotiatedScreenSettings;
- (VCMediaNegotiatorResults *)negotiatedSettings;
- (NSArray *)negotiatedStreamGroups;
- (VCMediaNegotiatorResultsVideo *)negotiatedVideoSettings;
- (NSData *)negotiationData;
- (bool)processRemoteNegotiationData:(NSData *)arg1;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;

@end
