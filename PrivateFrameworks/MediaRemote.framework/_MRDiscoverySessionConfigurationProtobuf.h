
@interface _MRDiscoverySessionConfigurationProtobuf : PBCodable <NSCopying> {
    bool  _alwaysAllowUpdates;
    bool  _enableThrottling;
    int  _features;
    struct { 
        unsigned int features : 1; 
        unsigned int targetSessionID : 1; 
        unsigned int alwaysAllowUpdates : 1; 
        unsigned int enableThrottling : 1; 
        unsigned int populatesExternalDevice : 1; 
    }  _has;
    NSString * _outputDeviceUID;
    bool  _populatesExternalDevice;
    NSString * _routingContextUID;
    unsigned int  _targetSessionID;
}

@property (nonatomic) bool alwaysAllowUpdates;
@property (nonatomic) bool enableThrottling;
@property (nonatomic) int features;
@property (nonatomic) bool hasAlwaysAllowUpdates;
@property (nonatomic) bool hasEnableThrottling;
@property (nonatomic) bool hasFeatures;
@property (nonatomic, readonly) bool hasOutputDeviceUID;
@property (nonatomic) bool hasPopulatesExternalDevice;
@property (nonatomic, readonly) bool hasRoutingContextUID;
@property (nonatomic) bool hasTargetSessionID;
@property (nonatomic, retain) NSString *outputDeviceUID;
@property (nonatomic) bool populatesExternalDevice;
@property (nonatomic, retain) NSString *routingContextUID;
@property (nonatomic) unsigned int targetSessionID;

- (void).cxx_destruct;
- (int)StringAsFeatures:(id)arg1;
- (bool)alwaysAllowUpdates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableThrottling;
- (int)features;
- (id)featuresAsString:(int)arg1;
- (bool)hasAlwaysAllowUpdates;
- (bool)hasEnableThrottling;
- (bool)hasFeatures;
- (bool)hasOutputDeviceUID;
- (bool)hasPopulatesExternalDevice;
- (bool)hasRoutingContextUID;
- (bool)hasTargetSessionID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDeviceUID;
- (bool)populatesExternalDevice;
- (bool)readFrom:(id)arg1;
- (id)routingContextUID;
- (void)setAlwaysAllowUpdates:(bool)arg1;
- (void)setEnableThrottling:(bool)arg1;
- (void)setFeatures:(int)arg1;
- (void)setHasAlwaysAllowUpdates:(bool)arg1;
- (void)setHasEnableThrottling:(bool)arg1;
- (void)setHasFeatures:(bool)arg1;
- (void)setHasPopulatesExternalDevice:(bool)arg1;
- (void)setHasTargetSessionID:(bool)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)setPopulatesExternalDevice:(bool)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)setTargetSessionID:(unsigned int)arg1;
- (unsigned int)targetSessionID;
- (void)writeTo:(id)arg1;

@end
