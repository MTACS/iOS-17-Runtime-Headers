
@interface SIRINLUINTERNALEMBEDDINGEmbeddingRequest : PBRequest <NSCopying> {
    NSString * _text;
    SIRINLUINTERNALTokenChain * _tokenChain;
}

@property (nonatomic, readonly) bool hasText;
@property (nonatomic, readonly) bool hasTokenChain;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) SIRINLUINTERNALTokenChain *tokenChain;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasText;
- (bool)hasTokenChain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTokenChain:(id)arg1;
- (id)text;
- (id)tokenChain;
- (void)writeTo:(id)arg1;

@end
