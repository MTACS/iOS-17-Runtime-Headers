
@interface CKDPCodeFunctionInvokeRequestAttestationRequest : PBRequest <NSCopying> {
    NSData * _entropy;
}

@property (nonatomic, retain) NSData *entropy;
@property (nonatomic, readonly) bool hasEntropy;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entropy;
- (bool)hasEntropy;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntropy:(id)arg1;
- (void)writeTo:(id)arg1;

@end
