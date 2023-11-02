
@interface NPKProtoStandalonePaymentProvisioningFlowSessionEndedResponse : PBCodable <NSCopying> {
    NPKProtoStandaloneResponseHeader * _responseHeader;
}

@property (nonatomic, retain) NPKProtoStandaloneResponseHeader *responseHeader;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseHeader;
- (void)setResponseHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
