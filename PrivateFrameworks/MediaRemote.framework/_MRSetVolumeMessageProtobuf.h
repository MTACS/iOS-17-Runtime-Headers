
@interface _MRSetVolumeMessageProtobuf : PBCodable <NSCopying> {
    _MRRequestDetailsProtobuf * _details;
    struct { 
        unsigned int volume : 1; 
    }  _has;
    NSString * _outputDeviceUID;
    float  _volume;
}

@property (nonatomic, retain) _MRRequestDetailsProtobuf *details;
@property (nonatomic, readonly) bool hasDetails;
@property (nonatomic, readonly) bool hasOutputDeviceUID;
@property (nonatomic) bool hasVolume;
@property (nonatomic, retain) NSString *outputDeviceUID;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (bool)hasDetails;
- (bool)hasOutputDeviceUID;
- (bool)hasVolume;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDeviceUID;
- (bool)readFrom:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setHasVolume:(bool)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)writeTo:(id)arg1;

@end
