
@interface _MRVolumeControlCapabilitiesDidChangeMessageProtobuf : PBCodable <NSCopying> {
    _MRVolumeControlAvailabilityProtobuf * _capabilities;
    NSString * _endpointUID;
    NSString * _outputDeviceUID;
}

@property (nonatomic, retain) _MRVolumeControlAvailabilityProtobuf *capabilities;
@property (nonatomic, retain) NSString *endpointUID;
@property (nonatomic, readonly) bool hasCapabilities;
@property (nonatomic, readonly) bool hasEndpointUID;
@property (nonatomic, readonly) bool hasOutputDeviceUID;
@property (nonatomic, retain) NSString *outputDeviceUID;

- (void).cxx_destruct;
- (id)capabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endpointUID;
- (bool)hasCapabilities;
- (bool)hasEndpointUID;
- (bool)hasOutputDeviceUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDeviceUID;
- (bool)readFrom:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setEndpointUID:(id)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
