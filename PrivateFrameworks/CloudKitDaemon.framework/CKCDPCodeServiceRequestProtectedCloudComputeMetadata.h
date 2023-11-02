
@interface CKCDPCodeServiceRequestProtectedCloudComputeMetadata : PBCodable <NSCopying> {
    NSMutableArray * _cryptoSessions;
}

@property (nonatomic, retain) NSMutableArray *cryptoSessions;

+ (Class)cryptoSessionsType;

- (void).cxx_destruct;
- (void)addCryptoSessions:(id)arg1;
- (void)clearCryptoSessions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cryptoSessions;
- (id)cryptoSessionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cryptoSessionsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCryptoSessions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
