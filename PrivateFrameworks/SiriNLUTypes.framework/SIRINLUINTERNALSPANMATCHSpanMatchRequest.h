
@interface SIRINLUINTERNALSPANMATCHSpanMatchRequest : PBRequest <NSCopying> {
    SIRINLUEXTERNALUUID * _asrId;
    SIRINLUEXTERNALNLContext * _nlContext;
    SIRINLUINTERNALTokenChain * _tokenChain;
    NSString * _utterance;
}

@property (nonatomic, retain) SIRINLUEXTERNALUUID *asrId;
@property (nonatomic, readonly) bool hasAsrId;
@property (nonatomic, readonly) bool hasNlContext;
@property (nonatomic, readonly) bool hasTokenChain;
@property (nonatomic, readonly) bool hasUtterance;
@property (nonatomic, retain) SIRINLUEXTERNALNLContext *nlContext;
@property (nonatomic, retain) SIRINLUINTERNALTokenChain *tokenChain;
@property (nonatomic, retain) NSString *utterance;

- (void).cxx_destruct;
- (id)asrId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAsrId;
- (bool)hasNlContext;
- (bool)hasTokenChain;
- (bool)hasUtterance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nlContext;
- (bool)readFrom:(id)arg1;
- (void)setAsrId:(id)arg1;
- (void)setNlContext:(id)arg1;
- (void)setTokenChain:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)tokenChain;
- (id)utterance;
- (void)writeTo:(id)arg1;

@end
