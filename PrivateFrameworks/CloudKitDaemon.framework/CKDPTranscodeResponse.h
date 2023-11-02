
@interface CKDPTranscodeResponse : PBCodable <NSCopying> {
    CKCodeRecordTransport * _record;
}

@property (nonatomic, readonly) bool hasRecord;
@property (nonatomic, retain) CKCodeRecordTransport *record;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)record;
- (void)setRecord:(id)arg1;
- (void)writeTo:(id)arg1;

@end
