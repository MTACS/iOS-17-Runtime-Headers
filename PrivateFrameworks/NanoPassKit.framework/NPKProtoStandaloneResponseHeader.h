
@interface NPKProtoStandaloneResponseHeader : PBCodable <NSCopying> {
    int  _protocolVersion;
    NSString * _sessionIdentifier;
}

@property (nonatomic, readonly) bool hasSessionIdentifier;
@property (nonatomic) int protocolVersion;
@property (nonatomic, retain) NSString *sessionIdentifier;

- (void).cxx_destruct;
- (int)StringAsProtocolVersion:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)protocolVersion;
- (id)protocolVersionAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionIdentifier;
- (void)setProtocolVersion:(int)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
