
@interface MRAVRoutingDiscoverySessionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _alwaysAllowUpdates;
    bool  _enableThrottling;
    unsigned int  _features;
    NSString * _outputDeviceUID;
    bool  _populatesExternalDevice;
    NSString * _routingContextUID;
    unsigned int  _targetAudioSessionID;
}

@property (nonatomic) bool alwaysAllowUpdates;
@property (nonatomic) bool enableThrottling;
@property (nonatomic, readonly) unsigned int features;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, copy) NSString *outputDeviceUID;
@property (nonatomic) bool populatesExternalDevice;
@property (nonatomic, readonly, copy) _MRDiscoverySessionConfigurationProtobuf *protobuf;
@property (nonatomic, copy) NSString *routingContextUID;
@property (nonatomic) unsigned int targetAudioSessionID;

+ (id)configurationWithEndpointFeatures:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)alwaysAllowUpdates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enableThrottling;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)features;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpointFeatures:(unsigned int)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (id)outputDeviceUID;
- (bool)populatesExternalDevice;
- (id)protobuf;
- (id)routingContextUID;
- (void)setAlwaysAllowUpdates:(bool)arg1;
- (void)setEnableThrottling:(bool)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)setPopulatesExternalDevice:(bool)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)setTargetAudioSessionID:(unsigned int)arg1;
- (unsigned int)targetAudioSessionID;

@end
