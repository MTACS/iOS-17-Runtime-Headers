
@interface _MRDiscoveryUpdateOutputDevicesProtobufMessage : PBCodable <NSCopying> {
    _MRDiscoverySessionConfigurationProtobuf * _configuration;
    NSMutableArray * _outputDevices;
}

@property (nonatomic, retain) _MRDiscoverySessionConfigurationProtobuf *configuration;
@property (nonatomic, readonly) bool hasConfiguration;
@property (nonatomic, retain) NSMutableArray *outputDevices;

+ (Class)outputDevicesType;

- (void).cxx_destruct;
- (void)addOutputDevices:(id)arg1;
- (void)clearOutputDevices;
- (id)configuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfiguration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDevices;
- (id)outputDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)outputDevicesCount;
- (bool)readFrom:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setOutputDevices:(id)arg1;
- (void)writeTo:(id)arg1;

@end
