
@interface NPKProtoStandalonePaymentProvisioningFlowDidEncounterErrorResponse : PBCodable <NSCopying> {
    NPKProtoStandaloneError * _error;
    NPKProtoStandaloneResponseHeader * _responseHeader;
}

@property (nonatomic, retain) NPKProtoStandaloneError *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, retain) NPKProtoStandaloneResponseHeader *responseHeader;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseHeader;
- (void)setError:(id)arg1;
- (void)setResponseHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
