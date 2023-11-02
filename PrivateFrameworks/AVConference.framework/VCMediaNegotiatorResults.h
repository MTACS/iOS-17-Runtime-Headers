
@interface VCMediaNegotiatorResults : NSObject {
    int  _accessNetworkType;
    NSMutableSet * _bandwidthConfigurations;
    int  _controlChannelVersion;
    unsigned char  _mediaControlInfoVersion;
    NSString * _remoteBasebandCodec;
    unsigned int  _remoteBasebandCodecSampleRate;
    union tagNTP { 
        unsigned long long wide; 
        struct { 
            unsigned int frac; 
            unsigned int sec; 
        } time; 
    }  _remoteBlobCreationTime;
    unsigned int  _remoteBlobVersion;
    NSString * _remoteUserAgent;
    bool  _supportsDynamicMaxBitrate;
}

@property (nonatomic) int accessNetworkType;
@property (nonatomic, readonly) NSSet *bandwidthConfigurations;
@property (nonatomic) int controlChannelVersion;
@property (nonatomic) unsigned char mediaControlInfoVersion;
@property (nonatomic, retain) NSString *remoteBasebandCodec;
@property (nonatomic) unsigned int remoteBasebandCodecSampleRate;
@property (nonatomic) union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; } remoteBlobCreationTime;
@property (nonatomic) unsigned int remoteBlobVersion;
@property (nonatomic, retain) NSString *remoteUserAgent;
@property (nonatomic) bool supportsDynamicMaxBitrate;

- (int)accessNetworkType;
- (void)addBandwidthConfigurations:(id)arg1;
- (id)bandwidthConfigurations;
- (int)controlChannelVersion;
- (void)dealloc;
- (id)init;
- (unsigned int)maxBandwidthWithOperatingMode:(int)arg1 connectionType:(int)arg2;
- (unsigned char)mediaControlInfoVersion;
- (id)remoteBasebandCodec;
- (unsigned int)remoteBasebandCodecSampleRate;
- (union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })remoteBlobCreationTime;
- (unsigned int)remoteBlobVersion;
- (id)remoteUserAgent;
- (void)setAccessNetworkType:(int)arg1;
- (void)setControlChannelVersion:(int)arg1;
- (void)setMediaControlInfoVersion:(unsigned char)arg1;
- (void)setRemoteBasebandCodec:(id)arg1;
- (void)setRemoteBasebandCodecSampleRate:(unsigned int)arg1;
- (void)setRemoteBlobCreationTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (void)setRemoteBlobVersion:(unsigned int)arg1;
- (void)setRemoteUserAgent:(id)arg1;
- (void)setSupportsDynamicMaxBitrate:(bool)arg1;
- (bool)supportsDynamicMaxBitrate;

@end
