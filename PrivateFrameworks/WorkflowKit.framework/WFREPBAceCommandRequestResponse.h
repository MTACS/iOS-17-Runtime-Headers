
@interface WFREPBAceCommandRequestResponse : PBCodable <NSCopying> {
    NSData * _aceCommandResponseData;
    WFREPBError * _error;
    NSString * _originatingRequestIdentifier;
}

@property (nonatomic, retain) NSData *aceCommandResponseData;
@property (nonatomic, retain) WFREPBError *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, retain) NSString *originatingRequestIdentifier;

- (void).cxx_destruct;
- (id)aceCommandResponseData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originatingRequestIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAceCommandResponseData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOriginatingRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
