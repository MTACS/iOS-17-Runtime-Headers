
@interface IDSQRProtoQuicConnectionInfo : PBCodable <NSCopying> {
    NSData * _quicConnectionId;
    int  _quicConnectionType;
}

@property (nonatomic, retain) NSData *quicConnectionId;
@property (nonatomic) int quicConnectionType;

- (void).cxx_destruct;
- (int)StringAsQuicConnectionType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)quicConnectionId;
- (int)quicConnectionType;
- (id)quicConnectionTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setQuicConnectionId:(id)arg1;
- (void)setQuicConnectionType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
