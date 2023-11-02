
@interface _MRDestinationProtobuf : PBCodable <NSCopying> {
    _MRAVEndpointDescriptorProtobuf * _endpoint;
    NSString * _outputContextUID;
    NSString * _outputDeviceUID;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
}

@property (nonatomic, retain) _MRAVEndpointDescriptorProtobuf *endpoint;
@property (nonatomic, readonly) bool hasEndpoint;
@property (nonatomic, readonly) bool hasOutputContextUID;
@property (nonatomic, readonly) bool hasOutputDeviceUID;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, retain) NSString *outputContextUID;
@property (nonatomic, retain) NSString *outputDeviceUID;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endpoint;
- (bool)hasEndpoint;
- (bool)hasOutputContextUID;
- (bool)hasOutputDeviceUID;
- (bool)hasPlayerPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputContextUID;
- (id)outputDeviceUID;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setOutputContextUID:(id)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
