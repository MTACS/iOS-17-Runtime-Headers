
@interface SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherRequest : PBRequest <NSCopying> {
    SIRINLUEXTERNALNLContext * _nlContext;
    SIRINLUEXTERNALUUID * _nluRequestId;
    SIRINLUEXTERNALRequestID * _requestId;
    SIRINLUINTERNALTokenChain * _tokenChain;
}

@property (nonatomic, readonly) bool hasNlContext;
@property (nonatomic, readonly) bool hasNluRequestId;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasTokenChain;
@property (nonatomic, retain) SIRINLUEXTERNALNLContext *nlContext;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *nluRequestId;
@property (nonatomic, retain) SIRINLUEXTERNALRequestID *requestId;
@property (nonatomic, retain) SIRINLUINTERNALTokenChain *tokenChain;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNlContext;
- (bool)hasNluRequestId;
- (bool)hasRequestId;
- (bool)hasTokenChain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nlContext;
- (id)nluRequestId;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setNlContext:(id)arg1;
- (void)setNluRequestId:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setTokenChain:(id)arg1;
- (id)tokenChain;
- (void)writeTo:(id)arg1;

@end
