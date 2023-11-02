
@interface _MRGetVolumeMutedMessageProtobuf : PBCodable <NSCopying> {
    NSString * _outputDeviceUID;
}

@property (nonatomic, readonly) bool hasOutputDeviceUID;
@property (nonatomic, retain) NSString *outputDeviceUID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOutputDeviceUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDeviceUID;
- (bool)readFrom:(id)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
