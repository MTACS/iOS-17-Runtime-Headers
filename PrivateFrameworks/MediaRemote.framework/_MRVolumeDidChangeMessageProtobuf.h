
@interface _MRVolumeDidChangeMessageProtobuf : PBCodable <NSCopying> {
    NSString * _endpointUID;
    struct { 
        unsigned int volume : 1; 
    }  _has;
    NSString * _outputDeviceUID;
    float  _volume;
}

@property (nonatomic, retain) NSString *endpointUID;
@property (nonatomic, readonly) bool hasEndpointUID;
@property (nonatomic, readonly) bool hasOutputDeviceUID;
@property (nonatomic) bool hasVolume;
@property (nonatomic, retain) NSString *outputDeviceUID;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endpointUID;
- (bool)hasEndpointUID;
- (bool)hasOutputDeviceUID;
- (bool)hasVolume;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDeviceUID;
- (bool)readFrom:(id)arg1;
- (void)setEndpointUID:(id)arg1;
- (void)setHasVolume:(bool)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)writeTo:(id)arg1;

@end
