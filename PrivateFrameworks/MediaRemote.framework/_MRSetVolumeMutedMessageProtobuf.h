
@interface _MRSetVolumeMutedMessageProtobuf : PBCodable <NSCopying> {
    _MRRequestDetailsProtobuf * _details;
    struct { 
        unsigned int isMuted : 1; 
    }  _has;
    bool  _isMuted;
    NSString * _outputDeviceUID;
}

@property (nonatomic, retain) _MRRequestDetailsProtobuf *details;
@property (nonatomic, readonly) bool hasDetails;
@property (nonatomic) bool hasIsMuted;
@property (nonatomic, readonly) bool hasOutputDeviceUID;
@property (nonatomic) bool isMuted;
@property (nonatomic, retain) NSString *outputDeviceUID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (bool)hasDetails;
- (bool)hasIsMuted;
- (bool)hasOutputDeviceUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMuted;
- (void)mergeFrom:(id)arg1;
- (id)outputDeviceUID;
- (bool)readFrom:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setHasIsMuted:(bool)arg1;
- (void)setIsMuted:(bool)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
