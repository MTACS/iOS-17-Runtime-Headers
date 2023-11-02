
@interface SIRINLUINTERNALNLV4_PARSERTokenisation : PBCodable <NSCopying> {
    NSString * _normalisedUtterance;
    NSString * _originalUtterance;
    SIRINLUINTERNALTokenChain * _tokenChain;
}

@property (nonatomic, readonly) bool hasNormalisedUtterance;
@property (nonatomic, readonly) bool hasOriginalUtterance;
@property (nonatomic, readonly) bool hasTokenChain;
@property (nonatomic, retain) NSString *normalisedUtterance;
@property (nonatomic, retain) NSString *originalUtterance;
@property (nonatomic, retain) SIRINLUINTERNALTokenChain *tokenChain;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNormalisedUtterance;
- (bool)hasOriginalUtterance;
- (bool)hasTokenChain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)normalisedUtterance;
- (id)originalUtterance;
- (bool)readFrom:(id)arg1;
- (void)setNormalisedUtterance:(id)arg1;
- (void)setOriginalUtterance:(id)arg1;
- (void)setTokenChain:(id)arg1;
- (id)tokenChain;
- (void)writeTo:(id)arg1;

@end
