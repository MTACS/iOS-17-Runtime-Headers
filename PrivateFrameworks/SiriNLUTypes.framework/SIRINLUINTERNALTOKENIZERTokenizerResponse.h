
@interface SIRINLUINTERNALTOKENIZERTokenizerResponse : PBCodable <NSCopying> {
    SIRINLUEXTERNALUUID * _asrId;
    NSString * _text;
    SIRINLUINTERNALTokenChain * _tokenChain;
}

@property (nonatomic, retain) SIRINLUEXTERNALUUID *asrId;
@property (nonatomic, readonly) bool hasAsrId;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic, readonly) bool hasTokenChain;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) SIRINLUINTERNALTokenChain *tokenChain;

- (void).cxx_destruct;
- (id)asrId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAsrId;
- (bool)hasText;
- (bool)hasTokenChain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAsrId:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTokenChain:(id)arg1;
- (id)text;
- (id)tokenChain;
- (void)writeTo:(id)arg1;

@end
