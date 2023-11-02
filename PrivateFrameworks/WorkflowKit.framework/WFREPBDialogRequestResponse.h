
@interface WFREPBDialogRequestResponse : PBCodable <NSCopying> {
    NSData * _dialogRequestResponseData;
    WFREPBError * _error;
    NSString * _originatingRequestIdentifier;
}

@property (nonatomic, retain) NSData *dialogRequestResponseData;
@property (nonatomic, retain) WFREPBError *error;
@property (nonatomic, readonly) bool hasDialogRequestResponseData;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, retain) NSString *originatingRequestIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dialogRequestResponseData;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasDialogRequestResponseData;
- (bool)hasError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originatingRequestIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setDialogRequestResponseData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOriginatingRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
