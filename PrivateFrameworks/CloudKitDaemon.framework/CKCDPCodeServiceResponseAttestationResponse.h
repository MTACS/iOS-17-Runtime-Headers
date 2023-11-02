
@interface CKCDPCodeServiceResponseAttestationResponse : PBCodable <NSCopying> {
    NSMutableArray * _attestations;
}

@property (nonatomic, retain) NSMutableArray *attestations;

+ (Class)attestationsType;

- (void).cxx_destruct;
- (void)addAttestations:(id)arg1;
- (id)attestations;
- (id)attestationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attestationsCount;
- (void)clearAttestations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttestations:(id)arg1;
- (void)writeTo:(id)arg1;

@end
