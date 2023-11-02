
@interface SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingRequest : PBRequest <NSCopying> {
    SIRINLUEXTERNALRequestID * _requestId;
    NSString * _text;
}

@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic, retain) SIRINLUEXTERNALRequestID *requestId;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestId;
- (bool)hasText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)writeTo:(id)arg1;

@end
