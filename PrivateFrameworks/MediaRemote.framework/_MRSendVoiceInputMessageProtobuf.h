
@interface _MRSendVoiceInputMessageProtobuf : PBCodable <NSCopying> {
    _MRAudioDataBlockProtobuf * _dataBlock;
}

@property (nonatomic, retain) _MRAudioDataBlockProtobuf *dataBlock;
@property (nonatomic, readonly) bool hasDataBlock;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataBlock;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataBlock;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDataBlock:(id)arg1;
- (void)writeTo:(id)arg1;

@end
