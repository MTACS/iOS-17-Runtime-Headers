
@interface SIRINLUEXTERNALSSU_INFERENCESsuInferenceRequest : PBRequest <NSCopying> {
    SIRINLUEXTERNALRequestID * _requestId;
    NSString * _utterance;
}

@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasUtterance;
@property (nonatomic, retain) SIRINLUEXTERNALRequestID *requestId;
@property (nonatomic, retain) NSString *utterance;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestId;
- (bool)hasUtterance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)utterance;
- (void)writeTo:(id)arg1;

@end
