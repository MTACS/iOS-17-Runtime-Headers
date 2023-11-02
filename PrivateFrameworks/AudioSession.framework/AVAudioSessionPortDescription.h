
@interface AVAudioSessionPortDescription : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) NSString *UID;
@property (nonatomic, readonly) NSArray *channels;
@property (nonatomic, readonly) NSArray *dataSources;
@property (readonly) bool hasHardwareVoiceCallProcessing;
@property (nonatomic, readonly) NSString *portName;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) AVAudioSessionDataSourceDescription *preferredDataSource;
@property (nonatomic, readonly) AVAudioSessionDataSourceDescription *selectedDataSource;
@property (getter=isSpatialAudioEnabled, readonly) bool spatialAudioEnabled;

+ (id)privateCreateArray:(id)arg1 owningSession:(id)arg2;

- (id)UID;
- (id)channels;
- (void)configureChannelsAndDataSources:(id)arg1;
- (id)dataSources;
- (void)dealloc;
- (id)description;
- (unsigned long long)endpointType;
- (bool)hasHardwareVoiceCallProcessing;
- (unsigned long long)hash;
- (id)initWithRawPortDescriptionXPC:(id)arg1 owningSession:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPort:(id)arg1 compareStrict:(bool)arg2;
- (bool)isHeadphones;
- (bool)isLiveListenSupported;
- (bool)isLowLatencyAirPlay;
- (bool)isSpatialAudioEnabled;
- (id)portName;
- (long long)portSubType;
- (id)portType;
- (id)preferredDataSource;
- (id)privateGetID;
- (struct PortDescriptionImpl { id x1; id x2; id x3; id x4; id x5; bool x6; bool x7; bool x8; bool x9; bool x10; long long x11; unsigned long long x12; id x13; id x14; id x15; id x16; }*)privateGetImplementation;
- (id)selectedDataSource;
- (bool)setPreferredDataSource:(id)arg1 error:(id*)arg2;
- (void)setSupportsSpatialAudio:(bool)arg1;

@end
